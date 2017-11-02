#include <iostream>
#include <set>
using namespace std;
 
int main()
{
   set<string> mySet;
   set<string>::iterator it;
   string str;

   mySet.insert("hi");
   mySet.insert("hello");
   mySet.insert("how");
   mySet.insert("are");
   mySet.insert("you");

   str = "hello";
   it = mySet.find(str);
   if(it != mySet.end())
   {
     cout << "found" << endl;
   }

   for(it = mySet.begin(); it != mySet.end(); it++)
   {
       cout << *it << endl;
   }

/*
   set<int> mySet;
   set<int>::iterator it;

   mySet.insert(1);
   mySet.insert(2);
   mySet.insert(3);
   mySet.insert(4);
   mySet.insert(5);
 
   it = mySet.find(2);
   if(it != mySet.end())
   {
     cout << "found" << endl;
   }

   for(it = mySet.begin(); it != mySet.end(); it++)
   {
       cout << *it << endl;
   }
*/
}
