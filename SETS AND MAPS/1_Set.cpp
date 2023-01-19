// Unordered Set have no ordering -> Hashing
// Ordered Set having ordering ->Red Black And AVL Tree
#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{

    unordered_set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    s.insert(60);

    for (auto i : s)
    {
        cout << i << " ";
    }

    return 0;
}