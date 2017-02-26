#include <iostream>
using namespace std;

int main() {
	//code
	int T=0;
	int N=0;
	int M=0;
	
	 
   scanf("%d", &T);
   while(T){

scanf("%d", &M);
 int arr1[M];
 
scanf("%d", &N);
int arr2[N];
for (int i=0;i<M;i++)
scanf("%d", &arr1[i]);
for (int j=0;j<N;j++)
scanf("%d", &arr2[j]);
int carry=0;
int max,min;
if(M>N)
{
	max=M;
	min=N;
}else{
	min=M;
	max=N;
}
int res[max+1];
 for (int i=0;i<min+1;i++)
 res[i]=0;

for (int k=min;k>0;k--)
{
	int sum=arr1[M-1]+arr2[N-1];
sum=sum+carry;
int	temp= sum%10;
	
	 res[max]=temp;
	 	if(sum>9)
	carry =1;
	else 
	carry=0;
	printf("%d \n", carry);
	if(k==1&&carry==1)
	res[0]=1;
	M--;N--;
	
}
for(int i=0;i<sizeof(res)/sizeof(res[0]);i++ )
printf("%d", res[i]);

       T--;
   }


	
	return 0;
}
