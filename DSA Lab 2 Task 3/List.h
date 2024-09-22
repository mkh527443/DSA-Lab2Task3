#pragma once
#include<iostream>
#include"Node.h"
using  namespace std;
class List
{
private:
	Node* head;
public:
	List();
	bool Is_List_Empty();
	void Insert_Begin(int);
	void Insert_End(int);
	void Insert_After(int, int);
	void Delete_Node(int);
	void Largest_Node();
	void Total_Nodes();
	void Nodes_At_Even_Positions();
	void Split_Nodes();
	void Display();
};

