# Chương 4: Mảng (1 chiều & 2 chiều)

- **Bài giảng:** [Chương 4.pdf](./Chương%204.pdf)
- **Đề bài tập:** [Bai_tap.txt](./Bai_tap.txt) (`Bài 4_1.cpp` – `Bài 4_12.cpp`)

## 1. Kiến thức trọng tâm
- **Mảng 1 chiều (`a[MAX]`):** chỉ số từ `0` đến `n - 1`.
- **Mảng 2 chiều (`a[MAX][MAX]`):** `m` dòng (`0..m-1`), `n` cột (`0..n-1`). Lưu ý `a[i][j]` là phần tử dòng `i`, cột `j`.
- Các thao tác chuẩn: nhập/xuất, tìm min/max (và **vị trí** min/max), đếm/tính tổng theo điều kiện, sắp xếp (Interchange Sort / Bubble Sort), thêm/xóa phần tử.

> [!IMPORTANT]
> **🔥 TRỌNG TÂM THI CỬ (Chắc chắn có 1 câu Mảng 2 chiều - 2.0 điểm trong đề Cuối kỳ)**
> 1. **Mảng 2 chiều (Cực kỳ hay ra thi):**
>    - Tính tổng toàn mảng, **tổng từng dòng** (vòng `i` ngoài, `j` trong, reset `tong = 0` ở đầu mỗi dòng `i`), **tổng từng cột** (vòng `j` ngoài, `i` trong, reset `tong = 0` ở đầu mỗi cột `j`) (`Đề KHDL K23 - Câu 2`).
>    - Tìm Min/Max trên từng dòng / từng cột, phần tử **yên ngựa** (`Bài 4_11`).
>    - Đếm số nguyên tố / Armstrong trong ma trận (`Bài 4_7`).
>    - Sắp xếp tăng dần trên từng dòng / từng cột (`Bài 4_9`), tổng/tích 2 ma trận (`Bài 4_10`).
> 2. **Mảng 1 chiều (Hay ra ở Giữa kỳ & Câu 1-2):**
>    - Đếm/tính tổng các số thỏa điều kiện (nguyên tố, chính phương, hoàn chỉnh).
>    - Tìm vị trí phần tử nhỏ nhất/lớn nhất thỏa điều kiện (nhớ kiểm tra trường hợp **không tồn tại** trả về `-1`).
>    - Xóa phần tử tại vị trí `k` (dịch trái từ `k` đến `n - 2`, giảm `n--`; nếu xóa nhiều phần tử trong vòng `for` thì phải lùi `i--` hoặc không tăng `i` khi xóa!).

## 2. Lỗi thường gặp
- Truy cập `a[n]` (tràn chỉ số, chỉ được từ `0` đến `n - 1`).
- Khi truyền mảng 2 chiều vào hàm: **bắt buộc ghi rõ số cột tối đa**, VD: `void xuat(int m, int n, int a[][MAX])`.
- Khi xóa phần tử trong mảng đang duyệt: tăng `i++` bình thường sẽ **bỏ sót** phần tử vừa dồn lên!
