# Chương 7: Kỹ thuật lập trình chuỗi ký tự

- **Bài giảng:** [Chương 7.pdf](./Chương%207.pdf)
- **Đề bài tập:** [Bai_tap.txt](./Bai_tap.txt) (`Bài 7_1.cpp` – `Bài 7_6.cpp`)

## 1. Kiến thức trọng tâm
- Chuỗi kiểu C (`char s[256];`): kết thúc bởi ký tự `'\0'`.
- Nhập chuỗi có khoảng trắng: `cin.getline(s, 256);` (nhớ `cin.ignore()` nếu trước đó vừa nhập số).
- Các hàm trong `<cstring>`: `strlen(s)`, `strcpy(dest, src)`, `strcat(s1, s2)`, `strcmp(s1, s2)`, `strstr(s, x)`.
- Các hàm kiểm tra/chuyển ký tự trong `<cctype>`: `isalpha(c)`, `isdigit(c)`, `islower(c)`, `isupper(c)`, `tolower(c)`, `toupper(c)`.

> [!IMPORTANT]
> **🔥 TRỌNG TÂM THI CỬ (Chắc chắn có Câu 4 đề Cuối kỳ - 2.0 điểm)**
> 1. **Xử lý từ trong chuỗi (`Bài 7_2`, `Đề KHDL K23 - Câu 4`):**
>    - **Đếm số ký tự mỗi từ / Đếm số từ / Tìm từ dài nhất:** duyệt từ `0` đến `strlen(s)`, gặp khoảng trắng hoặc `'\0'` thì kết thúc 1 từ.
>    - **Tách từ bên phải nhất:** duyệt ngược từ `strlen(s) - 1` về `0` đến khi gặp `' '` (hoặc hết chuỗi), rồi in từ vị trí `i + 1` đến cuối!
> 2. **Chuẩn hóa chuỗi (`Bài 7_5`):**
>    - Xóa khoảng trắng đầu chuỗi, cuối chuỗi, và rút gọn nhiều khoảng trắng liên tiếp ở giữa thành 1 khoảng trắng.
> 3. **Tìm kiếm, đếm tần suất, chèn/xóa chuỗi con (`Bài 7_1`, `7_3`, `7_4`):**
>    - Đếm tần suất ký tự dùng mảng đánh dấu `int cnt[256] = {0};` (hoặc `cnt[c - 'a']`).
>    - Tìm vị trí xuất hiện đầu tiên của `x` trong `s` (trả về `-1` nếu không có).

## 2. Lỗi thường gặp
- Dùng `cin >> s;` để nhập chuỗi có khoảng trắng (nó sẽ dừng ngay ở khoảng trắng đầu tiên!).
- Quên ký tự kết thúc chuỗi `'\0'` khi tự xây dựng/cắt/nối chuỗi bằng tay.
- So sánh 2 chuỗi C bằng `s1 == s2` (sai! phải dùng `strcmp(s1, s2) == 0`).
