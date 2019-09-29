#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int n;
void findorder(){
    cout<<"THE JOBS HAVE TO BE COMPLETED IN ORDER..."<<endl;
    int indegree[100],k,s[100],top=-1;
    for(int i=0;i<n;i++){
        indegree[i]=0;
        for(int j=0;j<n;j++){
            indegree[i] +=a[j][i];
        }
    }
    for(int i=0;i<n;i++){
            if(indegree[i]==0){
                s[++top]=i;
            }
    }
    while(top!=-1 ){
            k=s[top--];
            cout<<k<<" ";
            indegree[k]=-1;
            for(int r=0;r<n;r++){
                if(a[k][r]==1){
                    indegree[r] -=1;
                    if(indegree[r]== 0){
                        s[++top]=r;
                    }
                }
            }
    }
    cout<<endl;
}
int main(){
    int t,p,q,d;
    cout<<"ENTER NUMBER OF TEST CASES: "<<endl;
    cin>>t;
    cout<<t<<endl;
    while(t--){
        a[n][n] = {0};
        cout<<"ENTER NUMBER OF TASKS: "<<endl;
        cin>>n;
        cout<<n<<endl;
        cout<<"ENTER NUMBER OF DEPENDENCIES: s"<<endl;
        cin>>d;
        cout<<d<<endl;
        for(int i=0;i<d;i++){
            cout<<"ENTER PRE REQUISITE JOB: "<<endl;
            cin>>p;
            cout<<p<<endl;
            cout<<"ENTER THE JOB: "<<endl;
            cin>>q;
            cout<<q<<endl;
            a[p][q] = 1;
        }
        findorder();
    }
    
}
