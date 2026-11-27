#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

const int MAX = 100;

// Câu 1
void taomang(int &n, int a[]);
// Câu 2
void xuatmang(int n, int a[]);
// Câu 3 // cần có hàm phụ là ngto(int n);
int tongngto(int n, int a[]);
// Câu 4  // cần có hàm phụ là socp(int n);
int demsocp(int n, int a[]);
// Câu 5 // cần có hàm phụ là sohc(int n);
int vtriminofshc(int n, int a[]);
// Câu 6
int main()
{
    srand(time(0)); // Khởi tạo seed để mỗi lần chạy ra dãy số khác nhau

    int n, a[MAX];
    taomang(n, a);

    cout << "Mang vua tao: ";
    xuatmang(n, a);

    cout << "Tong cac so nguyen to: " << tongngto(n, a) << endl;
    cout << "So luong so chinh phuong: " << demsocp(n, a) << endl;

    int vt = vtriminofshc(n, a);
    if (vt != -1)
        cout << "Vi tri so hoan chinh nho nhat: " << vt << " (gia tri: " << a[vt] << ")" << endl;
    else
        cout << "Khong ton tai so hoan chinh trong mang (-1)" << endl;

    return 0;
}
// Thiết kế hàm

void taomang(int &n, int a[])
{
    do
    {
        cout << "Nhap so phan tu n (1.." << MAX << "): ";
        cin >> n;
    } while (n <= 0 || n > MAX);

    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100 + 1; // Sinh số ngẫu nhiên từ 1 đến 100
    }
}
void xuatmang(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int ngto(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int socp(int n)
{
    if (n < 0)
        return 0;
    int i = sqrt(n);
    if (i * i == n)
        return 1;
    return 0;
}
int sohc(int n)
{
    if (n <= 1)
        return 0;
    int temp = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            temp += i;
            if (n / i != i)
                temp += n / i;
        }
    }
    return temp == n;
}
int tongngto(int n, int a[])
{
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        if (ngto(a[i]))
            tong += a[i];
    }
    return tong;
}
int demsocp(int n, int a[])
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (socp(a[i]))
            dem++;
    }
    return dem;
}
int vtriminofshc(int n, int a[])
{
    int min = 0, vitri = -1;
    for (int i = 0; i < n; i++)
    {
        if (sohc(a[i]))
        {
            vitri = i;
            if (min > a[i])
                if (vitri == -1 || a[i] < min)
                {
                    min = a[i];
                    vitri = i;
                }
        }
    }
    return vitri;
}