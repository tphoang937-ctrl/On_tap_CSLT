/*
1.1. Nhập vào t giây, hãy đổi t giây ra dạng giờ - phút - giây.
Ví dụ: t = 3700 thì kết quả là: 1h 1m 40s
*/

#include <iostream>
using namespace std;

int main()
{
    int t, p = 0, h = 0;
    do
    {
        cout << "Nhập vào số giây (t >= 0): ";
        cin >> t;
    } while (t < 0);

    h = t / 3600;
    t = t % 3600;
    p = t / 60;
    t = t % 60;

    cout << h << "h " << p << "m " << t << "s" << endl;
    return 0;
}
