#include <list>
#include <iostream>

using namespace std;

int main(){

    
    list<int> li; //list

    for(int i=0; i<20;i++){
 
    li.push_back(i);

    }

    list<int>::const_iterator ir;

    ir = li.begin();

    while(ir!= li.end()){

      cout << *ir << " ";

      ir++;


    }    

    cout << endl; 







	return 0;
}