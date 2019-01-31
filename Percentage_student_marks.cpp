
#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(;;)
    {
         int sub,inp;
         double total_marks=0,percent=0;
         cout<< "Enter the Number of subjects:";
         cin>> sub;
         double mark[sub];

         cout<< "Enter the marks of " << sub <<" subjects:";
         for(int i = 0; i<sub ; i++)
         {
             cin>>inp;
             mark[i]=inp;
         }
         for(int j = 0; j<sub ; j++)
         {
             total_marks+=mark[j];
         }
         percent = (total_marks/sub);
         cout<< "Total percentage is: " << percent << "%";
         cout<<endl;
         cout<<endl;
}

}



