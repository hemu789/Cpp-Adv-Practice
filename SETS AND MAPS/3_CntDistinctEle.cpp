#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{

    int arr[7] = {15, 12, 13, 12, 13, 13, 18};

    unordered_set<int> s;
    for (int i = 0; i < 7; i++)
    {
        s.insert(arr[i]);
    }

    cout << s.size();

    return 0;
}