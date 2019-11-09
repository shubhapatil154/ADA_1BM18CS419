#include<bits/stdc++.h>
#include<time.h>
using namespace std;
bool isMaxHeap(int a[],int n){
    bool flag;

    for(int i=1;i<=floor(n/2);i++){
        if((2*(i))+1<=n){
        if(a[i]>= max(a[2*i],a[(2*i)+1])){
            flag=true;
        }
        else{
            flag=false;
        break;
        }
        }
        else{
            if(a[i]>=a[2*(i)]){
                flag=true;
            }
            else{
                flag=false;
                break;
            }
        }
    }
    return flag;
}
int main(){
    int a[20],n,t;
    clock_t start,end;
    double time;
        cout<<"Enter the size of array: ";
        cin>>n;
        cout<<n<<endl;
        cout<<"Enter elements of the array: ";
        for(int i=1;i<=n;i++){
            cin>>a[i];
            cout<<a[i]<<" ";
        }
        cout<<endl;
        start = clock();
        if(isMaxHeap(a,n)){
            cout<<"True"<<endl;
        }
     
   else{
            cout<<"False"<<endl;
        }
    }
  end = clock();
  time=+(double)(end-start)/CLOCKS_PER_SEC;
  cout<<"Time complexity:%f",d;
  cout<<"\n";
}
