#ifdef ENABLE_LOGGING
#include <iostream>

static void log(const char *message) {
    std::cout << message << '\n';
}

#else
#define log(x)
#endif

int main() {
    log("hello, world!");
}