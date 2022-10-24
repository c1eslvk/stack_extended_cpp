#include <iostream>
#include "stack.h"
using namespace std;

int main()
{

	// Stack s1;
	
	// s1.push(1);
	// s1.push(2);
	// s1.push(3);

	// Stack s2(s1);

    // s2.push(4);
	
	// cout << "from stack2: " << s2.pop() << endl;
	// cout << "from stack1: " << s1.pop() << endl;
	// cout << "from stack2: " << s2.pop() << endl;

    // Stack s3;

    // s3.push(7);
    // s3.push(8);
    // s3.push(9);
    // s3.push(10);
    // s3.push(11);
    // s3.push(12);
    // s3.push(13);
    // s3.push(14);

    // s2 = s3;

    // cout << "from s2 after assignment operator" << endl;
    // cout << s2.pop() << endl;
    // cout << s2.pop() << endl;

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
    
    s4 = s5;
	

	return 0;
}
