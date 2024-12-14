//WAP to display the array in descending order
# include <iostream>
using namespace std;
int main()
{
    int arr[] = {2,5,23,6,12,7};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<len; i++)
    {
        cout<< arr[i] <<"\t";
    }
    cout<<"\nafter\n";
    for(int i=0; i<len; i++)
    {
        for(int j=0; j<len-1; j++)
        {
            int tmp;
            if(arr[j]<arr[j+1])
            {
                tmp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    for(int i=0; i<len; i++)
    {
    cout<<arr[i]<<"\t";
    }
}
