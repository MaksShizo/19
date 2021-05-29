#pragma once

class Stack_c
{
	private:
	struct Stack
	{
		char data[20];
		Stack* next;
	};
	Stack* stack;
	int n;
	Stack* make_stack();
	
	public:
	void add_to_stack();
	void print_stack();
};
