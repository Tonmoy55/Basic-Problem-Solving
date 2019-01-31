#include <bits/stdc++.h>
using namespace std;
void gcd(int,int);

int main()
{
    for(;;)
    {
            int a,b;
            cout<<"Enter two numbers: ";
            cin>>a>>b;
            gcd(a,b);
    cout<< endl;
    cout<< endl;
    }

}

//function to calculate g.c.d
void gcd(int a,int b)
{
    int m,n;

    m=a;
    n=b;

    while(m!=n)
    {
        if(m>n)
            m=m-n;
        else
            n=n-m;
    }

    cout<<"\nH.C.F or G.C.D of ("<<a<<" & "<<b<<") is : "<<n;
}
