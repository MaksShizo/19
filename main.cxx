#include <iostream>
#include "Stack_c.h"


int main(int argc, char **argv)
{
	Stack_c obj;
	obj.print_stack();
	obj.add_to_stack();
	obj.print_stack();
	
	return 0;
}

