#include <iostream>
#include "Stack_c.h"
	
	Stack_c::Stack* make_stack()
	{
		int size = n;
		
		if(size <= 0)
		{
			cout << "Can`t create stack! Wrong size!" << endl;
			return NULL;
		};
	
		Stack* high, *prev_p;
	
		cout << "Insert 1 element: ";
	
		high = new Stack;
		high -> next = NULL;
	
		cin >> high -> data;
	
		for(int i=2;i<=size;i++)
		{
			cout << "Insert " << i << " element: ";
		
			prev_p = high;
			high = new Stack;
			high -> next = prev_p;
		
			cin >> high -> data;
		};
	
		return high;
	
	};
	
	
	
	Stack_c::Stack_c()
	{
		n = -1;
	
		while(n <= 0)
		{
			cout << "Insert stack elements quantity: ";
			cin >> n;
			cout << endl;
		
			if(n <= 0)
			{
				cout << "Wrong input! Try again!" << endl;
				n = -1;
			};
		
		};
	
		Stack* stack = make_stack();
	};
	
	Stack_c::~Stack_c()
	{
		Stack* ptr = stack;
		Stack* next_ptr = NULL;
	
		while(ptr != NULL)
		{
			next_ptr = ptr -> next;
			delete ptr;
			ptr = next_ptr;
		};
	};
	
	Stack_c::void add_to_stack()
	{
		int num = -1;
		
		while((num <= 0) || (num > n + 1))
		{
			cout << "Insert number of element to insert: ";
			cin >> num;
			cout << endl;
		
			if((num <= 0) || (num > n + 1))
			{
				cout << "Wrong input! Try again!" << endl;
				num = -1;
			};
		
		};
		
		Stack* high = stack;
		char* new_data;
		
	 	cout << "Insert new element: ";
		cin >> new_data;
		cout << endl;
	 		
		int i = 1;
		bool flag = true;
	
		if(num == 1)
		{
			Stack* elem = new Stack;
			strcpy(elem -> data, high -> data);
			elem -> next = high -> next;
			strcpy(high -> data, new_data);
			high -> next = elem;
		
		}else
		{
			while((high != NULL) && (flag))
			{
				if(i == num - 1)
				{
					flag = false;
					Stack* elem = new Stack;
					strcpy(elem -> data, new_data);
					elem -> next = high -> next;
					high -> next = elem;
				};
		
				high = high -> next;
				i++; 
			};
		};
	};
	
	Stack_c::void print_stack()
	{
		Stack* high = stack;
		
		if(high == NULL)
		{
			cout << "NULL pointer detected! Nothing to print!" << endl;
			return;
		};
	
		cout << "Stack:" << endl;
	
		int i = 1;
	
		while(high != NULL)
		{
			cout << i << " : " << high -> data << endl;

			high = high -> next;
			i++;
		
		};
	
	};
