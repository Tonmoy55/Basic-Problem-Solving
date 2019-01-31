#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,inp;

    for(;;)
    {
         cout<< "Enter how many numbers you want to test:";
         cin>> n;
         cout<< "Enter "<< n << " Numbers:"<<endl;
         int arr[n];
         for(int i=0 ; i<n ; i++)
         {
             cin>>inp;
             arr[i]=inp;

         }
          sort(arr,arr+n); // built in sort() function
         cout<< "The greatest number is: " << arr[n-1];

        cout<<endl;
        cout<<endl;
    }
}

