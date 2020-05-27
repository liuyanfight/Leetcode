
#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
#include <algorithm>
using namespace std;
  
enum class TestCheckResult
{
    act = 0,
    deact = 1,
    noAction = 2,
    zeroBuffer = 3,
    rlqDeact = 4
};


int main()
{
    for ( int fooInt = int(TestCheckResult::act); fooInt != int(TestCheckResult::rlqDeact); fooInt++ )
{
   TestCheckResult foo = static_cast<TestCheckResult>(fooInt);
   cout << int(foo) << endl;
}
    return 0;
}