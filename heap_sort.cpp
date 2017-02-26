#include <iostream>
#include <cstring>
using namespace std;
void MAX_HEAPIFY(int A[],int i,int t);

int main()
{
	int t;
	cin>>t;
	cout<<endl;
	int A[t+1];
	A[0]=0;
	for(int m=1;m<=t;m++){
	
	cin>>A[m];
	
	
	
	}
	
	
	
		for(int m=1;m<=t;m++){
	MAX_HEAPIFY(A,m,t);
	
	
	
	}
	
	int y=t;
	int m=1;
	while(y!=0){
	
	cout<<A[m++];
	cout<<endl;
	A[m]=A[y];
	MAX_HEAPIFY(A,m,--y);
	
	
   	
}

}
void MAX_HEAPIFY(int A[],int i,int t){
	
	int l=2*i;
	int r=2*i+1;
	int largest=0;
	if(l<=t && A[l]>A[i])
		largest=l;
		else
		largest=i;
	if(r<=t && A[r]>A[largest])
		largest=r;
	
		if(largest!=i){
			int temp=A[i];
			A[i]=A[largest];
			A[largest]=temp;
			MAX_HEAPIFY(A,largest,t);			
		}
	
	
	
}
