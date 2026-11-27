# Chương 2: Cấu trúc lặp

- **Bài giảng:** [Chương 2.pdf](./Chương%202.pdf)
- **Đề bài tập:** [Bai_tap.txt](./Bai_tap.txt) (`Bài 2_1.cpp` – `Bài 2_8.cpp`)

## 1. Kiến thức trọng tâm
- 3 vòng lặp: `for` (biết trước số lần lặp), `while` (lặp theo điều kiện), `do ... while` (kiểm tra điều kiện nhập hợp lệ, chạy ít nhất 1 lần).
- Lệnh điều khiển vòng lặp: `break` (thoát hẳn vòng lặp), `continue` (bỏ qua lượt hiện tại).
- Kỹ thuật **cộng dồn** (`tong += ...`), **nhân dồn** (`tich *= ...`), **đếm** (`dem++`), **cờ hiệu** (`bool flag`).

> [!IMPORTANT]
> **🔥 TRỌNG TÂM THI CỬ (Xuất hiện gần như 100% trong cả đề Giữa kỳ & Cuối kỳ)**
> 1. **Kiểm tra số đặc biệt (`Bài 2_1`, `Bài 2_6`):**
>    - **Số nguyên tố:** `n >= 2`, duyệt `i` từ `2` đến `i * i <= n` (nhớ dấu `<=`, thiếu `=` sẽ sai với `4, 9, 25`!).
>    - **Số chính phương:** `n >= 0`, `int k = sqrt(n);` kiểm tra `k * k == n`.
>    - **Số hoàn chỉnh (hoàn hảo):** `n > 1`, tổng các ước thực sự (`< n`) bằng `n` (VD: `6, 28, 496`).
>    - **Tách chữ số / Đảo ngược / Đối xứng / Armstrong:**
>      ```cpp
>      while (n > 0) {
>          int cs = n % 10; // lấy chữ số cuối
>          n /= 10;         // bỏ chữ số cuối
>      }
>      ```
>      *(Nhớ lưu lại bản sao `int temp = n;` trước khi `while` nếu cuối hàm còn phải so sánh với `n` ban đầu!)*
> 2. **Tính tổng chuỗi có quy luật (`Bài 2_2`, `Bài 2_3`):**
>    - Tận dụng lại giá trị bước trước (`mau += i`, `gt *= i`, `dau = -dau`, `tu *= x`) để tránh vòng lặp lồng nhau không cần thiết.
> 3. **Sinh số ngẫu nhiên (`Bài 2_1c`):**
>    - `srand(time(0));` gọi 1 lần trong `main()`, dùng `rand() % (max - min + 1) + min`.

## 2. Lỗi thường gặp
- Khởi tạo `tong = 0` nhưng lại khởi tạo `tich = 0` (phải là `tich = 1`!).
- Quên ép kiểu `1.0 / i` khi tính tổng phân số (`1 / i` sẽ luôn bằng `0` với `i > 1`).
- Vòng lặp vô tận do quên cập nhật biến đếm trong `while`.
