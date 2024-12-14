# include <iostream>
using namespace std;
int main()
{
    int arr[]={1,34,5,7,8,23};
    int len=sizeof(arr)/sizeof(arr[0]);
    int c=INT_MIN;
    for(int i=0; i<len; i++)
    {
        if (c<arr[i])
        {
            c=arr[i];
        }
    }
    cout << "max value=" << c <<"\n";
}