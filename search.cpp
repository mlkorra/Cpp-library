#include <iostream>

#include <algorithm>


using namespace std;

void show(int A[]){

    int size = sizeof(A)/sizeof(A[0]);
  
  for (int i = 0; i < size; ++i)
  {
  	
  
    cout << '\t' << A[i];
  
 }
  
}





int main{

    int A[] = {4 ,55,34,445,4343234,5,3454};
     
    int size = sizeof(A)/sizeof(A[0]);

    int target;

    show(A,A+size); 
    printf("\nThe element u want to search for\n");
   
    scanf("%d",&target);

    if (binary_search(A,A+size,target)){

    	cout << "\n Element found in the array";
    }
    

    else{

        cout << "\n Element not found in the array";
    	
    }

    


	return 0;

}
