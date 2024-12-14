// WAP to shift all zero at last by holding releted position
// input: arr[]={2,0,7,0,3,0,6}
// output:{2,7,3,6,0,0,0}
# include <iostream>
using namespace std;
int main()
{
    int arr[] = {2,0,7,0,3,0,6};
    int len=sizeof(arr)/sizeof(arr[0]);
    int arr2[len];
    int k=0;
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n output are \n";
    for(int i=0; i<len; i++){
        if(arr[i]!=0)
        {
            arr2[k]=arr[i];
            k++;
        }
    }
    while(k<len)
    {
        arr2[k]=0;
        k++;
    }
    for (int i=0; i<k;i++)
    {
        cout<<arr2[i]<<"\t";
    }

}
