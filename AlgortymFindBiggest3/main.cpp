#include <iostream>

using namespace std;

int main()
{
   int a,b,c,pom=0;
   cout << "Enter 3 numbers: ";
   cin >> a >> b >> c;
   if(a>b)
   {
       pom = a;
   }
   else
   {
       pom = b;
   }
   if(c>pom)
   {
       pom = c;
   }

   cout << "The biggest number is: " << pom << endl;
   return 0;
}
