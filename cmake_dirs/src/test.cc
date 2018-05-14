#include <iostream>
#include "test.h"

using namespace test;
using namespace std;


App::App() {
    cout << "Inside constructor" << endl;
}

App::App(const App& rhs) {
    cout << "Inside copy construtor" << endl;
}

App&
App::getInstance() {
    static App instance;

    return instance;
}

void
App::run() {
    cout << "Running the App" << endl;
}
