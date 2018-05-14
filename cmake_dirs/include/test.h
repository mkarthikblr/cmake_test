#ifndef __TEST_H__
#define __TEST_H__


namespace test {

class App {
private:
    App();
    App(const App&);
public:
    static App& getInstance();
    void run();
};

}

#endif
