/*
Câu 5. (2,0 điểm)
Cho một file văn bản num_inp.txt có cấu trúc như sau:
- Dòng đầu ghi số n.
- Dòng tiếp theo ghi n số nguyên a[0], a[1], ..., a[n-1] các số cách nhau ít nhất một khoảng trắng.
Hãy viết chương trình thực hiện các công việc sau:
a. Đọc dữ liệu từ file num_inp.txt và lưu vào biến n và dãy n số nguyên a[0], a[1], ..., a[n-1].
b. Tìm giá trị nhỏ nhất của dãy số a[0], a[1], ..., a[n-1].
c. Ghi kết quả tìm được của câu b vào file văn bản num_output.txt.
   Ví dụ:
   [num_inp.txt]
   8
   14 23 22 24 6 12 45 15
   [num_out.txt]
   6
*/
#include <iostream>
using namespace std;
int min(int a[], int n);
int main()
{
    FILE *f;
    int n, a[250];
    f = fopen("num_inp.txt", "rt");
    fscanf(f, "%d", &n);
    cout << "Nhận các giá trị từ file num_inp.txt" << endl;
    for (int i = 0; i < n; i++)
    {
        fscanf(f, "%d", &a[i]);
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Giá trị nhỏ nhất của dãy là: " << min(a, n) << endl;
    FILE *g;
    g = fopen("num_out.txt", "wt");
    fprintf(g, "%d", min(a, n));
    fclose(f);
    fclose(g);
    return 0;
}
int min(int a[], int n)
{
    int minval = a[0];
    for (int i = 1; i < n; i++)
        if (minval > a[i])
            minval = a[i];
    return minval;
}