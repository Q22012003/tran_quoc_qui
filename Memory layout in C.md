# Memory layout in C
---
![hinh anh](https://media.geeksforgeeks.org/wp-content/uploads/20250122155858092295/Memory-Layout-of-C-Program.webp)

## Text segment
_ Chứa mã máy (machine code) của chương trình — chính là phần được tạo ra từ file .c sau khi biên dịch.

_ Là vùng chỉ đọc, không thể thay đổi trong lúc chương trình chạy → tránh bị ghi đè mã lệnh.

## Data segment (initialized data segment)
_ Chứa các biến global hoặc static được khởi tạo giá trị khác 0 trước khi chương trình chạy.

## BSS segment (Block started by symbol)
_Chứa biến toàn cục hoặc static chưa khởi tạo (hoặc khởi tạo bằng 0).

_Hệ điều hành sẽ cấp phát và tự động khởi tạo bằng 0.

## Heap segment
_Là vùng bộ nhớ được cấp phát động tại runtime bằng malloc(), calloc(), realloc() trong C.

_Quản lý bởi lập trình viên — phải free() sau khi dùng.

_Phát triển từ dưới lên trên trong vùng địa chỉ bộ nhớ.

## Stack segmnet
_Chứa các biến cục bộ và thông tin lời gọi hàm (như địa chỉ trả về, tham số hàm, biến tạm).

_Phát triển từ trên xuống dưới.

_Tự động giải phóng khi thoát khỏi hàm.


