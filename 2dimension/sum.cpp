//WAP tp display the sum of the value of 2D array
# include <iostream>
using namespace std;
int main()
{
    // int arr[2][4]={2,3,4,5,6,7,8,9};
    int arr[2][4];
    cout<<"enter 8 digit\n";
    int s=0;
    for(int r=0; r<2; r++)
    {
        for(int c=0; c<4; c++)
        {
           
                cin>>arr[r][c];
           
        }
    }
    cout<< "output" <<"\n";
    for(int r=0; r<2; r++)
    {
        for(int c=0; c<4; c++)
        {
            s=s+arr[r][c];
        } 
    }
     cout<< "sum of array" << s <<"\n";
}