
#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
	if (n <= 1)
		return n;
	return fib(n - 1) + fib(n - 2);
}

int main()
{
	cout<<"Enter a number"<<endl;
    int n;
    cin>>n;
	cout << fib(n)<<endl;
	
	return 0;
}

