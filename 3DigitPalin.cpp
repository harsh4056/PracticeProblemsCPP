#include <iostream>
#include <cstring>
#include <limits>
using namespace std ;
int palin(int t);
 int main(){
 	
	 long temp=0;
	 int k,l;
	 
	 for(int i=999;i>99;i--){
	 		 for(int j=999;j>99;j--){
	 		 int n=	palin(i*j);
	 		 if	(n>temp){
	 		 	k=i;
	 		 	l=j;
	 		 	temp=n;
			  }
	 		 	
	 	
	 		 	
	 		 
			  
	 		 	
	 		 	
			  }

	 	
	 	
	 	
	 }
	 
	   cout << " The number is a palindrome = "<<k<<" and " <<l<<"  ";
   
       cout << temp;
	 return 0;
	 	}
	 	
	 	
	 	int palin(int t){
	 		
	 		int n, num, digit, rev = 0;
    num=t;
     n = num;
     do
     {
         digit = num%10;
         rev = (rev*10) + digit;
         num = num/10;
     }while (num!=0);
     if (n==rev){

     
       return n;
	 			 }
	 		else 
	 		return 0;
	 		
	 		
		 }
