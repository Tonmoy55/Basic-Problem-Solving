#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(;;)
    {
         int n1,n2,i=0,i2=0,i3=0,B,Oc,H;
         int rem_B[20],rem_O[20],rem_H[20];
         cout<< "Enter the number:";
         cin>> n1;
         cout<< "1.Binary\n2.Octal\n3.Hexadecimal\n4.All"<<endl;

         cin>> n2;
         if(n2==1)
         {
             B=n1;
             while(B>0)
             {
                 rem_B[i]=B%2;
                 i++;
                 B=B/2;
             }
            cout<< "Binary number of "<<n1<<" is: ";
             for(int j = i-1 ; j>=0 ; j--)
             {
                 cout<<rem_B[j];
             }
         }
         else if(n2==2)
         {
              Oc=n1;
              while(Oc>0)
             {
                 rem_O[i]=Oc%8;
                 i++;
                 Oc=Oc/8;
             }
             cout<< "Octal number of "<<n1<<" is: ";
             for(int j = i-1 ; j>=0 ; j--)
             {
                 cout<<rem_O[j];
             }
         }
         else if(n2==3)
            {
                H=n1;
                  while(H>0)
                 {
                     rem_H[i]=H%16;
                     i++;
                     H=H/16;
                 }
                 cout<< "Hexadecimal number of "<<n1<<" is: ";
                 for(int j = i-1 ; j>=0 ; j--)
                 {
                     //cout<<rem[j];
                     switch(rem_H[j])
                     {
                         case 10: cout<< "A";
                         break;
                         case 11: cout<< "B";
                         break;
                         case 12: cout<< "C";
                         break;
                         case 13: cout<< "D";
                         break;
                         case 14: cout<< "E";
                         break;
                         case 15: cout<< "F";
                         break;

                         default:
                         cout<<rem_H[j];


                     }
                 }
             }

             else
             {
                 B=n1;
                 while(B>0)
                 {
                     rem_B[i]=B%2;
                     i++;
                     B=B/2;
                 }
                cout<< "Binary number of "<<n1<<" is: ";
                 for(int j = i-1 ; j>=0 ; j--)
                 {
                     cout<<rem_B[j];
                 }

                  Oc=n1;
                  while(Oc>0)
                 {
                     rem_O[i2]=Oc%8;
                     i2++;
                     Oc=Oc/8;
                 }
                 cout<< "\nOctal number of "<<n1<<" is: ";
                 for(int j = i2-1 ; j>=0 ; j--)
                 {
                     cout<<rem_O[j];
                 }

                 H=n1;
                  while(H>0)
                 {
                     rem_H[i3]=H%16;
                     i3++;
                     H=H/16;
                 }
                 cout<< "\nHexadecimal number of "<<n1<<" is: ";
                 for(int j = i3-1 ; j>=0 ; j--)
                 {
                     //cout<<rem[j];
                     switch(rem_H[j])
                     {
                         case 10: cout<< "A";
                         break;
                         case 11: cout<< "B";
                         break;
                         case 12: cout<< "C";
                         break;
                         case 13: cout<< "D";
                         break;
                         case 14: cout<< "E";
                         break;
                         case 15: cout<< "F";
                         break;

                         default:
                         cout<<rem_H[j];


                     }
                 }


             }

         cout<<endl;
         cout<<endl;
}

}




