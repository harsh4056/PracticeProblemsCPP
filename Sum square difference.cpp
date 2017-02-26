#include <iostream>
#include <cstring>
#include <limits>
using namespace std ;

 int main(){
 	int ssq,sq,result;
 	ssq=0;
 	sq=0;
 	for(int i=1;i<=100;i++){
 		ssq=ssq+i*i;
 		
 		sq=sq+i;
	 }
 	
cout<<(ssq-(sq*sq)); 	
 	return 0;
 }
