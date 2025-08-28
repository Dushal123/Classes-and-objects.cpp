//Dushal kella
//24070123053

#include <iostream>
using namespace std;

class Cube {
public:
    int h = 6, w = 4, l = 5;
    int volume() { return h * w * l; }
};

int main() {
    Cube c;
    cout << "Volume of the cube is: " << c.volume() << endl;
    return 0;
}

Output:
Volume of the cube is:120
