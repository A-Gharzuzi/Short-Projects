include <iostream>
using namespace std;

void fibonacci(int N)
{
	int f1 = 1, f2 = 1;
	int f = 1;
	for (int i = 0; i < N; i++)
	{
		if (i < 2)
			cout << f << ", ";
		else
		{
			f = f1 + f2;
			f1 = f2;
			f2 = f;
			cout << f << ", ";																	}
	}
}

int main()
{
	int N;
	cout << "Enter the value of N: ";
	cin >> N;
	fibonacci(N);

	return 0;
}

