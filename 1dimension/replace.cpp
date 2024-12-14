// WAP to replace 1 with 0 in a given array
// input:arr[]={2,1,3,1,5,1}
// output: {2,0,3,0,5,0}

# include <iostream>
using namespace std;
int main()
{
    int arr[] = {2,1,3,1,5,1};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<len; i++)
    {
        if(arr[i]==1)
        {
            arr[i]=0;
        }
        
    }
    for(int i=0; i<len; i++){
         cout << arr[i] <<"\t";
    }
   
}