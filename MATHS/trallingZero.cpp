#include <iostream>
using namespace std;

// talling zero in fact
int TrallingZero(int n)
{
    int fact = 1;

    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }

    // fact store factorial of a no

    int res = 0;

    while (fact % 10 == 0)
    {
        res++;
        fact = fact / 10;
    }

    return res;
}

int main()
{

    int n; // 24
    cout << "Enter n" << endl;
    cin >> n;

    int ans = TrallingZero(n);
    cout << ans;
    return 0;
}