
// sort an array in ascending order
#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(;;)
    {
         int inp,temp,a_size;

         cout<< "Enter the size of array:";
         cin>> a_size;
         int arr[a_size];
         cout<< "Enter "<<a_size<<"elements:\n";
         for(int i=0; i<a_size ; i++)
         {
             cin>> inp;
             arr[i]=inp;

         }
         for(int i=0; i<a_size ; i++)
         {
             cout<< arr[i]<<" ";
         }

        for(int i =0 ; i<=a_size; i++)  //loop runs 11 times
        {
              for(int j =0; j<=a_size ; j++) //loop runs 11 times
            {
                 if(arr[j]>arr[j+1])
                 {
                   temp=arr[j];
                   arr[j] = arr[j+1];
                   arr[j+1]=temp;
                 }
            }

        }

         cout<<endl;

         for(int i=0 ; i<a_size ; i++)
         {
             cout<<arr[i]<< " ";
         }



         cout<<endl;
         cout<<endl;
}

}




