#include "Stack.cpp"
#include "Queue.cpp"
#include <iostream>
#include<clocale>
using namespace std;
void start() {
    cout << "Нажмите 1, чтобы создать стек" << endl;
    cout << "Нажмите 2, чтобы создать очередь" << endl;
}
void Stack() {
    cout << "Нажмите 1, чтобы узнать размер стека" << endl;
    cout << "Нажмите 2, чтобы узнать элемент в вершине стека" << endl;
    cout << "Нажмите 3, чтобы извлечь элемент" << endl;
    cout << "Нажмите 4, чтобы добавить элемент в стек" << endl;
}
void Queue() {
    cout << "Нажмите 1, чтобы извлечь элемент" << endl;
    cout << "Нажмите 2, чтобы добавить элемент в очередь" << endl;
}
int main() {
    setlocale(LC_ALL, "Russian");
    bool flag = true;
    while (flag) {
        int a, size;
        start();

        cin >> a;
        if (a == 1) {
            cout << "Введите размер стека" << endl;
            cin >> size;
            TStack<int> stack1(size);
            cin >> stack1;
            cout << stack1 << endl;
            bool flag1 = true;
            while (flag1) {
                Stack();
                cin >> a;
                switch (a) {
                case 1:
                    cout << "Размер стека - " << stack1.GetSize() << endl;
                    break;
                case 2:
                    cout << "Элемент в вершине стека - " << stack1.TopView() << endl;
                    break;
                case 3:
                    try {
                        cout << "Извлеченный элемент из вершины стека - " << stack1.GetTop() << endl << stack1;
                    }
                    catch (...) {
                        cout << "Стек пуст" << endl;
                    }
                    break;
                case 4:
                    cout << "Введите элемент для добавления в стек - ";
                    int el;
                    cin >> el;
                    try {
                        stack1.Push(el);
                    }
                    catch (...) {
                        cout << "Стек полон" << endl;
                    }
                    cout << stack1;
                    break;
                default:
                    flag1 = false;
                    break;
                }
            }

        }
        if (a == 2) {
            cout << "Введите размер очереди" << endl;
            cin >> size;
            TQueue<int> queue1(size);
            cin >> queue1;
            cout << queue1 << endl;
            bool flag1 = true;
            while (flag1) {
                Queue();
                cin >> a;
                switch (a) {
                case 1:
                    queue1.GetBot();
                    try {
                        cout << queue1 << endl;
                    }
                    catch (...) {
                        cout << "Очередь пуста" << endl;
                    }
                    break;
                case 2:
                    cout << "Введите элемент для добавления в очередь - ";
                    int el;
                    cin >> el;
                    try {
                        queue1.Push(el);
                    }
                    catch (...) {
                        cout << "Очередь полна" << endl;
                    }
                    cout << queue1;
                    break;
                default:
                    flag1 = false;
                    break;
                }
            }
        }

    }

}
