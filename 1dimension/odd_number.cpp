//WAP to print only even numbers 
# include <iostream>
using namespace std;
int main()
{
  int  arr[] = {2,4,7,8,11,40};
  int len=sizeof(arr)/sizeof(arr[0]);
  for (int i=0; i<len; i++)
  {
    if(arr[i]%2!=0)
    {
        cout << arr[i] << "\t";
    }
  }
}