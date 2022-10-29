#include <iostream>
using namespace std;

int main() {

#ifdef DEBUG
    cout << "debug mode" << endl;
#else
    cout << "release mode" << endl;
#endif
    return 0;

}
