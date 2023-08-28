#include <iostream>
#include <limits>

using namespace std;

int main(void)
{
    int meuInt = 0;
    meuInt = numeric_limits<int>::min();
    cout << "O menor valor de um int é: " << meuInt << endl;
    meuInt = numeric_limits<int>::max();
    cout << "O maior valor de um int é: " << meuInt << endl;
    return 0;
}