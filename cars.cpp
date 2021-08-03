#include <iostream>
#include <string>
using namespace std;

int main() {
    string tesla[4] = {"Tesla Model S", "Tesla Model 3", "Tesla Model X", "Tesla Model Y"};

		cout << "The cars are: \n";
    for (int i = 0; i < 4; i++){
        cout << i << ": " << tesla[i] << "\n";
	}
    
    return 0;
}