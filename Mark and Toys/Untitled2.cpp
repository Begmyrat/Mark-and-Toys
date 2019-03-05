#include <iostream>
#include <algorithm>

using namespace std;

long long int n,m,t,r;
long long int a[999999];

int main(){
	
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	sort(a,a+n);
	
	for(int i=0;i<n;i++){
		if(t+a[i]>m)
			break;
		else{		
			t+=a[i];
			r++;
		}
	}
	cout<<r<<endl;
	
	return 0;
}
