// WAP to print the even number of array in 2d 
# include <iostream>
using namespace std;
int main()
{
    // int arr[2][3]={2,4,7,3,8,11};
     int arr[2][3];
    cout <<"enter 6 number\n";
     for(int r=0; r<2; r++)
    {
        for(int c=0; c<3; c++)
        {
           
                cin>>arr[r][c];
           
        }
    }
    cout<< "output" <<"\n";
    for(int r=0; r<2; r++)
    {
        for(int c=0; c<3; c++)
        {
            if(arr[r][c]%2==0)
            {
                cout<<arr[r][c]<<"\t";
            }
        }
    }
}