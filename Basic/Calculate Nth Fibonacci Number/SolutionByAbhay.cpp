#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
	if(n==1 || n==0){
		return n;
	}
	return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a;
		cin>>a;
		cout<<fibonacci(a);
	}
	return 0;
}
