

#include <bits/stdc++.h>
using namespace std;

int main()
{
    for(;;)
        {
            int n;
            cout<< "Please enter the number: \n";
            cin>> n;
            /*
                *
               ***
              *****
             *******
            *********
            */
            //----Upper pyramid starts----
            for(int i=1; i<=n ; i++)
            {

                  for(int k =1 ; k<=n-i ; k++)
                  {
                      cout<<" ";
                  }
                  for(int j = i ; j>=1 ; j--)
                  {
                    cout<< "*";
                  }
                  for(int j = 1 ; j<=i-1 ; j++)
                  {
                    cout<< "*";
                  }

                cout<<endl;
            }
            //----first pyramid ends----
            /*

            *********
             *******
              *****
               ***
                *

                */
        //------Lower pyramid starts-------

            n=n-1; // for put a space before every line in lower pyramid
            for(int i=1; i<=n ; i++)
            {
                  cout<<" ";
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
        //------Lower pyramid ends-------

            cout<<endl;
        }
}


