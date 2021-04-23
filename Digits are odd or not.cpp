#include <iostream>
using namespace std;
int main()
{
   int inumber;

   cout << "enter a three digit number: ";
   cin >> inumber;
   
   cout << "the number you choose is: " << inumber << endl;

   if (inumber % 2 == 0 && inumber/10 % 2 == 0 && (inumber/10)/10 % 2 == 0);   
   
   else
      {
       cout << "digits are odd " << endl;
      }
   return 0;
}
