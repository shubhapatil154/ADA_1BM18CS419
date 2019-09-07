#include<iostream>
using namespace std;
class connected
{
int adjacent[10][10],visited[10],v,n;
public:
	void getdata()
	{
		cout<<"ENTER THE NUMBER OF COMPONENTS IN YOUR GRAPH"<<endl;
		cin>>n;
		for (int i=0;i<n;i++)
		{
			visited[i]=0;
		}
		cout<<"ENTER THE ADJACENCY MATRIX OF THE GRAPH"<<endl;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>adjacent[i][j];
			}
		}
	}

void dfs(int v)
{
	cout<<v+1<<",";
	visited[v]=1;
	for(int i=0;i<n;i++)
	{
		if(adjacent[v][i]==1 && visited[i]==0)
		{
			dfs(i);
		}
	}
}
void node_visited()
{
	for(int j=0;j<n;j++)
	{
		cout<<"CONNECTED COMPONENT"<<j+1;
		if(visited[j]==0)
		{
			dfs(j);
			cout<<"\n";
		}
	}
}
};
int main(){
    connected c;
    c.getdata();
    c.node_visited();
    return 0;

}
