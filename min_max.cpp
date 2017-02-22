#include <iostream>
#include <list>
#include <algorithm>


using namespace std;

int main(){


   list <int> li;

   for(int i=0;i<10;i++){

   li.push_back(i);

   }
   
   list <int>::const_iterator il;

   il = min_element(li.begin(),li.end());

    cout << *il << " ";

   il = max_element(li.begin(),li.end());

    cout << *il << " ";

   
   cout << endl; 
   







	return 0;
}







