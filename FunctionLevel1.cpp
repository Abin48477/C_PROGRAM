/*🧠 What is a Function?
A function is a reusable block of code that performs a specific task.

Think of it like a machine in your kitchen:

You give it input (like ingredients), it does something (cook), and gives output (food).

✅ 1. Types of Functions
Type	Meaning
No argument, no return	--->Only does a task
With argument, no return--->	Takes input, doesn’t return
No argument, with return--->	No input, but gives back result
With argument and return--->	Takes input and gives output*/
No Argunment and no return
#include <stdio.h>

void greet() {
    printf("Hello, Abin!\n");
}

int main() {
    greet();  // calling the function
    return 0;
}
