#include <iostream>
#include <algorithm>

using namespace std;


void show(int A[]){

   int i;
   for(i=0;i<7;i++){
   cout<< '\t' << A[i];
   printf("\n");
   } 	





}


int main(int argc, char const *argv[])
{
	
    int A[] = {45,23,312,343,534,212,13};
    
    cout<< "\n Before Sorting \n";
    show(A);


    sort(A,A+7);

    cout<< "After Sorting :";  
    show(A);






















   


	return 0;
}






















