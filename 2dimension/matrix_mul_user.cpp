# include <iostream>
using namespace std;
int main()
{
int r1,c1,r2,c2;
cout<<"enter size of row\n";
cin >>r1;
cout<<"enter size of coloumn\n";
cin>>c1;
cout<<"enter size of row\n";
cin >>r2;
cout<<"enter size of coloumn\n";
cin>>c2;
if(c2==r1)
{
int arr1[r1][c1];
int arr2[r2][c2];
int ans[r1][c2];
int s=0;
cout<<"enter values"<<r1*c1<<"of array \n";
for(int i=0; i<r1; i++)
{
    for(int j=0; j<c1; j++)
    {
        cin>>arr1[i][j];
    }
}
cout<<"enter values"<<r2*c2<<"of array \n";
for(int i=0; i<r2; i++)
{
    for(int j=0; j<c2; j++)
    {
        cin>>arr2[i][j];
    }
}
cout<<"Data of array1\n";
for(int i=0; i<r1; i++)
{
    for(int j=0; j<c1; j++)
    {
        cout<<arr1[i][j]<<"\t";
    }
    cout<<"\n";
}
cout<<"Data of array2\n";
for(int i=0; i<r2; i++)
{
    for(int j=0; j<c2; j++)
    {
        cout<<arr2[i][j]<<"\t";
    }
    cout<<"\n";
}
for(int i=0; i<r1; i++)
{
    s=0;
    for(int j=0; j<c2; j++)
    {
        for(int k=0; k<c1; k++)
        {
            s=s+arr1[i][k]*arr2[k][j];
            ans[i][j]=s;
        }
    }
}
cout<<"\n multiplication of matrix \n";
for(int i=0;i<r1;i++)
 {
    for(int j=0;j<c2;j++)
    {
        cout<<ans[i][j]<<"\t";
    }
    cout<<"\n";
 } 
 }
 else
 {
    cout<<"not allowed";
 } 
}
