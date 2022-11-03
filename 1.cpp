#include<iostream>

int min(int A[], int n)
{
	int minimum = 10000000;
	for(int i = 0; i < n; ++i)
	{
		if(A[i] < minimum)
			minimum = A[i];
	}
	return minimum; 
}

using namespace std;
int main()
{
	int A[5] = {1,4,-8,0,5};	
	int minimum = min(A, 5);
	cout << minimum;
}