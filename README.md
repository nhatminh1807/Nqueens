# Báo cáo Bài tập lớn - Nhóm 4

## 1. Thông tin nhóm
| STT | Họ và tên | MSSV | Vai trò |
|---|---|---|---|
| 1 | Bùi Anh Tuấn | 24022839 | Nhóm trưởng |
| 2 | Nguyễn Nhật Minh | 24022818 | Thành viên |
| 3 | Nguyễn Minh Hùng | 24022794 | Thành viên |
| 4 | Hoàng Trung Hiếu | 24022789 | Thành viên |
| 5 | Hồ Lê Tuấn Đạt | 23021395 | Thành viên |

---

## 2. Thông tin bài tập
- **Tên bài toán**: Giải quyết bài toán N-Queens


---

## 3. Hướng giải quyết bài toán

### a. Phân tích bài toán
- Đặt N quân hậu trên bàn cờ NxN sao cho không quân hậu nào ăn nhau.
- Quân hậu có thể tấn công theo hàng, cột và đường chéo.
- Mục tiêu: Tìm cách sắp xếp hợp lệ.

### b. Thuật toán/Hướng tiếp cận
- Duyệt từng dòng, mỗi dòng đặt 1 quân hậu.
- Đệ quy xuống dòng tiếp theo.
- Kiểm tra tính hợp lệ trước khi đặt quân hậu.
- Nếu đặt thành công tất cả N quân hậu thì tìm được một nghiệm.
### c. Ưu điểm và hạn chế
Ưu điểm:

•Dùng quay lui để kiểm tra tất cả các cách đặt quân hậu hợp lệ.
•Hàm check() đảm bảo rằng mỗi quân hậu mới đặt không bị tấn công bởi quân hậu đã đặt trước đó.
•Code đơn giản, sử dụng đệ quy để kiểm tra từng vị trí hợp lệ.
•Không sử dụng thuật toán quá phức tạp, dễ mở rộng cho các giá trị n lớn hơn.
•Không cần sử dụng thêm mảng đánh dấu:
 + Một số giải pháp dùng mảng col[], diag1[], diag2[] để kiểm tra nhanh hơn, nhưng ở đây chỉ sử dụng một mảng x[], giúp tiết kiệm bộ nhớ.

Nhược điểm:

• Hiệu suất không tối ưu:

• Do mỗi lần đặt quân hậu, chương trình kiểm tra lại toàn bộ danh sách quân hậu đã đặt, nên độ phức tạp gần với O(n!).
• Với n lớn, chương trình sẽ chạy chậm do phải thử nhiều nhánh không cần thiết.
• Không sử dụng kỹ thuật tối ưu hóa:
+  Có thể cải thiện bằng cách dùng bitmask hoặc mảng đánh dấu (col[], diag1[], diag2[]) để giảm thời gian kiểm tra va chạm.
• Duyệt toàn bộ lời giải:
 + Nếu chỉ cần tìm một lời giải hợp lệ thay vì liệt kê tất cả, thì chương trình không dừng lại ngay khi tìm được lời giải đầu tiên.
• Cách in kết quả tốn bộ nhớ:
 + Xuất ra toàn bộ bàn cờ dưới dạng n x n sẽ tốn nhiều tài nguyên, nhất là với n lớn. Thay vào đó, chỉ cần in danh sách x[i] là đủ.
---

## 4. Ví dụ minh hoạ
### Ví dụ 1
**Input:**  
(Mô tả input)  
**Output:**  
(Mô tả output)  
**Giải thích:**  
(Mô tả cách giải)

### Ví dụ 2
**Input:**  
(Mô tả input)  
**Output:**  
(Mô tả output)  
**Giải thích:**  
(Mô tả cách giải)

### Ví dụ 3
**Input:**  
(Mô tả input)  
**Output:**  
(Mô tả output)  
**Giải thích:**  
(Mô tả cách giải)

---

## 5. Link video báo cáo
[https://drive.google.com/drive/folders/1i8Z4qMO5wOgwzqX7AmqtRVXXZ5g3GnzM](#)

---

## 6. Link source code
[Thư mục src](./src)

