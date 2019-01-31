#include <bits/stdc++.h>
using namespace std;


// Way-->>1 (---Pass by reference with pointer---)
/*
 void swap_function(int* a,int* b)
 {
     int temp;
     temp= *a;
     *a = *b;
     *b= temp;
 }
int main()
{


    int num1,num2, result;
    int *a, *b;

    for(;;)
    {
        cout<< "Enter the first number:"<<endl;
        cin>> num1;
        a=&num1;

        cout<< "Enter the second number:"<<endl;
        cin>> num2;
        b=&num2;

        cout<< "Before swap: " << num1<< " " << num2<<endl;
        swap_function(a,b);
        cout<< "After swap: " << num1<< " " << num2<<endl;

            cout<<endl;
            cout<<endl;
    }

}
*/

// Way-->2 (---Pass by reference without pointer---)

 void swap_function(int& a,int& b)
 {
     int temp;
     temp= a;
     a = b;
     b= temp;
 }
int main()
{


    int num1,num2, result;

    for(;;)
    {
        cout<< "Enter the first number:"<<endl;
        cin>> num1;

        cout<< "Enter the second number:"<<endl;
        cin>> num2;

        cout<< "Before swap: " << num1<< " " << num2<<endl;
        swap_function(num1,num2);
        cout<< "After swap: " << num1<< " " << num2<<endl;

            cout<<endl;
            cout<<endl;
    }

}
