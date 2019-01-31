#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

int power(int rem , int a)
{
    int pow=1,i=1;
    while(i<=a)
    {
        pow=pow*rem;
        i++;
    }
    return pow;
}


int main()
{

    int i,digit=0,rem,sum=0;
    int a,b;

    cout<< "Enter a number to check armstrong number:";
    cin>> i;
        a=i;
        while(a!=0)
        {
            a = a/10;
            digit++;
        }
        b=i;
        while(b!=0)
        {
            rem=b%10;
            sum=sum+power(rem,digit);

            b=b/10;
        }
        if(sum==i)
            cout << sum <<" Is ARMOSTRONG"<<endl;
        else
            cout << i<<" Is Not ARMOSTRONG" << endl;



}

