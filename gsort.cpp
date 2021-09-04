#include <iostream>
using namespace std;
int n,i;
long long a[1000001];
void gsort(int l,int r){
	int i,j;
	int x=(l+r)/2;
	
	
	i=l;
	j=r;
	
	while(i<=j){
	
	while(a[i]<a[x]){
		i++;
	}
	while(a[j]>a[x]){
		j--;
	}
	
	if(i<=j){
	swap(a[i],a[j]);
	i++;
	j--;
	}	
				}	
	
	if(l<j)gsort(l,j);
	if(i<r)gsort(i,r);
	
	
}
main(){
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	
	gsort(1,n);
	
	for(i=1;i<=n;i++)
		cout<<a[i]<<" ";
	
}
