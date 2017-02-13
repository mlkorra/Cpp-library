#include <iostream>
#include <map>
#include <string>


using namespace std;
int main(){


   map<int,string> mymap;
   
   mymap.insert(make_pair(4,"cool"));
   mymap.insert(make_pair(5,"dev"));
   mymap.insert(make_pair(6,"redddd"));



   map<int, string>::const_iterator ir;

   ir = mymap.begin();

   while(ir!= mymap.end()){


   cout << ir->first << "=" << ir->second << " " ;
   ir++;

   } 


   
   cout << endl;


    return 0;
}