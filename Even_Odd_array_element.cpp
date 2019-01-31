#include <bits/stdc++.h>
using namespace std;

int main()
{

    for(;;)
    {

        int in,n,n2,n3, j =0,k=0;
        cout<< "Enter Array size:\n";
        cin>> n;
        int arr[n];
        int even[n];
        int odd[n];
        cout<< "Enter "<< n << " elements:\n";
        for(int i=0 ; i<n;i++)
        {
            cin>>in;
            arr[i]=in;
        }

        for(int i =0 ; i< n ; i++)
        {
            if((arr[i]%2)==0)
            {
                even[j] =arr[i];
                j++;
            }
            else
            {
                odd[k] =arr[i];
                k++;
            }

        }

        cout<<endl;
        cout<< "\nEven elements:\n";
        for(int i=0; i< j ; i++)
        {
            cout<< even[i] << " ";
        }

        cout<<endl;
        cout<< "\nOdd elements:\n";
        for(int i=0; i< k ; i++)
        {
            cout<< odd[i] << " ";
        }

        cout<<endl;
        cout<<endl;
        cout<<endl;
    }
}


