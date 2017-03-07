#include<iostream>
using namespace std;
int main(void)
{
	int n;
	cin>>n;
	while(n!=1)
	{
		cout<<n<<" ";
		if(n%2==1)n=3*n+1;
		else n=n/2;
	}
	cout<<1;
	return 0;
}
