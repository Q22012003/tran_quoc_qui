# "Call by Value and Call by Reference"

__1/Call by Value__

1. Bạn chỉ cần giá trị của biến, không cần phải thay đổi nó ngoài phạm vi hàm.

2. Thích hợp khi không muốn ảnh hưởng đến các biến gốc, chỉ làm việc với bản sao của chúng.

3. An toàn hơn trong những trường hợp bạn không muốn vô tình thay đổi giá trị của các biến gốc.

__2/Call by Reference__

1. Bạn muốn thay đổi giá trị của biến ngay trong hàm và phản ánh những thay đổi này bên ngoài hàm.

2. Thường được dùng khi cần tối ưu bộ nhớ (vì không sao chép dữ liệu lớn) hoặc khi muốn sửa đổi trực tiếp các giá trị
