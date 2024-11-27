#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void zwieksz_o_10();

int main()
{
    int x = 100;
    zwieksz_o_10(x);
    return 0;
}
void zwieksz_o_10(int x)
{
    x += 10;
}