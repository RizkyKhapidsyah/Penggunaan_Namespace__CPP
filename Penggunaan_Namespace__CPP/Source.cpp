#include <iostream>
#include <conio.h>

namespace RizkyKhapidsyah {
    int a = 10;
    int b = 20;

    int add(int x, int y) {
        return x + y;
    }
}

int main() {
    std::cout << "Nilai 1 = " << RizkyKhapidsyah::a << std::endl;
    std::cout << "Nilai 2 = " << RizkyKhapidsyah::b << std::endl << std::endl;
    std::cout << "Hasil   = " << RizkyKhapidsyah::add(RizkyKhapidsyah::a, RizkyKhapidsyah::b) << std::endl;

    _getch();
    return 0;
}