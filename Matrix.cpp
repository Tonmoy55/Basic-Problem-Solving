#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(;;)
    {
         int a,b,inp;
         double r1;

         cout<< "Enter the dimension of matrix eg. 3 by 3:\n";
         cin>> a>>b;
         int mat1[a][b];
         int mat2[a][b];
         cout<< "Enter "<< a*b<< " values of the first matrix:\n";
         for(int i =0 ; i<a ; i++)
         {
             for(int j =0 ; j<b ; j++)
             {
                  cin>>inp;
                  mat1[i][j]=inp;
             }
         }
         cout<< "Enter "<< a*b<< " values of the second matrix:\n";
         for(int i =0 ; i<a ; i++)
         {
             for(int j =0 ; j<b ; j++)
             {
                  cin>>inp;
                  mat2[i][j]=inp;
             }
         }
         cout<<"MATRIX [X]\n";
        for(int i =0 ; i<a ; i++)
         {
             for(int j =0 ; j<b ; j++)
             {
                  cout<<mat1[i][j]<<" ";
             }
             cout<<endl;
         }
          cout<<"MATRIX [Y]\n";
          for(int i =0 ; i<a ; i++)
         {
             for(int j =0 ; j<b ; j++)
             {
                  cout<<mat2[i][j]<<" ";
             }
             cout<<endl;
         }

         cout<<"MATRIX [Z]\n";
         for(int i =0 ; i<a ; i++)
          {
             for(int j =0 ; j<b ; j++)
             {
                  cout<<mat2[i][j]+mat1[i][j]<<" ";
             }
             cout<<endl;
          }

         cout<<endl;
         cout<<endl;
}

}



