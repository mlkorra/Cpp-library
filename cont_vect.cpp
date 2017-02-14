#include <iostream>
#include <vector>


using namespace std;

int main(int argc, char const *argv[])
{
	

   vector <int> v;

   for(int i = 0 ;i<10;i++){

   v.push_back(i);  //at one end
 

   }
  
   for(int index=0; index<v.size();index++){

   cout << v[index] <<  " ";



   } 

   cout << endl;




	return 0;
}