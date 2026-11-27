# Chương 6: Kỹ thuật lập trình con trỏ

- **Bài giảng:** [Chương 6.pdf](./Chương%206.pdf)
- **Đề bài tập:** [Bai_tap.txt](./Bai_tap.txt) (`Bài 6_1.cpp` – `Bài 6_5.cpp`)

## 1. Kiến thức trọng tâm
- Khai báo con trỏ `int *p;`, toán tử lấy địa chỉ `&x`, toán tử giải tham chiếu `*p`.
- Cấp phát động trong C++: `int *a = new int[n];` và giải phóng `delete[] a;` (tránh rò rỉ bộ nhớ).
- Truy cập thành phần `struct` qua con trỏ bằng toán tử mũi tên `->` (VD: `p->data`, `p->next`).
- **Danh sách liên kết đơn (Linked List):** `struct Node { int data; Node *next; };`.
- **Cây nhị phân tìm kiếm (BST):** `struct Node { int data; Node *left, *right; };`.

> [!IMPORTANT]
> **🔥 TRỌNG TÂM THI CỬ (Phân loại điểm cao / Kỹ thuật lập trình)**
> 1. **Mảng cấp phát động (`Bài 6_1`, `6_2`):**
>    - Truyền con trỏ tham chiếu `int *&a` nếu hàm có cấp phát mới / thay đổi kích thước mảng (chèn, xóa).
> 2. **Danh sách liên kết đơn (`Bài 6_4`):**
>    - Duyệt danh sách: `for (Node *p = head; p != NULL; p = p->next)` -> tính tổng, đếm nguyên tố, tìm max.
>    - Thêm đầu / thêm cuối / xóa đầu (`Node *tmp = head; head = head->next; delete tmp;`).
>    - Sắp xếp danh sách liên kết, tách thành 2 danh sách chẵn/lẻ.
> 3. **Cây nhị phân tìm kiếm (`Bài 6_5`):**
>    - Duyệt cây đệ quy (NLR, LNR, LRN), đếm số nút, đếm nút lá (`left == NULL && right == NULL`), tính chiều cao cây (`1 + max(cao(left), cao(right))`), tìm kiếm `x`.

## 2. Lỗi thường gặp
- Giải tham chiếu con trỏ chưa khởi tạo hoặc đang bằng `NULL` (`Segmentation fault`).
- Quên cập nhật con trỏ `prev->next` trước khi `delete` một nút ở giữa danh sách liên kết.
- Quên `delete[]` sau khi dùng `new[]`.
