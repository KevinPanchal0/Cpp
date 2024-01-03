#include <iostream>
#include <string>

using namespace std;

class Message {
private:
    string internal_string;

public:
   
    Message(string str = "Default Message") {
        internal_string = str;
    }
 
  
    void print() {
        cout << internal_string << endl;
    }


    void print(string additional_string) {
        cout << internal_string << " " << additional_string << endl;
    }
};

int main() {
  
    Message msg("Hello, Dk !");

    
    msg.print();

    
    msg.print("\nThis is an additional message.");

    return 0;
}

