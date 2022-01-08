#include<iostream>
using namespace std;

// LinkedList

template<class T> class LinkedList
{
	private:
		struct Node
		{
			T data;
			Node* next;
			// Node Constructor
			Node(T value, Node* link=0) : data(value), next(link) {}
		};
		Node* head;
		
	public:
		// LinkedList Constructor
		LinkedList() : head(0) {}
		
		bool empty() const
		{
			return head==0;	
		} 
		
		void addFirst(const T& value);
		void addLast(const T& value);
		void display();
};

template<class T> void LinkedList<T>::addFirst(const T& value)
{
	Node* n = new Node(value);
	n->next = head;
	head = n;
}

template<class T> void LinkedList<T>::addLast(const T& value)
{
	if(head==0)
	{
		return addFirst(value);
	}
	Node* p = head;
	while(p->next !=0)
	{
		p = p->next;
	}
	Node* n = new Node(value);
	p->next = n;
}
template<class T> void LinkedList<T>::display()
{
	cout<<"[ ";
	
	for(Node* i=head; i!=0; i = i->next)
	{
		cout<<i->data<<" ";
	}
	cout<<" ]";
}

int main()
{
	
	LinkedList<int> list;
	
	list.addFirst(30);
	list.addFirst(20);
	list.addFirst(10);
	
	list.addLast(40);
	list.addLast(50);
	
	list.display();
	
	return 0;
}
