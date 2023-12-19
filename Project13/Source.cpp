#include "Stack.cpp"
#include "Queue.cpp"
#include <iostream>
#include<clocale>
using namespace std;
void start() {
    cout << "������� 1, ����� ������� ����" << endl;
    cout << "������� 2, ����� ������� �������" << endl;
}
void Stack() {
    cout << "������� 1, ����� ������ ������ �����" << endl;
    cout << "������� 2, ����� ������ ������� � ������� �����" << endl;
    cout << "������� 3, ����� ������� �������" << endl;
    cout << "������� 4, ����� �������� ������� � ����" << endl;
}
void Queue() {
    cout << "������� 1, ����� ������� �������" << endl;
    cout << "������� 2, ����� �������� ������� � �������" << endl;
}
int main() {
    setlocale(LC_ALL, "Russian");
    bool flag = true;
    while (flag) {
        int a, size;
        start();

        cin >> a;
        if (a == 1) {
            cout << "������� ������ �����" << endl;
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
                    cout << "������ ����� - " << stack1.GetSize() << endl;
                    break;
                case 2:
                    cout << "������� � ������� ����� - " << stack1.TopView() << endl;
                    break;
                case 3:
                    try {
                        cout << "����������� ������� �� ������� ����� - " << stack1.GetTop() << endl << stack1;
                    }
                    catch (...) {
                        cout << "���� ����" << endl;
                    }
                    break;
                case 4:
                    cout << "������� ������� ��� ���������� � ���� - ";
                    int el;
                    cin >> el;
                    try {
                        stack1.Push(el);
                    }
                    catch (...) {
                        cout << "���� �����" << endl;
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
            cout << "������� ������ �������" << endl;
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
                        cout << "������� �����" << endl;
                    }
                    break;
                case 2:
                    cout << "������� ������� ��� ���������� � ������� - ";
                    int el;
                    cin >> el;
                    try {
                        queue1.Push(el);
                    }
                    catch (...) {
                        cout << "������� �����" << endl;
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
