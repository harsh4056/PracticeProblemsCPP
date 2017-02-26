#include <iostream>
#include <cstring>
#include <limits>
#include <math.h>
using namespace std ;
int factor(int n);
 int main(){
 
 int sum=1;
 int n=1; 
 

while(factor(sum)< 500){
	
	sum+=++n;
}
 cout<<sum;
 
 return 0;
 
 }
  int factor(int input) { 
  
   
 int factor = 0;

	/** 
	 * Only up to the square root. 
	 *  If there exists a factor between input and sqrt(input)
	 *  then that value will have a corresponding factor between 3 and sqrt(input)
	 */
	for (int i = 1; i <= (int)(sqrt(input)); i++) {

		if (i*i == input) {
			factor++;
		} else if (input % i == 0) {
			factor += 2;
		}
	}

	return factor;
	}   
 
