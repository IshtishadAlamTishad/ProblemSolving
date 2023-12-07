#include <bits/stdc++.h>
using namespace std;

enum State {
    Q0, Q1, QAccept, QReject
};

class TuringMachine {
private:
    vector<char> tape; 
    int head;  
    State state;        

public:
    TuringMachine(const string& input) {
        tape = vector<char>(input.begin(), input.end());
        head = 0;
        state = Q0;
    }
    void run() {
        while (state != QAccept && state != QReject) {
            printConfiguration();
            transition();
        }
        printResult();
    }

private:
    void printConfiguration() const {
        for (int i = 0; i < tape.size(); ++i) {
            if (i == head)
                cout << "[" << tape[i] << "] ";
            else
                cout << tape[i] << " ";
        }
        cout << "\tState: Q" << state << endl;
    }
    void transition() {
        char currentSymbol = tape[head];

        switch (state) {
            case Q0:
                if (currentSymbol == '0') {
                    tape[head] = '1';
                    moveRight();
                    state = Q1;
                } else if (currentSymbol == '1') {
                    moveRight();
                } else {
                    state = QReject;
                }
                break;

            case Q1:
                if (currentSymbol == '0') {
                    moveRight();
                } else if (currentSymbol == '1') {
                    moveRight();
                } else {
                    state = QAccept;
                }
                break;
        }
    }
    void moveRight() {
        if (head == tape.size() - 1) {
            tape.push_back(' ');
        }
        ++head;
    }
    void printResult() const {
        if (state == QAccept) {
            cout << "Accepted\n";
        } else {
            cout << "Rejected\n";
        }
    }
};

int main() {
    TuringMachine tm("0110");
    tm.run();

    return 0;
}
