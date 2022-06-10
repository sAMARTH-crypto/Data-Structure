#include<bits\stdc++.h>
using namespace std;


// Naive Approach

int fact(int n)
{
	int res = 1;

	for(int i=2; i<=n; i++)
		res = res*i;
	return res;
}

// Recursive approach

int recfact(int n)			//make use of stack
{
	//base case
	if(n==0)
		return 1;
	return n*recfact(n-1);
}

int main(int argc, char const *argv[])
{
	int x;
	cin>>x;
	cout<<fact(x)<<endl;
	cout<<recfact(x);
	return 0;
}
