/*
Câu 5. (2,0 điểm)
Cho một file văn bản num_inp.txt; có cấu trúc như sau:
-Dòng đầu ghi số n.
-Dòng tiếp theo ghi n số nguyên a_0, a_1, ..., a_{n-1}; các số cách nhau ít nhất một khoảng trắng.
Hãy viết chương trình thực hiện các công việc sau:
a. Đọc dữ liệu từ file num_input.txt và lưu vào biến n và dãy n số nguyên a_0, a_1, ..., a_{n-1}.
b. Tìm giá trị nhỏ nhất của dãy số a_0, a_1, ..., a_{n-1}.
c. Ghi kết quả tìm được của câu b vào file văn bản num_output.txt.
Ví dụ:
num_inp.txt
8
14  23  22  24  6  12  45  15
num_out.txt
6
*/
#include <iostream>
#include <cstdio>
using namespace std;

void docfile(FILE *f, int a[], int &n);
int mint(int a[], int n);

int main()
{
    FILE *f = fopen("num_inp.txt", "rt");
    FILE *o = fopen("num_out.txt", "wt");
    if (f == nullptr || o == nullptr)
    {
        cout << "Khong mo duoc file!" << endl;
        return 1;
    }
    int n, a[100];
    docfile(f, a, n);
    int min = mint(a, n);
    fprintf(o, "%d", min);
    fclose(f);
    fclose(o);
    return 0;
}

void docfile(FILE *f, int a[], int &n)
{
    fscanf(f, "%d", &n);
    for (int i = 0; i < n; i++)
        fscanf(f, "%d", &a[i]);
}

int mint(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
        if (min > a[i])
            min = a[i];
    return min;
}