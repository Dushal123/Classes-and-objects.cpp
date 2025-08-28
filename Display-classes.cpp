//Dushal kella
//24070123053

#include <iostream>
using namespace std;

class Cuboid {
public:
    int h, w, l;
    void input() {
        cout << "Enter height, width, length: ";
        cin >> h >> w >> l;
    }
    int volume() { return h * w * l; }
    void disp() { cout << "Volume of cuboid: " << volume(); }
};

int main() {
    Cuboid c1;
    c1.input();
    c1.disp();
    return 0;
}
Output:
Enter height, width, length: 2 3 4
Volume of cuboid: 24
