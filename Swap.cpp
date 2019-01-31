
#include <bits/stdc++.h>
using namespace std;
int main()
{

    // ----------By calling Swap built in function----
    int num1,num2, result;
    int *a, *b;

    for(;;)
    {
        cout<< "Enter the first number:"<<endl;
        cin>> num1;
        //a=&num1;

        cout<< "Enter the second number:"<<endl;
        cin>> num2;
        //b=&num2;
        cout<< "Before swap" <<endl;
        cout<< "First number is:" << num1<<endl;
        cout<< "Second number is:" << num2<<endl;
        swap(num1,num2); // default Swap function
        cout<< "After swap" <<endl;
        cout<< "First number is:" << num1<<endl;
        cout<< "Second number is:" << num2<<endl;

            cout<<endl;
            cout<<endl;
    }

}
