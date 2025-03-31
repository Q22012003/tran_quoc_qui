# Danh sách liên kết (Linked List) trong C 

**Định nghĩa**: là một cấu trúc dữ liệu dùng để lưu trữ nhiều phần tử theo dạng chuỗi liên kết. Mỗi phần tử trong danh sách gọi là nút (node), gồm hai phần chính:

*Dữ liệu* (data)*: Chứa thông tin cần lưu trữ.

*Con trỏ* (pointer)*: Trỏ đến nút tiếp theo trong danh sách.

**Ưu điểm**: Không cần kích thước cố định, dễ dàng chèn/xóa phần tử.

**Nhược điểm**: Tốn bộ nhớ do dùng con trỏ, truy cập phần tử không nhanh bằng mảng.

* __Tính chất__ :
  
  1 DSLK có thể thu hẹp hoặc mở rộng 1 cách linh hoạt
  
  2 Các phần tử trong DSLK được gọi là NODE

  3 Phần tử cuối cùng trong danh sách liên kết trỏ vào NULL

  4 Không lãng phí bộ nhớ nhưng cần thêm bộ nhớ để lưu phần con trỏ

  5 Đây là dữ liệu được cấp phát động nên khi còn bộ nhớ sẽ thêm vào phần tử trong DSLK







# __Có 3 dạng danh sách liên kết__

1. __Danh sách liên kết đơn__ (Singly Linked List): Mỗi nút chỉ trỏ đến nút kế tiếp.
![hình ảnh](https://codeforwin.org/wp-content/uploads/2015/09/Linked-list-nodes.png)


2. __Danh sách liên kết đôi__ (Doubly Linked List): Mỗi nút trỏ đến cả nút trước và nút sau.

![Hình ảnh 2](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQ6IAPFb1O5fe5IHWF5WRYyFo0EwPm0-Pex3w&s)



3. __Danh sách liên kết vòng__ Circular Linked List): Nút cuối trỏ lại nút đầu, tạo thành vòng lặp.

![Hình ảnh 3](https://lh3.googleusercontent.com/proxy/feMkkFM5Tw8eDB_N1BSbsaaWr-xTj0r58ff_vxbfMIfeduFOIg7e13P1M50MeGkwW7jVZnMqBXVOuUWTDxeWayn_Tx1vWWJvPMzk7Mb-oMVvuTfpovnLIND2AOYG2BDfhtW74SQt2zown8dP)

**Cách để khai báo 1 node**

 struct Node{

 int data // dữ liệu của node

 struct* Node // địa chỉ tiếp theo của node trong danh sách liên kết

 };

 typedef struct Node*listNode;

















