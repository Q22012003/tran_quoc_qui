#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


void function()
{
	static int x = 0;
	printf("x: %d", ++x); // in gia tri 0 roi moi cong
	// ++x cong truoc roi sau do in
	// bien x sau khi xai xong roi bi huy
	// bien static se bien gia tri x thanh bien toan cuc va khong bi giai phong nhu bien stack 
	//bien x chi ham function xai duoc khong goi duoc trong ham main nhung luu chung vung nho voi bien toan cuc 
	// 
}


void main()
{
	function();
	function();
	function();
}