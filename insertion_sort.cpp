# include <iostream>
using namespace std;

void insertion_sort(int a[],int t);
int main()
{
	
		int t;
	cin>>t;
	cout<<endl;
	int A[t];
	
	for(int m=0;m<t;m++){
	
	cin>>A[m];
	
	
	}
	
	insertion_sort(A,t);
	
	for(int m=0;m<t;m++){
	
	cout<<A[m];
	cout<<endl;
	
	}
   	
	
	
	
	return 0;
}

void insertion_sort(int a[],int t){
	

	for(int x=1;x<t;x++)
	{
		
		int key=a[x];
		int y=x-1;
		while(y>-1 && a[y]>key)
		{
			a[y+1]=a[y];
			y=y-1;
			a[y+1]=key;
			
			
		}
		
		
		
	}
	
	
	
	
}


