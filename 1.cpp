
#include<iostream>

long min(long A[], long n)
{
	long minimum = 10000000;
	for(long i = 0; i < n; ++i)
	{
		if(A[i] < minimum)
			minimum = A[i];
	}
	return minimum; 
}

using namespace std;
int main()
{
	long A[5] = {1,4,-8,0,5};	
	long minimum = min(A, 5);
	cout << minimum;
}