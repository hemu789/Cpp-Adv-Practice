#include <iostream>
#include <unordered_set>
using namespace std;

int solve(int arr[], int n, int target)
{

    int res = 0;

    for (int i = 0; i < n; i++)
    {

        int curr_sum = 0;

        for (int j = i; j < n; j++)
        {

            curr_sum = curr_sum + arr[j];

            if (curr_sum == target)
            {
                res = max(res, j - i + 1); // j-i+1 is length
            }
        }
    }
    return res;
}
int main()
{

    // Subarray with zero sum (target =0 )

    int n;
    cout << "Enter n " << endl;
    cin >> n;

    int target;
    cout << "Enter Target " << endl;
    cin >> target;

    int arr[n];
    cout << "Enter Elements " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = solve(arr, n, target);
    cout << ans;
    return 0;
}