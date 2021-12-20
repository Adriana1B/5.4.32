#include <iostream>
#include <cmath>
using namespace std;
double P0(const int k, const int N)
{
	double P = 1;
	for (int k = N; k <= N; k++)
		P += (((k - N) / (k + N)) + 1);
	return P;
}
double P1(const int N, const int k, const int i)
{
	if (i > 19)
		return 1;
	else
		return (((k - N) / (k + N)) + 1) * P1(k, N, i + 1);

}
double P2(const int N, const int k, const int i)
{
	if (i < 19)
		return 1;
	else
		return (((k - N) / (k + N)) + 1);
}
double P3(const int N, const int k, const int i, double t)
{
	if (i >= 19)
		return t;
	else
		return P3(N,k, i + 1, t);

}
double P4(const int N,const int k, const int i, double t)
{
	t = t + (((k - N) / (k + N)) + 1);
		if (i <= k) (((k - N) / (k + N)) + 1);
	return t;
	else
		return P4(N,k, i - 1, t);

}
int main()
{
	int  N,k;
	cout << "N = "; cin >> N;
	cout << "k = "; cin >> k;
	cout << "(iter) P0 = " << P0(N,k) << endl;
	cout << "(rec up++) P1 = " << P1(N, k,k) << endl;
	cout << "(rec up--) P2 = " << P2(N, N,k) << endl;
	cout << "(rec down++) P3 = " << P3(N, k,k, 1) << endl;
	cout << "(rec down--) P4 = " << P4(N, N, k,1) << endl;
	return 0;
}
