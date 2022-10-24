#include "stack.h"
#include <cstring>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

#define STACKSTEP 2

Stack::Stack()
{
	this->top = -1;
	this->size = 1;
	this->items = (int*)malloc(sizeof(int) * STACKSTEP);
	if (this->items == NULL)
		abort();
}

Stack::Stack(const Stack& other)
{
	this->top = other.top;
	this->size = other.size;
	this->items = (int*)malloc(sizeof(int) * STACKSTEP * this->size);
	if (this->items == NULL)
		abort();
	memcpy(this->items, other.items, sizeof(int) * this->size * STACKSTEP);
}

Stack::~Stack()
{
	free(this->items);
}

Stack& Stack::operator=(Stack& other) {
    if (&other == this) {
        cout << "stack is the same" << endl;
        return *this;
    }
    this->top = other.top;
    
    if (other.size != this->size) {
        this->size = other.size;
        //cout << "this size" << this->size << " other size" << other.size << endl;
        this->items = (int*)realloc(this->items ,sizeof(int) * STACKSTEP * this->size); 
        if (this->items == NULL) {
            cout << "Couldnt allocate memory" << endl;
		    abort();
        }
        //cout << "realloced" << endl;
    }
	memcpy(this->items, other.items, sizeof(int) * this->size * STACKSTEP);

    return *this;
}


bool Stack::is_empty()
{
	if (this->top == -1) {
		return true;
	}
	else {
		return false;
	}
}

void Stack::push(int element)
{
	this->top++;
	if (this->top == STACKSTEP * this->size) {
		this->size++;
		this->items =
			(int*)realloc(this->items, sizeof(int) * STACKSTEP * this->size);
		if (this->items == NULL)
			abort();
	}
	this->items[this->top] = element;
}

int Stack::pop()
{
	int popped_element;
	if (this->is_empty()) {
		cout << "stack is empty" << endl;
		abort();
	}
	else {
		popped_element = this->items[this->top];
		this->top--;
		return popped_element;
	}
}
