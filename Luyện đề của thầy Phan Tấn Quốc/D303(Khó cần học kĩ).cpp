/*
Câu 3. (2,0 điểm)
Cho chuỗi s chứa các ký tự chữ cái và ký tự khoảng trắng
(giả thiết đầu chuỗi và cuối chuỗi không có ký tự khoảng trắng,
giữa các từ của chuỗi có một ký tự khoảng trắng).
Viết các hàm thực hiện các công việc sau:
a. Đếm số lượng ký tự mỗi từ.
b. Tìm một từ có nhiều ký tự nhất.
   Ví dụ: Chuỗi s là "ChatGPT provides excellent support for research as well as many other tasks"
   - Kết quả câu a: 7 8 9 7 3 8 2 4 2 4 5 5
   - Kết quả câu b: excellent
*/
#include <iostream>
#include <cstring>
using namespace std;
void kytumoitu(char *s);
char *tudainhat(char *s);
int main()
{
    char s[256] = "ChatGPT provides excellent support for research as well as many other tasks";
    cout << "Kết quả câu a: ";
    kytumoitu(s);
    cout << endl;
    cout << "Kết quả câu b: " << tudainhat(s) << endl;
    return 0;
}
void kytumoitu(char *s)
{
    int l = strlen(s);
    int dem = 0;
    for (int i = 0; i < l; i++)
        if (s[i] != ' ')
            dem++;
        else
        {
            cout << dem << " ";
            dem = 0;
        }
    cout << dem << endl;
}

char *tudainhat(char *s)
{
    strcat(s, " ");
    char *skq = new char[256];
    int i = 0;
    int max = 0;
    while (i < strlen(s))
    {
        int j = i;
        while (s[j] != ' ')
            j++;
        if (j - i + 1 > max)
        {
            max = j - i + 1;
            int u = 0;
            for (int k = i; k <= j; k++)
                skq[u++] = s[k];
        }
        i = j + 1;
    }
    skq[max - 1] = '\0';
    return skq;
}