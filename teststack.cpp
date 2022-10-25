#include <iostream>
#include "stack.h"
using namespace std;

void passingByValue(Stack stack);
void passingByReference(Stack& stack);

int main()
{
    Stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);

    Stack s2(s1);

    Stack s3 = s1;

    Stack s4;
    s4.push(10);
    s4 = s1;

    s4 = s4;

    Stack s5;
    
    s4 = s5;;

    passingByValue(s2);
    cout << s2.pop() << endl;

    passingByReference(s2);
	cout << s2.pop() << endl;

	return 0;
}

void passingByValue (Stack stack) {
    stack.push(35);
}

void passingByReference (Stack& stack) {
    stack.push(12);
}
