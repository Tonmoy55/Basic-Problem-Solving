
#include <bits/stdc++.h>
using namespace std;

int main()
{
    for(;;)
        {
            int n;
            cout<< "Please enter the number: \n";
            cin>> n;
            for(int i=1; i<=n ; i++)
            {

                  for(int j =1 ; j<=i-1 ; j++)
                  {
                      cout<<" ";
                  }

                  for(int k =n-i+1 ; k>=1 ; k--)
                  {
                      cout<<"*";
                  }
                  for(int m =n-i ; m>=1 ; m--)
                  {
                      cout<<"*";
                  }


                cout<<endl;
            }

            cout<<endl;
        }
}


