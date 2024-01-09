#include <iostream>
#include <stdexcept>

using namespace std;

class ExceptionHandler {
public:
    void performOperation(int num, int denom) {
        try {
            if (denom == 0) {
                throw logic_error("Division by zero is not allowed");
            }

            result = num / denom;
            cout << "Result of division: " << result << endl;
        } catch (const exception &ex) {
            handleException(ex);
        }
    }

public:
    int result;

    void handleException(const exception &ex) {
        cerr << "Exception caught: " << ex.what() << endl;
    }
};

int main() {
    ExceptionHandler handler;

    handler.performOperation(10, 2);

    handler.performOperation(5, 0);

    try {
        throw runtime_error("An example of a different exception");
    } catch (const exception &ex) {
        handler.handleException(ex);
    }

    return 0;
}

