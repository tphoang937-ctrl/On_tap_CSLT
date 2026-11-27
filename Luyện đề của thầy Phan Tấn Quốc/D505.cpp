/*Câu 5. (2,0 điểm)
Cho tập tin văn bản table_in.txt có cấu trúc như sau:
- Dòng đầu chứa hai số nguyên dương m, n.
- Trong m dòng tiếp theo, mỗi dòng chứa n số nguyên.
Viết chương trình thực hiện các yêu cầu sau:
a. Đọc dữ liệu từ tập tin table_in.txt vào mảng hai chiều,
trong đó chỉ số dòng, chỉ số cột của mảng bắt đầu từ 1
(gọi mảng này là bảng số).
b. Tìm giá trị lớn nhất (MAX) của bảng số,
tìm giá trị nhỏ nhất (MIN) của bảng số.
Cho biết vị trí (chỉ số dòng, chỉ số cột)
các phần tử của bảng số có giá trị bằng MAX hoặc bằng MIN.
c. Thay thế các phần tử có giá trị MAX và các phần tử có giá trị MIN của bảng số bằng giá trị (MAX + MIN) / 2 (lấy phần nguyên). Tính trung bình cộng các phần tử của bảng số sau khi thay thế.
Ghi kết quả vào file table_out.txt theo cấu trúc ví dụ sau:
   Ví dụ:
   [table_in.txt]
   4 5
   13 19 10  5 15
   11  3 16  3  5
    4 18 12  2 14
    2 17 19 15  2

   [table_out.txt]
   Cau b:
   19 2
   1 2; 3 4; 4 1; 4 3; 4 5;
   Cau c:
   4 5
   13 10 10  5 15
   11  3 16  3  5
    4 18 12 10 14
   10 17 10 15 10
   10.55*/
#include <iostream>
using namespace std;
int main()
{
    FILE *f = fopen("table_in.txt", "rt");
    FILE *o = fopen("table_out.txt", "wt");
    int m, n, a[100][100];
    fscanf(f, "%d%d", &m, &n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            fscanf(f, "%d", &a[i][j]);
    }

    fclose(f);
    fclose(o);
    return 0;
}