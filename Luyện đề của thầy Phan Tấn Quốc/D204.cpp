/*
Cho chuỗi s chứa các ký tự chữ cái và khoảng trắng.
Đầu chuỗi và cuối chuỗi không có khoảng trắng,
giữa các từ có đúng một khoảng trắng. Viết chương trình thực hiện:
a. Đếm số ký tự của mỗi từ trong chuỗi s.
b. Tách một từ bên phải của chuỗi s.
Ví dụ: s = “The Python programming language is easy to learn and deploy applications”.
Kết quả câu a: 3 6 11 8 2 4 2 5 3 6 12.
Kết quả câu b: applications.
*/
#include <iostream>
using namespace std;

int main()
{
    char s[256];
    cin.getline(s, 256); // nhập cả dòng vào s
    cout << s << endl;   // xuất cả chuỗi s

    int i = 0;
    while (s[i] != '\0')
    {
        putchar(s[i]); // in ký tự thứ i
        i++;
    }
    putchar('\n');
    return 0;
}