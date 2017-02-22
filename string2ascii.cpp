#include <iostream>
#include <string>

using namespace std;

void convert2ascii(string str){

int i;
char x;

for(i=0;i<str.length();i++){

x = str.at(i);

cout << int(x) << " ";

} 


}



int main(){

cout <<  "enter something to do something\n";
string str;

getline(cin,str);

convert2ascii(str);



	
	return 0;


}