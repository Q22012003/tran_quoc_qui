# Pass by value and Pass by Reference

__1.Pass by value__

 khi sử dụng pass by value (truyền theo giá trị), mỗi biến được sao chép vào bộ nhớ của hàm con, và bộ nhớ cho các bản sao này sẽ được cấp phát. Điều này có thể tốn thêm bộ nhớ, đặc biệt nếu bạn truyền các cấu trúc dữ liệu lớn (như mảng hoặc đối tượng) vào hàm.

 Cụ thể:

_ Khi bạn truyền một giá trị vào hàm bằng pass by value, một bản sao của giá trị đó sẽ được tạo ra trong bộ nhớ cục bộ của hàm.

_ Ví dụ trong trường hợp của bạn với các biến kiểu int, bộ nhớ cho các biến a và b sẽ được cấp phát trong hàm swap để lưu trữ giá trị sao chép của a và b từ hàm main.

__2.Pass by Reference__

_ Pass by reference không yêu cầu sao chép giá trị, vì bạn chỉ truyền địa chỉ bộ nhớ (con trỏ) của biến, thay vì sao chép giá trị.

_ Điều này giúp tiết kiệm bộ nhớ và có thể làm cho chương trình hiệu quả hơn, đặc biệt khi làm việc với dữ liệu lớn.
