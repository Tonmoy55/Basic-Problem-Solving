#include <bits/stdc++.h>
using namespace std;

int main()
{
    for(;;)
    {
        int arr1[10],arr2[10],in,g=0;
        cout<< "Enter elements of first Array:\n";
        for(int i=0 ; i<sizeof(arr1)/sizeof(arr1[0]);i++)
        {
            cin>>in;
            arr1[i]=in;
        }
        cout<< "Enter elements of Second Array:\n";
        for(int i=0 ; i<sizeof(arr2)/sizeof(arr2[0]);i++)
        {
            cin>>in;
            arr2[i]=in;
        }

        cout<< "Elements of first Array: ";
        for(int i=0 ; i<sizeof(arr1)/sizeof(arr1[0]);i++)
        {
           cout<<arr1[i]<<" ";
        }
        cout<<endl;

        cout<< "Elements of second Array: ";
         for(int i=0 ; i<sizeof(arr1)/sizeof(arr1[0]);i++)
        {
           cout<<arr2[i]<<" ";
        }
        cout<<endl;

       int arr3[sizeof(arr1)/sizeof(arr1[0])+sizeof(arr2)/sizeof(arr2[0])];

       for(int j=0 ; j<sizeof(arr3)/sizeof(arr3[0]);j++)
       {
           if(j<sizeof(arr1)/sizeof(arr1[0]))
           {
               arr3[j]=arr1[j];
           }
           else
           {
              arr3[j]=arr2[g];
                g++;
           }


       }
        cout<< "Elements of Third Array After MERGE: ";
       for(int i=0 ; i<sizeof(arr3)/sizeof(arr3[0]);i++)
       {
           cout<<arr3[i]<<" ";
       }
        cout<<endl;
    }
}

