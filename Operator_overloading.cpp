#include<iostream>
#include<conio.h>

using namespace std;
class temp
{
   private:
      int count;
   public:
       temp():count(12)
       { }

       void operator ++()
       {
	count=count+1;
       }
       void Display()
       {
       cout<<"Count: "<<count;
       }
  };
int main()
 {

   temp t;
   ++t;        /* operator function void operator ++() is called */
   t.Display();
   getch();
 }
