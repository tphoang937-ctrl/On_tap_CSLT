# Chương 8: Kỹ thuật lập trình với file

- **Bài giảng:** [Chương 8.pdf](./Chương%208.pdf)
- **Đề bài tập:** [Bai_tap.txt](./Bai_tap.txt) (`Bài 8_1.cpp` – `Bài 8_9.cpp`)
- **File dữ liệu mẫu đã tạo sẵn:** `NUM.INP`, `table.inp`, `table.txt`, `str_input.txt`, `str.txt`, `input.txt`

## 1. Kiến thức trọng tâm
- Thư viện `#include <fstream>`.
- Đọc file: `ifstream fin("ten_file.inp");` -> kiểm tra `if (!fin.is_open())` hoặc `if (!fin)`.
- Ghi file: `ofstream fout("ten_file.out");`
- Đóng file sau khi dùng: `fin.close(); fout.close();`.
- Đọc số: `fin >> n;` (tự bỏ qua khoảng trắng và xuống dòng).
- Đọc từng dòng chuỗi có khoảng trắng: `while (fin.getline(s, 512))` (nhớ xử lý ký tự `\r` nếu file tạo trên Windows).

> [!IMPORTANT]
> **🔥 TRỌNG TÂM THI CỬ (Chắc chắn có Câu 5 đề Cuối kỳ - 2.0 điểm)**
> 1. **Đọc/ghi dãy số 1 chiều (`Bài 8_1`, `8_2`, `Đề KHDL K23 - Câu 5`):**
>    - File vào: dòng 1 là `n`, dòng 2 là `n` số nguyên.
>    - Yêu cầu hay gặp: tìm min/max, đếm nguyên tố, sắp xếp tăng dần, tìm trung vị `a[n/2]`, rồi ghi kết quả đúng định dạng từng dòng ra file `.out` / `.txt`.
> 2. **Đọc/ghi mảng 2 chiều (`Bài 8_3` – `8_6`):**
>    - File vào: dòng 1 là `m, n`, `m` dòng sau mỗi dòng `n` số.
>    - Kết hợp với các bài toán Chương 4 (đếm nguyên tố, max dòng/cột, tổng dòng/cột, xuất vị trí max, làm tròn `fixed << setprecision(2)`).
> 3. **Đọc/ghi nhiều dòng chuỗi (`Bài 8_7` – `8_9`):**
>    - Dùng `fin.getline(s, 512)` đọc từng dòng đến hết file (`EOF`), tách từ bên phải, tìm dòng dài nhất, thống kê tần suất ký tự (không tính khoảng trắng).

## 2. Lỗi thường gặp
- Ghi **sai tên file** so với đề bài yêu cầu (VD: đề ghi `NUM.INP` / `table.inp` nhưng code gõ sai hoa/thường — trên macOS/Linux có thể lỗi không mở được file!).
- Đọc hết file mới thấy thừa 1 dòng rỗng ở cuối khi dùng `while (!fin.eof())` -> **nên dùng** `while (fin.getline(s, 512))` hoặc `while (fin >> x)`.
- Quên `fout.close();` trước khi kết thúc chương trình làm file output bị rỗng.
