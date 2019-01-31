
#include <bits/stdc++.h>

using namespace std;

int main()
{


    for(;;)
    {
         int n;
         double result; //without double not working
         cout<< "Enter a number to find its square root:";
         cin>> n;
         result = pow(n,1.0/3.0);
         cout.precision(2);
         cout <<fixed<<"Square root is: " << result;
         cout<<endl;
         cout<<endl;
}

}
