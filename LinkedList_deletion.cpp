/*

#include<iostream>
using namespace std;

// Deletion LinkedList
class ListEmptyException {};
template<class T> class LinkedList
{
	private:
		struct Node
		{
			T data;
			Node* next;
			// Node Constructor
			Node(T val, Node* link=0) : data(val), next(link) {}
		};
		Node* head;
		
		public:
			// LinkedList Constructor
			LinkedList() : head(0) {}
			bool empty() const
			{
				return head==0;
			}
			
			void addFirst(const T& val);
			void addLast(const T& val);
			void display();
			
			
			void del(const T& val); // delete that node whose value is given
			T delFirst(); // delete the first node
};


template<class T> void LinkedList<T>:: addFirst(const T& val)
{
	Node* n = new Node(val);
	n->next = head;
	head = n;
}

template<class T> void LinkedList<T>::addLast(const T& val)
{
	if(head==0)
	{
		return addFirst(val);
	}
	Node* p = head;
	while(p->next !=0)
	{
		p = p->next;
	}
	Node* n = new Node(val);
	p->next = n;
}

template<class T> void LinkedList<T>::display()
{
	cout<<"[ ";
	
	for(Node* i=head; i!=0; i = i->next)
	{
		cout<<i->data<<" ";
	}
	cout<<" ]"<<endl;
}

template<class T> T LinkedList<T>::delFirst()
{
	if(head==0)
	{
		throw ListEmptyException();
	}
	Node* n = head;
	T val = n->data;
	head = head->next;
	delete n;
	return val;
}

template<class T> void LinkedList<T>::del(const T& val)
{
	if(head==0)
	{
		throw ListEmptyException();
	}
	if(head->data==val)
	{
		delFirst();
	}
	else
	{
		Node *p, *n = head;
		while(n !=0 && n->data != val)
		{
			p = n;
			n = n->next;
		}
		if(n==0) return; // val not found in the list
		p->next = n->next; 
		delete n;
	}
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

	try
	{
		list.del(10);
		list.del(40);
		list.del(32);
	}
	
	catch(ListEmptyException& e)
	{
		cout<<"List is Empty";
	}
	
	list.display();
	return 0;
}

*/

#include<iostream>
using namespace std;

// Deletion LinkedList
class ListEmptyException {};
template<class T> class LinkedList
{
	private:
		struct Node
		{
			T data;
			Node* next;
			// Node Constructor
			Node(T val, Node* link=0) : data(val), next(link) {}
		};
		
		Node* head;
		
	public:
		// LinkedList Constructor
		LinkedList() : head(0) {} // create an empty list
		
		bool empty() const
		{
			return head==0; // check i
		}
		
		void addFirst(const T& val);
		void addLast(const T& val);
		
		T delFirst(); // delete the first node
		void del(const T& val); // delete that node whose value is given
		
		void display();
};

template<class T> void LinkedList<T>::addFirst(const T& val)
{
	Node* n = new Node(val);
	n->next = head;
	head = n;
}

template<class T> void LinkedList<T>::addLast(const T& val)
{
	if(head==0)
	{
		return addFirst(val);
	}
	Node* p = head;
	while(p->next !=0)
	{
		p = p->next;
	}
	Node* n = new Node(val);
	p->next = n;
}

template<class T> void LinkedList<T>::display()
{
	cout<<"[ ";
	
	for(Node* i=head; i!=0; i = i->next)
	{
		cout<<i->data<<" ";
	}
	cout<<" ]"<<endl;
}

template<class T> T LinkedList<T>::delFirst()
{
	if(head==0)
	{
		throw ListEmptyException();
	}
	Node *n = head;
	int val = n->data;
	head = head->next;
	delete n;
	return val;
}

template<class T> void LinkedList<T>:: del(const T& val)
{
	if(head==0)
	{
		throw ListEmptyException();
	}
	if(head->data==val)
	{
		delFirst();
	}
	else 
	{
	Node *p, *n = head;
	while(n !=0 && n->data !=val)
	{
		p = n;
		n = n->next;
	}
	if(n==0) return; // node not found in the list
	p->next = n->next;
	delete n;
	}
}

int main()
{
	
/*	LinkedList<int> list; // if the list is empty then it throw the exception handling
	
	try
	{
		int value = list.delFirst();
	}
	catch(ListEmptyException &e)
	{
		cout<<"List is Empty";
	}
*/

/*	LinkedList<int> list; --> it delete the first node
	
	list.addFirst(30);
	list.addFirst(20);
	list.addFirst(10);
	
	list.addLast(40);
	list.addLast(50);
	
	list.display();
	
	try
	{
		int value = list.delFirst();
	}
	catch(ListEmptyException &e)
	{
		cout<<"List is Empty";
	}
	list.display();
*/

	LinkedList<int> list; // delete that node whose value is given
	
	list.addFirst(30);
	list.addFirst(20);
	list.addFirst(10);
	
	list.addLast(40);
	list.addLast(50);
	
	list.display();
	
	try
	{
		list.del(10);
		list.del(35);
		list.del(20);
		list.del(30);
	}
	catch(ListEmptyException)
	{
		cout<<"List is Empty";
	}
	
	list.display();

	
	return 0;
}
