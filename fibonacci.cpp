#include <bits/stdc++.h>
using namespace std;
//recursion fibo
int fib(int a)
{
    if(a==0 || a==1) return a;
    else
        return fib(a-1)+fib(a-2);

}

int main()
{
//  way-->1
/*
    int n, t1 , t2, nextterm;
    t1=0,t2=1;

    cout<< "Enter the number of terms for fiboacci series:" << endl;
    cin>> n;
       if(t1==0)
        cout<< t1 << " ";
    if(t2==1)
        cout<< t2 << " ";

    while(n-->0)
    {

    nextterm = t1+t2;
    t1 = t2;
    t2=nextterm;
    cout<< nextterm << " ";
    }
*/

//  way-->2
/*
 int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i)
    {
        // Prints the first two terms.
        if(i == 1)
        {
            cout << t1 <<" ";
            //continue;
        }
        if(i == 2)
        {
            cout << t2 << " ";
            //continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm << " ";
    }
    */

// way--> 3 --by recursion and function--
    int n;
    cout<< "Enter the number of terms of fibonacci series:";
    cin>> n;
    for(int i =0 ; i<n ; i++)
    {
       cout<<" " << fib(i);
    }

}
