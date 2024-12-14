//WAP to print the sum of all array 
# include <iostream>
using namespace std;
int main()
{
    int arr[] = {40,3,4,6,7,8,45};  
    int len = sizeof(arr)/sizeof(arr[0]);
    int s=0;  //add or subtract - 0 $ multiply or di-1

    // cout << "lenght of array =" <<len<<"\n";
    for (int i=0; i<len; i++)
    {
        s=s+arr[i];
    }
   cout << "sum of aray =" << s<<"\n";
       
}

