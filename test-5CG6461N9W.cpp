
#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
#include <algorithm>
using namespace std;


int main()
{
    std::vector<int> l1PoolIds{55,55,55,55,55,55,55,55};
    
    std::vector<int> l1PoolIdFlags;
    for (unsigned k = 0; k < 8; ++k)
    {
        int l1PoolId = l1PoolIds[9];
        bool isOK = find(l1PoolIdFlags.begin(), l1PoolIdFlags.end(), l1PoolId) != l1PoolIdFlags.end();
        if (isOK)
        {
            continue;
        }
        l1PoolIdFlags.insert(l1PoolIdFlags.begin(), l1PoolId);
        cout << l1PoolId << endl;
    }
    return 0;
}