#include<iostream>

long min(long A[], long n)
{
	long minimum = 10000000;
	for(int i = 0; i < n; ++i)
	{
		if(A[i] < minimum)
			minimum = A[i];
	}
	return minimum; 
}

long max(long A[], long n)
{
	long maximum = 10000000;
	for(int i = 0; i < n; ++i)
	{
		if(A[i] > maximum)
			maximum = A[i];
	}
	return maximum; 
}

using namespace std;
int main()
{
	long A[5] = {1,4,-8,0,5};	
	long minimum = min(A, 5);
	cout << minimum;
}