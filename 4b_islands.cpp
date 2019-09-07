#include<iostream>
#define ROW 50
#define COL 50
using namespace std;
    int M[ROW][COL],n1,n2;
    bool visited[ROW][COL];

        void input(){
        cout<<"ENTER THE NUMBER OF ROWS: "<<endl;
        cin>>n1;
        cout<<"ENTER THE NUMBER OF COLOUMNS: "<<endl;
        cin>>n2;
        for (int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
            visited[i][j]=false;
        }
        }
        cout<<"ENTER THE INPUT MATRIX OF THE GRAPH: "<<endl;
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                cin>>M[i][j];
            }}
       }
       int isSafe(int M[][COL],int row,int col,bool visited[][COL]){
           return ((row>=0)&&(row<n1)&&(col>=0)&&(col<n2)&&(M[row][col]&& !visited[row][col]));
       }
       void DFS(int M[][COL],int row,int col,bool visited[][COL]){
           static int rowNbr[]={-1,-1,-1,0,0,1,1,1};
           static int colNbr[]={-1,0,1,-1,1,-1,0,1};
           visited[row][col]=true;
           for(int k=0;k<8;k++){
            if(isSafe(M,row+rowNbr[k],col+colNbr[k],visited)){
                DFS(M,row+rowNbr[k],col+colNbr[k],visited);
            }
           }
       }
       int num_of_islands(int M[][COL]){
           int count=0;
           for(int i=0;i<n1;++i){
            for(int j=0;j<n2;++j){
                if(M[i][j] && !visited[i][j]){
                DFS(M,i,j,visited);
                count++;
                }
            }
           }
           return count;

       }


int main(){
//countisland c;
double time;
clock_t start,end;
input();
start=clock();
int n=num_of_islands(M);
end=clock();
cout<<n<<" ISLANDS PRESENT"<<endl;
time=(double)(end-start)/CLOCKS_PER_SEC;
cout<<"\n Time complexity is "<< time <<" secs";
return 0;
}
