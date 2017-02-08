#include <set>
#include <iostream>

using namespace std;

int main(){

    set <int> s;
    for(int i =0 ;i<10;i++){

    	s.insert(i);
    }
    
    
    set<int>::const_iterator ir;

    ir = s.begin();

    while(ir!= s.end()){

    	cout << *ir << " ";
    	ir++;
    } 
    

    cout << endl;


	return 0;
}