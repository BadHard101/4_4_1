#include <stdlib.h>
#include <stdio.h>
#include "Child3.h"
int main()
{
	Child3 * obj = new Child3;

	obj->Base::in_out();
	obj->Child1::func();
	obj->Child2::func();
	obj->in_out();

	return(0);
}