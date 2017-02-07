#include <iostream>
#include <vector>

using namespace std;
//using namespace cv;


int main(){


    vector <int> l;

    vector <int> :: iterator i;

    vector <int> :: reverse_iterator ri;



    for(int ind = 0;ind <= 5 ;ind++)
    	l.push_back(ind);
    
    
    cout << "Output of begin and end \t\t";


    for(i = l.begin();i!= l.end();i++)


    	cout << *i << '\t';


    cout << endl << endl;

    cout << "Output of rbegin  and rend\t\t";

    for(ri = l.rbegin();ri!= l.rend();ri++)

    	cout << '\t' << *ri;


    return 0;


}


 

