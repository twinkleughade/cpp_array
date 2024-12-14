//WAP to find out the second highest value
# include <iostream>
using namespace std;
int main()
{
    int arr[]={2,4,7,12,13,9};
    int len=sizeof(arr)/sizeof(arr[0]);
    int max1,max2;
    max1=max2=INT_MIN;
    for(int i=0; i<len; i++)
    {
        if(arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2 && arr[i]!=max1)
        {
            max2=arr[i];
        }
    }
    cout<<max2;
    return 0;
    
}