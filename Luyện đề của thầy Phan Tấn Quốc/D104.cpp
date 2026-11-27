/*
Câu 4 (2,0 điểm)
Cho chuỗi s chứa các ký tự chữ cái và khoảng trắng.
Đầu chuỗi và cuối chuỗi không có khoảng trắng, giữa các từ có đúng một khoảng trắng.
Viết chương trình thực hiện:
a. Đếm số lượng từ của chuỗi s.
b. Đếm số ký tự của mỗi từ.
Ví dụ: s = “ChatGPT is an artificial intelligence powered conversational agent developed by OpenAI”.
Kết quả câu a: 11.
Kết quả câu b: 7 2 2 10 12 7 14 5 9 2 6.
*/
#include <iostream>
using namespace std;
int demsoluongtu(string s);
void demtukitu(string s);
int main()
{
    char s[256];
    cin.getline(s, 256);
    cout << "Kết quả câu a: " << demsoluongtu(s) << endl;
    cout << "Kết quả câu b: ";
    demtukitu(s);
    return 0;
}
int demsoluongtu(string s)
{
    int dem = 1;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == 32)
            dem++;
    return dem;
}
void demtukitu(string s)
{
    int dem = 0;
    for (int i = 0; i < s.length(); i++)
        if (s[i] != 32)
            dem++;
        else
        {
            cout << dem << " ";
            dem = 0;
        }
    cout << dem << endl;
}