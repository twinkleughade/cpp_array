// WAP to display the prime number in a given digit array
// input: arr[]={7,4,6,11,5}
// output: 7,11,5

# include <iostream>
using namespace std;
int main()
{
    int arr[] = {7,4,6,11,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    int num=1;
    for(int i=0; i<=len; i++)
    {
      cout<<arr[i]<<"\t";
    }
    cout<<"\n prime numbers are: \n";
    for(int i=0; i<len; i++)
    {int n=arr[i];
     int r=n-1;
     bool b=true;
     for(r;r>1;r--)
     {
      if(n%r==0)
      {
        b=false;
        break;
      }
     }
     if(b==true)
     {
      cout<<n<<"\t";
     }
    }
}
