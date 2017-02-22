#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	
     vector<int> v;
     
     v.push_back(562); 
     v.push_back(523);
     v.push_back(23);
     v.push_back(244); 
     v.push_back(34);
     v.push_back(533);
     v.push_back(04);
   

     sort(v.begin(),v.end());
     
     vector <int>::const_iterator ir;

     for(ir = v.begin();ir!=v.end();ir++){

     	cout << *ir << " ";
     }


     cout << endl;

     reverse(v.begin(),v.end());

     for(ir = v.begin();ir!=v.end();ir++){

     	cout << *ir << " ";
     } 

     cout << endl; 

	return 0;
}