#include <bits/stdc++.h>
using namespace std;

void Pass_array(int a[])
{
    cout<<"The array elements are: ";
    for(int i=0; i<10;i++)
    {
        cout<< a[i] << " ";
    }
}

int main()
{

    for(;;)
    {

        int arr[10],in;
        cout<< "Enter 10 numbers:";
        for(int i=0 ; i<sizeof(arr)/sizeof(arr[0]);i++)
        {
            cin>>in;
            arr[i]=in;
        }
        Pass_array(arr);
        cout<<endl;
    }
}
