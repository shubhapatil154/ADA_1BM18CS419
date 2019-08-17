#include <iostream>
using namespace std;

int sqrtofx(int x)
{
	int result;
	int start = 1;
	int end = x/2;
	
	if (x <= 2)
		
		return x;
		
	while (start <= end)
	{
		
		int mid = (start + end) / 2;
		long sqr = mid*mid;

		
		if (sqr == x)
			return mid;

		
		else if (sqr < x)
		{
			
			start = mid + 1;

			
			result = mid;
		}

		else
		{
			
			end = mid - 1;
		}
	}

	return result;
}

int main()
{
	int x;
	int temp=0;
	double t;
	clock_t start,end;
	start=clock();
	cout << "ENTER THE NUMBER\n";
	cin >> x;
	temp=sqrtofx(x);
	cout << "SQRT OF THE GIVEN NUMBER "<< x << " is " << temp;
	end=clock();
	t+=(double)(end-start)/CLOCKS_PER_SEC;
	cout << "\n TIME TAKEN BY THE PROGRAM IS"<<t;
	return 0;
}
