﻿#include <stdio.h>
#include<stdlib.h>
//
typedef struct node
{
	int value;
	struct node* previous_node; // ✅ Đã sửa
} node_t;


typedef struct
{
	node_t* last_node;
	int len;
}linked_list_t;


//Xây dựng thư viện (Linked_List.c, Lined_List.h) để chưa đối tượng là int, với các hàm sao:
//1. Create: tạo ra đối tượng linked list
//- input : linked_list_t * -địa chỉ đối tượng linked_list được tạo
//- output : void

//2. GetLen: lấy số lượng node trong linked lisst
//- input : linked_list_t * địa chỉ đối tượng linked_list cần GetLen
//- Output : int
int lengthnode(linked_list_t* list)
{
	return list->len;
}
// hàm khởi tạo danh sách liên kết 
//input: con trỏ linked_list_t* list
//output: void
void create(linked_list_t* list)
{
	list->last_node = NULL;
	list->len = 0;
}

//hàm thêm 1 node vào cuối danh sách
//input: linked_list_t*list , int value
//output: void
void Add(linked_list_t* list, int value)
{

	// cấp phát động cho node mới
	node_t* new_node = (node_t*)malloc(sizeof(node_t));


	// gán giá trị cho node mới 
	new_node->value = value;
	new_node->previous_node = list->last_node;

	// cập nhập last_node của danh sách
	list->last_node = new_node;
	list->len++;
}
//Insert: chèn node vào lined list ở vị trí index
//- input :
	//*linked_list_t * địa của đối tượng linked lisst, mà ta sẽ insert đối tượng vào
	//* int value : giá trị của node.
	//* int index : vị trí node được insert vào.
	//- Output : void
	//- Gợi ý : giống như add chúng ta cũng cần cấp phát động, và chúng ta cần update lại previous_node của node trước nó
void Insert(linked_list_t* list, int value, int index)
{
	//kiểm tra hợp lệ của index
	if (index<0 || index>list->len)
	{
		printf("index hong hop le!!!");
	}
	//tạo node mới
	node_t* new_node = (node_t*)malloc(sizeof(node_t));
	new_node->value = value;

	//trường hợp chèn vào đầu danh sách index=0
	if (index == 0)
	{
		new_node->previous_node = list->last_node;
		list->last_node = new_node;

	}
	else
	{
		// duyệt qua danh sách đến vị trí cần chèn 
		 // Duyệt danh sách để tìm vị trí cần chèn
		node_t* temp = list->last_node;
		for (int i = 0; i < index - 1; i++)
		{
			temp = temp->previous_node;
		}

		// Cập nhật liên kết
		new_node->previous_node = temp->previous_node; // biến temp lúc này đang là 300 ví dụ ta chèn số 777 thì nó sẽ trỏ previous tới 300
		temp->previous_node = new_node; // biến temp lúc này là 200 trỏ tơí 777
	}

	list->len++;
}

// hàm in danh sách liên kết
//input: linked_list_t* list
//output: void
void printfnode(linked_list_t* list)
{
	node_t* temp = list->last_node;
	while (temp != NULL)
	{
		printf("%d  ", temp->value);
		temp = temp->previous_node;
	}
}

// hàm giải phóng bộ nhớ
void freespace(linked_list_t* list)
{
	node_t* temp = list->last_node;
	while (temp != NULL)
	{
		node_t* prev = temp->previous_node;
		free(temp);
		temp = prev;
	}
	list->last_node = NULL;
	list->len = 0;
}

//Remove: xoá một node ở vị trí cuối cùng trong linked list
// input : linked_list_t * địa chỉ của đối tượng linked list, mà ta muốn xoá node ở trong nos
//- output : void
//- gợi ý : giải phóng vùng nhớ(sử dụng hàm free) của node cuối cùng.
void Remove(linked_list_t* list) {
	if (list->last_node == NULL) {
		printf("Danh sách rỗng, không thể xóa!\n");
		return;
	}

	// Trường hợp danh sách chỉ có một node
	if (list->last_node->previous_node == NULL) {
		free(list->last_node);
		list->last_node = NULL;
	}
	else {
		// Duyệt đến node kề cuối (node áp chót)
		//Lần 1: temp = 30, kiểm tra 30->previous_node->previous_node != NULL(tức là 20->previous_node != NULL ✅), cập nhật temp = 20.
		//Lần 2 : temp = 20, kiểm tra 20->previous_node->previous_node != NULL(tức là 10->previous_node == NULL ❌), dừng vòng lặp.
		node_t* temp = list->last_node;
		while (temp->previous_node->previous_node != NULL) {
			temp = temp->previous_node;
		}

		// Giải phóng bộ nhớ của node cuối
		free(temp->previous_node);
		temp->previous_node = NULL;
	}

	list->len--;
}
//RemoveIndex: xoá một node ở vị trí index
//- Input :
//*linked_list_t * : địa chỉ của linked_líst, mà ta muốn xoá node trong nos
//* int index : vị trí của node muốn xoá
void RemoveIndex(linked_list_t* list, int index) {
	// Kiểm tra nếu index không hợp lệ
	if (index < 0 || index >= list->len) {
		printf("Index không hợp lệ!\n");
		return;
	}

	// Trường hợp đặc biệt: Xóa node đầu danh sách (tức là `last_node`)
	if (index == 0) {
		node_t* temp = list->last_node;
		list->last_node = list->last_node->previous_node;  // Cập nhật last_node
		free(temp);  // Giải phóng node cũ
		list->len--;
		return;
	}

	// Duyệt danh sách để tìm node trước node cần xóa
	node_t* temp = list->last_node;
	for (int i = 0; i < index - 1; i++) {
		temp = temp->previous_node;
	}

	// Node cần xóa là `temp->previous_node`
	node_t* node_to_delete = temp->previous_node;
	temp->previous_node = node_to_delete->previous_node;  // Bỏ qua node bị xóa

	free(node_to_delete);  // Giải phóng bộ nhớ
	list->len--;
}

void RemoveIndex(linked_list_t* list, int index)
{
	//kiểm tra index có hợp lệ hay không
	if (index<0 || index>list->len)
	{
		printf("khong hop le!!!!");
	}
	//Trường hợp đặc biệt : Xóa đầu danh sách ( tức là last node)
	if (index == 0) {
		node_t* temp = list->last_node;
		list->last_node = list->last_node->previous_node;  // Cập nhật last_node
		free(temp);  // Giải phóng node cũ
		list->len--;
		return;

		// Duyệt danh sách để tìm node trước node cần xóa
		node_t* temp = list->last_node;
		for (int i = 0; i < index - 1; i++) {
			temp = temp->previous_node;
		}

		// Node cần xóa là `temp->previous_node`
		node_t* node_to_delete = temp->previous_node;
		temp->previous_node = node_to_delete->previous_node;  // Bỏ qua node bị xóa

		free(node_to_delete);  // Giải phóng bộ nhớ
		list->len--;

	}


}
int main()
{
	linked_list_t listt;
	create(&listt);
	Add(&listt, 10);
	Add(&listt, 50);
	Add(&listt, 1000);
	Insert(&listt, 777, 2);
	printfnode(&listt);
	int lenght = lengthnode(&listt);
	printf("\nchieu dai cua node la: %d", lenght);
	freespace(&listt);
	return 0;


}