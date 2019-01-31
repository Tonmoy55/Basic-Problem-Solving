#include <bits/stdc++.h>
using namespace std;
int main()
{


        int j;
        for(int i= 1 ; i<= 200 ; i++)
        {

            for( j=2 ; j<i ; j++)
            {
                  if(i%j==0)
                  break;
            }
            if(i==j)
                 cout<< i << endl;
        }


}
