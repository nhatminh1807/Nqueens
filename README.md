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
[Thư mục src](./src)

---

## 4. Ví dụ minh hoạ
### Ví dụ 1
**Input:** N=-2

**Output:** No Solution!

**Giải thích:**  
Khi bạn nhập N=-2, chương trình sẽ phát hiện giá trị nhập không hợp lệ và xử lý như sau:
1.	Chương trình đọc N = -2 và kiểm tra điều kiện (int)N != N. Vì N là số nguyên, điều kiện này là sai.
2.	Tiếp theo, chương trình kiểm tra N <= 3 && N != 1. Vì N = -2 nhỏ hơn 3 và không bằng 1, điều kiện này đúng.
3.	Chương trình in ra "No solution!" vì không thể tìm giải pháp cho giá trị âm hoặc nhỏ của N.


### Ví dụ 2
**Input:**  N=2.5

**Output:** Input error!

**Giải thích:**  
Khi bạn nhập N=2.5, chương trình sẽ phát hiện giá trị nhập không hợp lệ và xử lý như sau:
1.	Chương trình đọc N = 2.5 và kiểm tra điều kiện (int)N != N. Vì N là số thực và không phải số nguyên, điều kiện này đúng.
2.	Chương trình in ra "Input error!" vì N phải là giá trị nguyên để giải quyết bài toán queens.


### Ví dụ 3
**Input:**  N=5  

**Output:**  
(Mô tả output)  
1 0 0 0 0   1 0 0 0 0   0 1 0 0 0   0 1 0 0 0   0 0 1 0 0  
0 0 1 0 0   0 0 0 1 0   0 0 0 0 1   0 0 1 0 0   0 0 0 0 1  
0 0 0 0 1   0 1 0 0 0   1 0 0 0 0   0 0 1 0 0   0 1 0 0 0  
0 1 0 0 0   0 0 0 0 1   0 0 1 0 0   1 0 0 0 0   0 0 0 1 0  
0 0 0 1 0   0 0 1 0 0   0 0 0 0 1   0 0 0 1 0   0 0 0 0 1  

0 0 1 0 0   0 0 1 0 0   0 0 0 1 0   0 0 0 1 0   0 0 0 0 1  
1 0 0 0 0   0 0 0 0 1   1 0 0 0 0   0 1 0 0 0   0 1 0 0 0  
0 0 0 1 0   0 1 0 0 0   0 0 1 0 0   0 0 0 0 1   0 0 0 1 0  
0 0 0 0 1   0 0 1 0 0   1 0 0 0 0   0 0 0 1 0   0 1 0 0 0  
0 1 0 0 0   1 0 0 0 0   0 0 1 0 0   0 1 0 0 0   0 0 0 1 0  


**Giải thích:**  
1.	Chương trình đọc giá trị N = 5.
2.	Kiểm tra điều kiện (int)N != N, điều kiện này là sai vì N là số nguyên.
3.	Kiểm tra điều kiện N <= 3 && N != 1, điều kiện này cũng sai vì N = 5.
4.	Gọi hàm backtrack(1) để bắt đầu tìm kiếm các giải pháp.
Vòng lặp for (int col = 1; col <= N; col++) cố gắng đặt quân hậu vào từng cột của hàng row. Nó kiểm tra tất cả các cột từ 1 đến N.
Câu lệnh qIndex[row] = col đặt quân hậu vào cột col của hàng row.
Hàm checkRow(row) được gọi để kiểm tra xem việc đặt quân hậu vào hàng row có hợp lệ hay không. Hàm này kiểm tra xem có quân hậu nào trên cùng một cột hoặc cùng đường chéo không.
Nếu việc đặt quân hậu hợp lệ (if (checkRow(row))):
•	Nếu chưa đặt hết quân hậu (row < N), hàm backtrack gọi đệ quy với hàng tiếp theo (backtrack(row + 1)).
•	Nếu đã đặt đủ quân hậu (row == N), hàm printChessBoard sẽ được gọi để in ra bàn cờ hiện tại.
Nếu việc đặt quân hậu không hợp lệ, vòng lặp sẽ tiếp tục với cột tiếp theo (col++), thử đặt quân hậu ở vị trí khác trên cùng hàng.
Khi đạt đến hàng 5 và đặt thành công quân hậu ở một vị trí hợp lệ, hàm printChessBoard sẽ được gọi để in ra bàn cờ hiện tại.
Nếu không tìm thấy giải pháp hợp lệ hoặc sau khi đã in ra một giải pháp, chương trình sẽ thử các vị trí khác trên hàng trước đó.



---

## 5. Link video báo cáo
[nhóm 4](https://drive.google.com/drive/folders/1Glk_VXuDn6Ve8kYICEHiUGFqEMfVGXFp)


---

## 6. Link source code
[Thư mục src](./src)

