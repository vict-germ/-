// создаем массив:

#include <iostream>

int main() {
    int arr[5] = {1, 2, 3, 4, 5}; // массив из 5 целых чисел
}


// создаем стек:

#include <iostream>
#include <stack>
 
int main()
{
    std::stack<std::string> stack;
    // добавляем три элемента
    stack.push("Tom");
    stack.push("Bob");
    stack.push("Sam");
 
    std::cout << "stack size: " << stack.size() << std::endl; // stack size: 3
}
