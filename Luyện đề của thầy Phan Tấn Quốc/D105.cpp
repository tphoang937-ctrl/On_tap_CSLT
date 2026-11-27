/*
Câu 5. (2,0 điểm)
Cho file văn bản num_input.txt có cấu trúc như sau:
- Dòng đầu chứa một số nguyên dương n.
- Trong các dòng tiếp theo tổng cộng chứa n số nguyên a[0], a[1], ..., a[n-1].
Hãy viết chương trình thực hiện các công việc sau:
a. Đọc dữ liệu từ file num_input.txt và lưu vào biến n và dãy n số nguyên a[0], ..., a[n-1].
b. Tính tổng các số của dãy.
c. Ghi kết quả tìm được của câu b vào file văn bản num_output.txt.
   Ví dụ:
   [num_input.txt]
   10
   7 10 8 9
   12 5
   13 4 2
   9
   [num_output.txt]
   79
*/
#include <iostream>
using namespace std;
int main()
{
    FILE *f;
    f = fopen("num_input.txt", "rt");
    int a[250];
    int n;
    fscanf(f, "%d", &n);
    for (int i = 0; i < n; i++)
        fscanf(f, "%d", &a[i]);
    cout << "các giá trị đã nhận từ file" << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    fclose(f);
    int tong = 0;
    for (int i = 0; i < n; i++)
        tong += a[i];
    cout << "tổng các số của dãy là: " << tong << endl;
    FILE *g;
    g = fopen("num_output.txt", "wt");
    fprintf(g, "%d", tong);
    fclose(g);
    return 0;
}
