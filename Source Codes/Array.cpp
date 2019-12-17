#include <iostream>
using namespace std;
#define m 3
#define n 3

void create(int array[m][n]){
        for(int i=0; i<m; i++) {
                for(int j=0; j<n; j++) {
                        cout << "Enter a value for line and column " << i << ":" << j << endl;
                        cin >> array[i][j];
                }
        }
}

void display(int array[m][n]){
        if(array[3][3]==0) {
                cout << "The array is empty" << endl;
        }
        else{
                cout << "Your array is: " << endl;
                for(int i=0; i<m; i++) {
                        for(int j=0; j<n; j++) {
                                cout << "\t" << array[i][j];
                        }
                        cout << endl;
                }
        }
}

void option(int choice, int array[m][n]){
        switch(choice) {
        case 0:
                exit(0);
                break;
        case 1:
                create(array);
                break;
        case 2:
                display(array);
                break;
        }
}

void menu(int array[m][n], int choice){
        cout << "Choose an option below: " << endl;
        cout << "1 | Create an array;" << endl;
        cout << "2 | Display the array;" << endl;
        cout << "0 | Exit" << endl;
        cout << ">> ";
        cin >> choice;
        while(choice<0 or choice>2) {
                cout << "Error" << endl;
                cout << ">> ";
                cin >> choice;
        }
        option(choice, array);
}

main(){
        int array[m][n];
        int choice=-1;
        menu(array, choice);
        while(choice!=0) {
                menu(array, choice);
        }

}
