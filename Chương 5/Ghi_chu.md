# Chương 5: Kiểu dữ liệu có cấu trúc (`struct`)

- **Bài giảng:** [Chương 5.pdf](./Chương%205.pdf)
- **Đề bài tập:** [Bai_tap.txt](./Bai_tap.txt) (`Bài 5_1.cpp` – `Bài 5_7.cpp`)

## 1. Kiến thức trọng tâm
- Khai báo `struct TenCauTruc { ... };` (nhớ dấu `;` cuối `struct`!).
- Truy cập thành phần bằng toán tử chấm `.` (VD: `ps.tu`, `sv.diemTB`).
- Mảng các `struct` (VD: `PhanSo a[100];`, `ThiSinh ds[100];`).
- Lồng `cin.ignore()` trước `cin.getline(...)` khi nhập chuỗi sau khi vừa nhập số!

> [!IMPORTANT]
> **🔥 TRỌNG TÂM THI CỬ (Thường là Câu 3 đề Cuối kỳ - 2.0 điểm)**
> 1. **Struct Hình học / Điểm / Hình chữ nhật (`Bài 5_2`, `5_3`, `Đề KHDL K23 - Câu 3`):**
>    - `struct Diem { int x, y; };` -> tính khoảng cách `sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2))`, kiểm tra góc phần tư.
>    - `struct Rectangle { int length, width; };` -> nhập mảng `n` hình, tính tổng diện tích / tìm hình diện tích lớn nhất.
> 2. **Struct Phân số (`Bài 5_1`, `5_5`):**
>    - Rút gọn phân số bằng `UCLN(tu, mau)`.
>    - So sánh 2 phân số `a, b`: dùng nhân chéo `a.tu * b.mau > b.tu * a.mau` (với mẫu dương) để tránh sai số chia thực.
>    - Cộng 2 phân số: `(a.tu * b.mau + b.tu * a.mau) / (a.mau * b.mau)` rồi rút gọn.
> 3. **Struct Sinh viên / Thí sinh (`Bài 5_4`):**
>    - Lọc theo điều kiện (điểm < 5, tổng >= 12), tìm thí sinh điểm tổng cao nhất, **sắp xếp danh sách** theo điểm giảm dần (hoán vị cả biến `struct`: `ThiSinh tmp = a[i]; a[i] = a[j]; a[j] = tmp;`).

## 2. Lỗi thường gặp
- Quên dấu `;` sau dấu `}` đóng `struct`.
- Dùng `cin >>` nhập số xong rồi gọi `cin.getline()` nhập họ tên ngay sau đó mà **quên `cin.ignore()`** -> bị trôi lệnh nhập tên!
- So sánh phân số bằng `a.tu / a.mau` (chia nguyên mất phần thập phân).
