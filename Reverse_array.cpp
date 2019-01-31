#include <bits/stdc++.h>
using namespace std;

int main()
{

    for(;;)
    {

        int in,n,w=0;
        cout<< "Enter Array size:\n";
        cin>> n;
        int arr[n];
        int reverse_arr[n];

        cout<< "Enter "<< n << " elements:\n";
        for(int i=0 ; i<n;i++)
        {
            cin>>in;
            arr[i]=in;
        }
        cout<< "Array (Before reverse):\n";
         for(int i=0 ; i<n;i++)
        {

            cout<<arr[i]<<" ";
        }


        //----reversing----
         for(int i=n-1 ; i>=0 ;i--)
        {


               reverse_arr[w] = arr[i];
                w++;
        }
        // -----End---------

         cout<< "\nArray (After reverse):\n";
         for(int i=0 ; i<n;i++)
        {

            cout<<reverse_arr[i]<<" ";
        }
        cout<<endl;
        cout<<endl;
    }
}

