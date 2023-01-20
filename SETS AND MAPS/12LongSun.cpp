#include <iostream>
#include <unordered_map>
using namespace std;

int solve(int arr[], int n, int target)
{

    int res = 0;
    int pre_sum = 0;

    unordered_map<int, int> m; // int -> prev-sum , int ->index

    for (int i = 0; i < n; i++)
    {

        pre_sum = pre_sum + arr[i];

        if (pre_sum == target)
        {
            res = i + 1;
        }

        // Left me set

        if (m.find(pre_sum) == m.end())
        { // presum is not present in map
            m.insert({pre_sum, i});
        }

        if (m.find(pre_sum - target) != m.end())
        {

            res = max(res, i - m[pre_sum - target]);
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