# include <iostream>
using namespace std;
int main()
{
int x,y;
cout<<"enter size of row\n";
cin >>x;
cout<<"enter size of coloumn\n";
cin>>y;
int arr[x][y];
cout<<"enter"<<x*y<<"values\n";
for(int r=0; r<x; r++)
{
    for(int c=0; c<y; c++)
    {
        cin>>arr[r][c];
    }
}
for(int r=0; r<x; r++)
{
    for(int c=0; c<y; c++)
    {
        cout<<arr[r][c]<<"\t";
    }
    cout<<"\n";
}
if(x==y)
{
    cout<<"\n after applying transpose concept\n";
    for(int c=0; c<y; c++)
{
    for(int r=0; r<y; r++)
    {
        cout<<arr[r][c]<<"\t";
    }
    cout<<"\n";
}
}
else{
    cout<<"not allowed bcz row and column size are not same";
}
}