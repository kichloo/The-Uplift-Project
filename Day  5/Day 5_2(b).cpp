#include <iostream>
#include <string>
using namespace std;
int main()
{
 int m,n;
 cin>>m>>n;
 int a[100][100];
 for(int i=0;i<m;i++)
 {
     for(int j=0;j<n;j++)
     {
         cin>>a[i][j];
     }
}


for(int j=n-1;j>=0;j--)            
 {
     for(int i=0;i<m;i++)
         {
             cout<<a[i][j]<<" ";
 }
 cout<<"\n";
 }
 
}
