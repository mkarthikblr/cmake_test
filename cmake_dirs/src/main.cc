#include <iostream>

#include "test.h"

using namespace std;
using namespace test;

int main() {
    cout << "Hello World!" << endl;

    App::getInstance().run();
    return 0;
}
