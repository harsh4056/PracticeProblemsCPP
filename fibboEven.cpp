#include <iostream>
#include <cstring>
#include <limits>
using namespace std;
 int main(){
 	
	 long temp;
	long  prev=1;
	long  current=2;
 	long  result=2;
 while(result<4000000){
 	temp=current;
 	current=current+prev;
 	prev=temp;
 	if(current%2==0){
 		result=result+current;
	 }
 	
 	
 	
 	
 }
 
 cout<<result;
 return 0;
 }
