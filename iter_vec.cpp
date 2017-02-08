#include <vector>
#include <iostream>

using namespace std;

int main(){


   vector <int> first;

   for(int i =0 ; i<10; i++){

   	first.push_back(i);

   }
 
   vector <int>::const_iterator ir;

   ir = first.begin();

   while(ir!= first.end()){


   	cout << *ir << " ";

   	ir++;
   } 


   cout << endl;

	return 0;
}

