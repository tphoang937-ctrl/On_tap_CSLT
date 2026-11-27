# Chương 3: Chương trình con (Hàm & Đệ quy)

- **Bài giảng:** [Chương 3.pdf](./Chương%203.pdf)
- **Đề bài tập:** [Bai_tap.txt](./Bai_tap.txt) (`Bài 3_1.cpp` – `Bài 3_7.cpp`)

## 1. Kiến thức trọng tâm
- Khai báo prototype ở trên `main()`, định nghĩa hàm ở dưới `main()`.
- Phân biệt **tham trị** (`int n` – chỉ đọc, không đổi biến gốc) và **tham chiếu** (`int &n` – thay đổi trực tiếp biến gốc, dùng khi nhập dữ liệu hoặc trả về nhiều giá trị).
- Hàm trả về giá trị (`int`, `double`, `bool`) vs hàm thủ tục (`void`).
- **Đệ quy:** luôn gồm **2 phần**:
  1. Điều kiện dừng (Base case).
  2. Bước gọi lại chính nó tiến về điều kiện dừng.

> [!IMPORTANT]
> **🔥 TRỌNG TÂM THI CỬ (Thường chiếm Câu 1 của đề thi Cuối kỳ - 2.0 điểm)**
> - **Tách hàm kiểm tra phụ:** `ngto(n)`, `socp(n)`, `sohc(n)`, `tongChuSo(n)`, `soDaoNguoc(n)`, `UCLN(a, b)` (thuật toán Euclid: `while (b != 0) { int r = a % b; a = b; b = r; }`).
> - **Đệ quy cơ bản hay hỏi (`Bài 3_3` – `3_5`):**
>   - Tính tổng `S(n)`, giai thừa `n!`, lũy thừa `x^n`, Fibonacci, dãy truy hồi `x_n = x_{n-1} + (n-1)*x_{n-2}`.
>   - Tính tổng chữ số bằng đệ quy: `if (n < 10) return n; return n % 10 + tongCS(n / 10);`.
>   - Chuyển hệ cơ số 10 sang cơ số `b` (`Bài 3_7`).

## 2. Lỗi thường gặp
- Quên khai báo prototype trước khi gọi hàm.
- Quên `return` ở hàm khác `void` (hoặc hàm `void` nhưng lại viết `return x;`).
- Đệ quy thiếu điều kiện dừng gây tràn bộ nhớ (Stack Overflow).
- Nhầm lẫn `int &n` và `int n` ở hàm nhập (`taomang(int &n, int a[])` bắt buộc có `&`).
