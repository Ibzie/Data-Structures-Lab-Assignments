#include "Queue.h"
#include <string>
#include <iostream>
using namespace std;

char checkPrecendence(Queue op) {
    if (op.deQ() == '*') {
        return '*';
    }

    else if (op.deQ() == '/') {
        return '/';
    }

    else if (op.deQ() == '+') {
        return '+';
    }

    else if (op.deQ() == '-') {
        return '-';
    }
}

int main() {
    string password = "a2+b*3";
    Queue alpha;
    Queue num;
    Queue op;

    //sort
    for (int i = 0; i < password.length(); i++) {
        if (password[i] == ')' || password[i] == '(') {
            cout << "Invalid Password" << endl;
            continue;
        }

        else if (password[i] == ' ') {
            continue;
        }

        else if (password[i] == '+' || password[i] == '-' || password[i] == '*' || password[i] == '/') {
            op.enQ(password[i]);
        }

        else if (password[i] >= '0' && password[i] <= '9') {
            num.enQ(password[i]);
        }

        else if (password[i] >= 'a' && password[i] <= 'z') {
            alpha.enQ(password[i]);
        }
    }

    //encryption
    cout << endl;

    cout << "Encrypted Password V2 = ";
    alpha.print();
    num.printNum(checkPrecendence(op));
    op.print();
    cout << endl;
    return 0;
}