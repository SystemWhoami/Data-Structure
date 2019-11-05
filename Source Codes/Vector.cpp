#include <iostream>
using namespace std;

void create(int &size, int *vector){
        cout << "How big is your vector?" << endl;
        cin >> size;
        for(int i=0; i<size; i++) {
                cout << "Enter a value for index " << i << endl;
                cout << ">> ";
                cin >> vector[i];
        }
}

void display(int &size, int *vector){
        if(size==0) {
                cout << "The vector is empty" << endl;
        }
        else{
                cout << "Your vector is: " << endl;
                for(int i=0; i<size; i++) {
                        cout << "\t" << vector[i];
                }
                cout << endl;
        }
}

void options(int choice, int &size, int *vector){
        switch(choice) {
        case 0:
                exit(0);
                break;
        case 1:
                create(size, vector);
                break;
        case 2:
                display(size, vector);
                break;
        }
}

void menu(int &size, int *vector, int choice){
        cout << "Choose an option below: " << endl;
        cout << "1 | Create a vector;" << endl;
        cout << "2 | Display the vector;" << endl;
        cout << "0 | Exit;" << endl;        cout << ">> ";
        cin >> choice;
        while(choice<0 or choice>2) {
                cout << "Error" << endl;
                cout << ">> ";
                cin >> choice;
        }
        options(choice, size, vector);
}

main(){
        int size=0;
        int vector[size];
        int choice=-1;
        menu(size, vector, choice);
        while(choice!=0) {
                menu(size, vector,choice);
        }
}
