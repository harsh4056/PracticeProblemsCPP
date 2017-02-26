#include <iostream>
#include <cstring>
using namespace std;
void merge_sort(int A[],int a,int b);
void merge(int A[],int p,int q,int r);
int main()
{
	int t;
	cin>>t;
	cout<<endl;
	int A[t];
	
	for(int m=0;m<t;m++){
	
	cin>>A[m];
	
	
	}
	
	merge_sort(A,0,t-1);
	
	for(int m=0;m<t;m++){
	
	cout<<A[m];
	cout<<endl;
	
	}
   	
}

void merge(int A[],int p,int q,int r){
	int n1= (q-p+1);
	int n2=r-q;
	int L[n1+1];
	int R[n2+1];
	
	for (int i=1;i<=n1;i++){
	
	L[i-1]=A[p+i-1];}
	for (int j=1;j<=n2;j++){
	
	R[j-1]=A[q+j];}
	
	int x=0;
	int y=0;
	
	L[n1]=99999;
	R[n2]=99999;
	
	
	
	for(int k=p;k<=r;k++)
	{
		if(L[x]<=R[y]){
		A[k]=L[x];
		x++;
		}
		else{
			A[k]=R[y];
			y++;
		
			
		}
	}}

		
		
		
		
		
		
	
	
	void merge_sort(int A[],int a,int c){
		
		if(a<c)
		{
	
	int b= (a+c)/2;
		
		
		
	
			merge_sort(A,a,b);
				merge_sort(A,b+1,c);
				merge(A,a,b,c);
			
		
		
		
		
	}
	
		}
		
