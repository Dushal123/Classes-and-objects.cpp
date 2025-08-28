//Dushal kella
//24070123053
#include <iostream>
using namespace std;

class Cuboid {
    int l, b, h;
public:
    Cuboid(int x, int y, int z) {
        l = x; b = y; h = z;
    }
    int volume() {
        return l * b * h;
    }
};

int main() {
    Cuboid c(5, 7, 7);
    cout << "Volume = " << c.volume() << endl;
    return 0;
}
Output:
Volume=245
