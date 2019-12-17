#include <iostream>
using namespace std;
#define Max 100

struct Stack {
        int Top;
        int Elements[Max];
}; Stack S;


bool Check(Stack &S){
        if(S.Top==-1) {
                return true;
        }
        else{
                return false;
        }
}

void StackUp(Stack &S){
        int Value;
        cout << "Stack a value:" << endl;
        cout << ">> ";
        cin >> Value;
        if(Check(S)==false){
                S.Elements[S.Top]=Value;
                S.Top++;
                cout << Value << "Piled up!";
        }
        else{
                cout << "Full Stack, Care Will Fall!" << endl;
        }
}

void Unstack(Stack &S){
        if(S.Top==0) {
                cout << "Empty stack!" << endl;
        }
        else {
                S.Top--;
                cout << "Top element removed!" << endl;
        }
}

void AccessTop(Stack S){
        if(Check(S)==false) {
                cout << S.Elements[S.Top-1] << " is the top element" << endl;
        }
        else{
                cout << "Empty stack!" << endl;
        }
}

void Display(Stack S){
        cout << "Your stack is:" << endl;
        cout << "\t" << endl;
        for(int i=S.Top-1; i>=0; i--) {
                cout << S.Elements[i] << endl;
        }
}

void Option(Stack &S, int Choice){
        switch(Choice) {
        case 0:
                system("clear");
                system("exit");
                exit(0);
                break;
        case 1:
                StackUp(S);
                break;
        case 2:
                Unstack(S);
                break;
        case 3:
                AccessTop(S);
                break;
        case 4:
                Display(S);
                break;
        }
}

void Menu(Stack &S, int Choice){
        cout << "Choose an option below:" << endl;
        cout << "1 | Stack up;" << endl;
        cout << "2 | Unstack;" << endl;
        cout << "3 | Access top element;" << endl;
        cout << "4 | Display the Stack;" << endl;
        cout << "0 | Exit;" << endl;
        cout << ">> ";
        cin >> Choice;
        while(Choice<0 or Choice>4) {
                cout << "ERROR!" << endl;
                cout << ">> ";
                cin >> Choice;
        }
        Option(S, Choice);
}

main(){
        Stack S;
        S.Top=0;
        int Choice=-1;
        Menu(S, Choice);
        while(Choice!=0) {
                Menu(S, Choice);
        }
}
