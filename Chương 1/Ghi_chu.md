# Chương 1: Giới thiệu ngôn ngữ lập trình C/C++

- **Bài giảng:** [Chương 1.pdf](./Chương%201.pdf)
- **Đề bài tập:** [Bai_tap.txt](./Bai_tap.txt) (`Bài 1_1.cpp` – `Bài 1_9.cpp`)

## 1. Kiến thức trọng tâm
- Cấu trúc cơ bản của chương trình C++ (`#include <iostream>`, `using namespace std;`, `int main()`).
- Kiểu dữ liệu cơ bản (`int`, `long long`, `float`, `double`, `char`, `bool`) và **ép kiểu** (`(double)a / b` để tránh chia nguyên mất phần thập phân).
- Nhập xuất chuẩn với `cin`, `cout`, định dạng số thập phân (`#include <iomanip>` -> `fixed << setprecision(2)`).
- Các cấu trúc rẽ nhánh: `if ... else`, `if ... else if ... else`, `switch ... case`.
- Các hàm toán học trong `<cmath>`: `sqrt()`, `pow()`, `abs()`, `fabs()`.

> [!IMPORTANT]
> **🔥 TRỌNG TÂM THI CỬ (Hay gặp ở câu khởi động / bài toán điều kiện)**
> - **Chia lấy nguyên `/` và chia lấy dư `%`:** tách giờ-phút-giây (`Bài 1_1`), tách chữ số (`n % 10`, `n /= 10`).
> - **Ép kiểu khi chia số nguyên:** `int a = 5, b = 2; double kq = (double)a / b;` (nếu viết `a / b` sẽ ra `2`, sai ngay!).
> - **Kiểm tra điều kiện tam giác & phân loại (`Bài 1_7`):**
>   - Điều kiện tồn tại: `a + b > c && a + c > b && b + c > a` (nhớ dùng `double` nếu cạnh có thể lẻ, và so sánh số thực với sai số `1e-9` nếu cần).
> - **Giải phương trình bậc 2 (`Bài 1_5`):** luôn xét đủ trường hợp `a == 0` (trở thành bậc 1) trước khi tính `delta = b*b - 4*a*c`.

## 2. Lỗi thường gặp
- Viết `a = b` (gán) thay vì `a == b` (so sánh) trong `if`.
- Quên `break;` trong `switch ... case` làm trôi xuống nhánh dưới.
- Nhập `a, b, c` kiểu `int` rồi tính `delta` hay nghiệm nhưng quên ép kiểu sang `double`.
