/* Câu 5. (2,0 điểm)
Cho tập tin văn bản table.txt có cấu trúc như sau:
- Dòng đầu ghi hai số nguyên dương m, n;
- Trong m dòng tiếp theo mỗi dòng ghi n số nguyên có giá trị từ 1 đến 6.
Hãy viết chương trình thực hiện các công việc sau:
a. Đọc tập tin văn bản trên ra mảng hai chiều a có m dòng n cột; trong đó chỉ số dòng từ 1 đến m, chỉ số cột từ 1 đến n.
b. Tìm giá trị trung bình cộng các số trong bảng số.
c. Đếm xem trong bảng số có bao nhiêu hình vuông 2x2 chứa các số có cùng giá trị (a[i][j], a[i][j+1], a[i+1][j], a[i+1][j+1]).
d. Hãy đếm xem mỗi giá trị trong bảng số xuất hiện bao nhiêu lần?
Ghi kết quả vào file result.txt:
- Dòng 1: số thực (2 chữ số thập phân) kết quả câu b.
- Dòng 2: số nguyên kết quả câu c.
- Dòng 3: 6 số nguyên là tần số xuất hiện của các giá trị 1, 2, 3, 4, 5, 6.
   Ví dụ:
   [table.txt]
   5 7
   1 5 1 2 2 3 5
   1 5 2 2 2 3 3
   1 3 3 1 3 3 3
   6 3 6 6 6 3 1
   4 4 6 6 6 4 4
   [result.txt]
   3.40
   4
   6 5 10 4 3 7 */
#include <iostream>
using namespace std;
int main()
{
    FILE *f = fopen("table.txt", "rt");
    FILE *o = fopen("result.txt", "wt");
    int m, n, a[100][100];
    fscanf(f, "%d%d", &m, &n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            fscanf(f, "%d", &a[i][j]);
    }
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            sum += a[i][j];
        }
    double tb = (double)sum / (m * n);
    int thcn = 0;
    for (int i = 0; i < m - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
            if (a[i][j] == a[i][j + 1] &&
                a[i][j] == a[i + 1][j] &&
                a[i][j] == a[i + 1][j + 1])
                thcn++;
    }
    int s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 1)
                s1++;
            if (a[i][j] == 2)
                s2++;
            if (a[i][j] == 3)
                s3++;
            if (a[i][j] == 4)
                s4++;
            if (a[i][j] == 5)
                s5++;
            if (a[i][j] == 6)
                s6++;
        }
    }
    fprintf(o, "%.2f\n", tb);
    fprintf(o, "%d\n", thcn);
    fprintf(o, "%d %d %d %d %d %d", s1, s2, s3, s4, s5, s6);
    fclose(f);
    fclose(o);
    return 0;
}