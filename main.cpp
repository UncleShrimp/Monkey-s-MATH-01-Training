#include <iostream>
#include <algorithm>
using namespace std;

int amount=0;

int checkChar(char inputChar) {
    string source = "abdegopq069DOPQR";
    for(auto iter {std::begin(source)}; iter != std::end(source); iter++) {
        if (inputChar==*iter) {
            return 1;
            break;
        }
    }
    source = "%&B8";
    for(auto iter {std::begin(source)}; iter != std::end(source); iter++) {
        if (inputChar==*iter) {
            return 2;
            break;
        }
    }
    return 0;
}

int countZero(std::string s)
{
    for(auto iter {std::begin(s)}; iter != std::end(s); iter++)
    {
        amount+=checkChar(*iter);
        if (*iter=='(' && *(iter+1)==')') {
            amount+=1;
        }
    }
    return amount;
}

int main()
{
    cout<<countZero("(())");
}