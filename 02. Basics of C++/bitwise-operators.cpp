// Bitwise Opeators work on the bits of the number and have following operators :

#include <iostream>
using namespace std;

int main()
{
    // Bitwise AND '&'
    int a = 11, b = 7, c;
    c = a & b; // 11 & 7 = 3
    cout << c << endl;

    // Bitwise AND '|'
    int d = 11, e = 7, f;
    f = d | e; // 11 | 7 = 15
    cout << f << endl;

    // Bitwise XOR '^' (XOR : similar bits = 0, different bits = 1)
    int g = 11, h = 7, i;
    i = g ^ h; // 11 ^ 7 = 12
    cout << i << endl;

    // Left Shift '<<' (x << n : Multiplies x by 2^n )
    char j = 5, k;
    k = j << 1; // 5 << 1 = 5 * (2 ^ 1) = 10
    cout << (int)k << endl;

    // Right Shift '>>' (x >> n : Divides x by 2^n )
    char l = 20, m;
    m = l >> 1; // 20 >> 1 = 20 / (2 ^ 1) = 10
    cout << (int)m << endl;

    // Bitwise NOT '~' (Bitwise complement of any number)
    char x = 5, y;
    y = ~x; // 5 : (00...0101) -> (11...1010), which is -ve number so 2's complement will be calculated and result = -6 
    cout << (int)y << endl;
    return 0;
}