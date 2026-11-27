/*
Câu 4. (2,0 điểm)
Cho file văn bản num_input.txt có cấu trúc như sau:
- Dòng đầu chứa số nguyên dương n.
- Trong các dòng tiếp theo tổng cộng chứa n số nguyên a[0], a[1], ..., a[n-1].
Viết chương trình hoàn chỉnh thực hiện các công việc sau:
a. Đọc dữ liệu từ file num_input.txt và lưu vào các biến n và dãy n số nguyên a[0], a[1], ..., a[n-1].
b. Đếm xem dãy a[0], a[1], ..., a[n-1] chứa bao nhiêu số nguyên tố?
c. Hãy sắp xếp các phần tử của dãy a[0], a[1], ..., a[n-1] theo thứ tự tăng dần.
d. Ghi kết quả tìm được của câu b, câu c vào file văn bản num_output.txt; trong đó mỗi dòng ghi kết quả của mỗi câu tương ứng.
   Ví dụ:
   [num_input.txt]
   10
   7 10 8 9
   12 5
   13 4 2
   9
   [num_output.txt]
   4
   2 4 5 7 8 9 9 10 12 13

*/
#include <iostream>
using namespace std;
int main()
{
    FILE *f;
    int n;
    int a[200];
    f = fopen("num_input.txt", "rt");
    fscanf(f, "%d", &n);
    for (int i = 0; i < n; i++)
    {
        fscanf(f, "%d", &a[i]);
        cout << a[i] << ' ';
    }
    fclose(f);
}