
/*
For Calculate Power of any number, multiply particular number by itself on the basis of power. Suppose you want to calculate 2^3 is 2*2*2=8.

For calculating the power of any number user have four possibilities to input values.

    1)Value of power is +ve
    2)Value of Power is -ve
    3)Value of power is 0
    4)Value of Base is +ve
    5)Value of Base is -ve
    6)Value of Base is 0

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(;;)
    {
         int a,base,powr,sum=0;
         double r1;

         cout<< "Enter the base:";
         cin>> base;
         cout<< "Enter the power:";
         cin>> powr;
         if(powr>0)
         {
                if(base==0)
                   cout<< "Result: " << base;
                else if(base>0)
                {
                    r1 = pow(base,powr);
                    cout<< "Result: " << r1;
                }

                else
                {
                    base=base*(-1);
                    r1 = pow(base,powr);
                    cout<< "Result: -" << r1;
                }

         }
         else if(powr==0)
         {
              cout<< "Result is :  1";
         }
         else
         {
                if(base==0)
                   cout<< "Result: Undefined";
                else if(base>0)
                {
                   r1 = pow(base,powr);
                   cout<< "Result: " << r1;
                }

                else
                {
                    base=base*(-1);
                    r1 = pow(base,powr);
                    cout<< "Result: -" << r1;
                }


         }



         cout<<endl;
         cout<<endl;
}

}


