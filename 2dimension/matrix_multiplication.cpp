//consent- 1st array column size and 2nd array row will be same than it will multiplied
//column no of matrix 1= row no of matrix 2
# include <iostream>
using namespace std;
int main()
{
 int m[2][2]={1,2,3,4};
 int n[2][4]={1,2,3,4,5,6,7,8};
 int ans[2][4],sum=0;
 cout<<"\n matrix of m is :\n";
 for(int i=0;i<2;i++)
 {
    for(int j=0;j<2;j++)
    {
        cout<<m[i][j]<<"\t";
    }
    cout<<"\n";
 }
 cout<<"\n matrix of n is:\n";
 for(int i=0;i<2;i++)
 {
    for(int j=0;j<4;j++)
    {
        cout<<n[i][j]<<"\t";
    }
    cout<<"\n";
 }  
 for(int i=0;i<2;i++)
 {
    for(int j=0;j<4;j++)
    {
        sum=0;
        for(int k=0;k<2;k++)
        {
            sum=sum+m[i][k]*n[k][j];
            ans[i][j]=sum;
        }
    }
 } 
 cout<<"\n matrix multiplication is:\n";
 for(int i=0; i<2; i++)
 {
    for(int j=0;j<4;j++)
    {
        cout<<ans[i][j]<<"\t";
    }
    cout<<"\n";
 }
 
}
