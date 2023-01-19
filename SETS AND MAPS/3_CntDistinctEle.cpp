#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{

    int arr[7] = {15, 12, 13, 12, 13, 13, 18};

    //  unordered_set<int> s;
    // for (int i = 0; i < 7; i++)
    // {
    //     s.insert(arr[i]);
    // }

    unordered_set<int> s(arr, arr + 7);
    // set(begin of arr, end of arr itterator)

    cout << s.size();

    return 0;
}