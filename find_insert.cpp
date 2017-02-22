#include <iostream>
#include <list>
#include <algorithm>


using namespace std;

int main(){

    
    list <int> li;

    for(int i=0 ; i<100;i++){
    
    li.push_back(i);

    } 
 
    
    list <int>::const_iterator it_l;

    it_l = find(li.begin(),li.end(),45);

    li.insert(it_l,8798);
  
    for(it_l = li.begin();it_l!=li.end();it_l++){


    	cout << *it_l << " ";
    }


    cout << endl;

	return 0;

}