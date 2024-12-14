//WAP to print the sum of all odd array 
# include <iostream>
using namespace std;
int main()
{
    int arr[] = {2,5,4,7,9};  
    int len = sizeof(arr)/sizeof(arr[0]);
    int s=0;  
    for (int i=0; i<len; i++)
    {    
        if(arr[i]%2!=0)
            {
              s=s+arr[i];
            }    
    }
   cout << "sum of odd array =" << s<<"\n";       
}

