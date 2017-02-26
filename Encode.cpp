#include <iostream>
#include <cstring>
#include <limits>
#include <math.h>
using namespace std ;
 char *encode(char *src);
 int main()
 {
 cout<<encode("aabbbcc");
 
 
 }
 char *encode(char *src)
{     

int len = strlen(src);
 char  nwe[(2*len)];
 int i=0;
 int j=0;
 int k=0;
 int count=0;
 while(i<len+1){
     
     if(src[i]==src[j]){
        count++;
     }
     else{
     	nwe[k++]=src[i-1];
		nwe[k++]='0'+count;        
		count=1;
		j=i;

        
     }
     i++;
 }
  return strcpy(src,nwe);
  }
