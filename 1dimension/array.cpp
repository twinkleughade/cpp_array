# include <iostream>
using namespace std;
int main()
//                                      -------------  one dimension array   -------------------------
// {
//     int cybrom[5];    //intialize as well as declaration 
//     cout<<sizeof(cybrom)<<"\n";
//     cout<<cybrom[0];
// }

// {
//     int cybrom[5] = {12,4,6,78,97};    //intialize as well as declaration 
//     cout<<sizeof(cybrom)<<"\n";
//     cout<<cybrom[0];
// }

// {
//     int cybrom[5] = {12,4,6,78,97,5,7};    //intialize as well as declaration 
//     cout<<sizeof(cybrom)<<"\n";
//     cout<<cybrom[0];
// }

// {
//     int cybrom[5] = {12,4,6,78,97};    //intialize as well as declaration 
//     cout<<sizeof(cybrom)<<"\n";
//     cout<<cybrom[0]<<"\n";
//     for(int i=0; i<5; i++)
//     {
//         cout << cybrom[i]<<"\t";
//     }
// }

// {
//     int cybrom[3] = {40};    //first output otherr give 0
//     for(int i=0; i<3; i++)
//     {
//         cout << cybrom[i]<<"\t";
//     }
// }

//              --------other trick ---------------

// WAP to find the lenght of an array
// {
//     int arr[] = {40,3,4,6,7,8,45};    //formula
//     int len = sizeof(arr)/sizeof(arr[0]);
//     cout << "lenght of array =" <<len<<"\n";
//     for(int i=0; i<len; i++)
//     {
//         cout << arr[i]<<"\n";
//     }
// }

// (lenghh, minimum value, maximum value, ascending order, descending order)


// -----------------------------------array traversing ---------------------------------------------------------
// 1) forword/ascending 2) backword/descending
// {
//     int arr[4] = {40,3,4,6};    //formula
//     int s = sizeof(arr)/sizeof(arr[0]);
//     cout << "\forword traversing\n";
//     for(int i=0; i<s; i++)
//     {
//         cout << arr[i]<<"\n";
//     }
//     cout << "\backword traversing\n";
//     for(int i=s-1; i>=0; i--)
//     {
//         cout <<arr[i]<<"\n";
//     }
// }

{
    int arr[] = {40,3,4,6,7,8,45};    //formula
    int len = sizeof(arr)/sizeof(arr[0]);
    cout << "lenght of array =" <<len<<"\n";
    {
        cout << 4[arr]<<"\n";   // we can write array in or out indexing in or out it will work
        //or
        cout << arr[4];         // both are valid we can write like this or that
        cout<<arr[-4];          // it gives garbage value
        cout << -4[arr];      //it gives negative answer
        arr[4]=-4[arr];        //for add - in the given array
    }
}
