#include "linked_list.h"
Linked_list::Linked_list() 
{
	m_head = nullptr;
}
Linked_list::~Linked_list() 
{
	IntNode* p = m_head;
	IntNode* q = m_head;
	while (q) 
	{
		p = q;
		q = p->next;
		delete p;
	}

}
IntNode::IntNode(int data) 
{
	this->x = data;
	this->next = nullptr;

}
IntNode::IntNode() {
	x = 0;
	next = nullptr;
}
void Linked_list::Print()
{
	IntNode* temp = m_head;
	if (m_head == nullptr) {
		std::cout << "List empty" <<std:: endl;
		return;
	}
	while (temp != nullptr) {
		std::cout << temp->x << " ";
		temp = temp->next;
	}
}

void Linked_list::push_back(int data)
{
	
	IntNode* newNode = new IntNode(data);

	
	if (m_head == nullptr) {
		m_head = newNode;
		return;
	}

	
	IntNode* temp = m_head;
	while (temp->next != nullptr)
	{
		temp = temp->next;
	}

	   temp->next = newNode;
}


void Linked_list::delete_el(int x)
{
	if (m_head == nullptr) 
		std::cout << "List was empty!";
	else
	{   
		int i = 1;
		IntNode* p = m_head;
		IntNode* q = m_head;
		p = p->next;
		if (x == 0) 
		{
			delete q;
			   m_head = p;
			   return;

		}
		while (q) 
		{ 
			if (p->next == nullptr)
			{
				std::cout << "Out of range" << std::endl;
				return;
			}
			if (i == x)
			{
				q->next = p->next;
					delete p;
					break;
				
			}
			    p = p->next;
			    q = q->next;
			    i++;

		}
		
	}
}

 IntNode* Linked_list::find_el(int x) 
 {
	 if (m_head == nullptr) {
		 std::cout << "No element in list!"<<std::endl;
		 return nullptr;
	 }
	 else
	 {
		 IntNode* p = m_head;
		 while (p) 
		 {
			 if (p->x == x)
			 {
				 std::cout << "Element exists" << std::endl;
				 return p;
			 }
			 else 
				 p = p->next;	 
		 }
		 std::cout << "No el"<<std::endl;
		 return nullptr;
	 }
 }
