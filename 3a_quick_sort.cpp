/* Dynamic Programming implementation of LCS problem */
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<time.h>

using namespace std;
void lcs( char *X, char *Y, int m, int n )
{
   int L[m+1][n+1];
   for (int i=0; i<=m; i++)
   {
     for (int j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;
       else if (X[i-1] == Y[j-1])
         L[i][j] = L[i-1][j-1] + 1;
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }
   int index = L[m][n];
   char lcs[index+1];
   lcs[index] = '\0';
   int i = m, j = n;
   while (i > 0 && j > 0)
   {
    if (X[i-1] == Y[j-1])
      {
          lcs[index-1] = X[i-1];
          i--;
          j--;
          index--;
      }
       else if (L[i-1][j] > L[i][j-1])
         i--;
      else
         j--;
   }
cout << "LCS of " << X << " and " << Y << " is " << lcs;
}

int main()
{
    int m,n,i;
    double time;
    clock_t  begin,end;
    char X[100];
    char Y[100];
    cout<<"ENTER THE SIZE OF 1ST STRING: "<<endl;
    cin>>m;
    cout<<"ENTER THE SIZE OF 2ND STRING: "<<endl;
    cin>>n;
    cout<<"ENTER THE 1ST STRING :"<<endl;
    for(i=0;i<m;i++)
    {
        cin>>X[i];
    }
    cout<<"ENTER THE 2ND STRING :"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>Y[i];
    }
    begin=clock();
    lcs(X, Y, m, n);
    end=clock();
    time=(double)(end-begin)/CLOCKS_PER_SEC;
	cout<<"\n Time complexity is "<<time<<" secs";

    return 0;
}
/************************OUTPUT*******************************/
/*ENTER THE SIZE OF 1ST STRING:
7
ENTER THE SIZE OF 2ND STRING:
6
ENTER THE 1ST STRING :
ABCBDAB
ENTER THE 2ND STRING :
BDCABA
LCS of ABCBDAB and BDCABA is BDAB
Time complexity is 0.002 secs

*/

