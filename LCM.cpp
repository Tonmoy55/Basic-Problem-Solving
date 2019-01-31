/*

------LCM(Least common multiple)-------

Suppose find LCM of 3 and 4
Multiple of 3 : 3, 6, 9, 12, 15, 18, 21, 24,.......
Multiple of 4 : 4, 8, 12, 16, 20, 24, 28,.....

So, common multiple of 3 and 4 is 12, 24
and Least Common Multiple is 12
LCM of 3 and 4 is: 12

*/

#include <bits/stdc++.h>
using namespace std;
void LCM(int a , int b)
{
    int m,n;
    m=a;
    n=b;
    while(m!=n)
    {
        if(m<n)
            m=m+a;
        else
            n=n+b;
    }

    cout<< "LCM of " << a << " & " <<b <<" is: " << m;
}
int main()
{
  int n1,n2,a,rem;

    for(;;)
    {
         cout<< "Enter two number:";
         cin>> n1>>n2;
         LCM(n1,n2);
        cout<<endl;
        cout<<endl;
    }
}


