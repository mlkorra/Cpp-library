#include <deque>
#include <iostream>


using namespace std;


int main(int argc, char const *argv[])
{
	

    deque <int> deq;

    for(int i =0;i<3;i++){
 
    deq.push_back(i); //add to the back
    deq.push_front(10-i); //add to the front



    }


    for(int index=0;index<deq.size();index++){



    	cout << deq[index] << " ";

    }
   

    cout << endl;


    	return 0;
}