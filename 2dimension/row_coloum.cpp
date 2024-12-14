# include <iostream>
using namespace std;
int main()
// {
//     int arr[2][3]={6,2,3,1,4,5};
//     for(int r=0; r<2; r++){
//         for (int c=0; c<3; c++)
//         {
//             cout<<arr[r][c]<<"\t";
//         }
//         cout<< "\n";
//     }
// }
{
    int arr[2][3];
    cout<<"enter 6 value\n";
    for(int r=0; r<2; r++){
        for (int c=0; c<3; c++)
        {
            cin>> arr[r][c];
        }  
    }
     cout<< "output";
     for(int r=0; r<2; r++){
        for (int c=0; c<3; c++)
        {
            cout<<arr[r][c]<<"\t";
        }
        cout<< "\n";
    }
}