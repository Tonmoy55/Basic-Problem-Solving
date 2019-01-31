#include <bits/stdc++.h>
using namespace std;

int main()
{

    for(;;)
    {

        int in,n,n2,n3;
        cout<< "Enter Array size:\n";
        cin>> n;
        int arr[n];

        cout<< "Enter "<< n << " elements:\n";
        for(int i=0 ; i<n;i++)
        {
            cin>>in;
            arr[i]=in;
        }

        cout<<endl;

        cout<< "The array is (Before sort): ";
        for(int i = 0; i<n ; i++)
        {
            cout<< arr[i] <<" ";
        }

        cout<<endl;

        cout<< "\nThe array is (After sort): ";
        sort(arr,arr+n);
        for(int i = 0; i<n ; i++)
        {
            cout<< arr[i] <<" ";
        }

        //copy array
        int copy_arr[n];
        for(int i =0 ; i<n ; i++)
        {
            copy_arr[i]=arr[i];
        }

        cout<<endl;

        cout<< "\nEnter the position to delete element:\n";
        cin>> n2;
        int arr_new[n-1];
        for(int i=0 ; i<n2-1 ; i++)
        {
            arr_new[i]=copy_arr[i];
        }


        cout<<endl;

        for(int i = n2-1 , j=n2; i<sizeof(arr_new)/sizeof(arr_new[0]) ; i++ , j++)
        {

            arr_new[i] = copy_arr[j];
        }


        cout<<endl;
        cout<< "The new array is (After deleting): ";
        for(int i = 0; i<sizeof(arr_new)/sizeof(arr_new[0]) ; i++)
        {
            cout<< arr_new[i] <<" ";
        }

        cout<<endl;
    }
}


