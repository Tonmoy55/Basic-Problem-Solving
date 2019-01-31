
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
         cout.precision(2);
         cout<<fixed << "Total percentage is: " << percent << "%" << endl;
         if(percent>=85)
            cout<< "Grade is: A";
         else if(percent<85 && percent>=75)
            cout<< "Grade is: B";
         else if(percent<75 && percent>=50)
            cout<< "Grade is: C";
         else if(percent<50 && percent>=30)
            cout<< "Grade is: D";
         else
             cout<< "Grade is: F";

         cout<<endl;
         cout<<endl;
}

}




