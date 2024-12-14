//WAP to print valid square root of numbers in a given array
# include <iostream>
using namespace std;
int main()
{
    int arr[]={64,24,81,312,25,121,76};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<len; i++)
    {
        int j=arr[i];
        for(int x=1; x<=j; x++)
        {
            if(x*x==j)
            {
                cout<<j<<"\t";
                break;
            }
        }
    }

}