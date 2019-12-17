/*Everything in this commented code is part of visuals which in windows cannot be used as it is just an aesthetic feature of linux*/
#include <iostream>
using namespace std;
#define Max 100

struct List {
        int N;
        int Elements[Max];
};

void FeatureVisual(int Resource){ //If you use Windows you will not use this function, so you can delete it;
        switch(Resource) {
        case 1:
                cout << "================================================================================" << endl;
                system("figlet -f smslant -c List");
                cout << "================================================================================" << endl;
                break;
        case 2:
                cout << "================================================================================" << endl;
                system("figlet -f smslant -c Create");
                cout << "================================================================================" << endl;
                break;
        case 3:
                cout << "================================================================================" << endl;
                system("figlet -f smslant -c Insert");
                cout << "================================================================================" << endl;
                break;
        case 4:
                cout << "================================================================================" << endl;
                system("figlet -f smslant -c To Remove");
                cout << "================================================================================" << endl;
                break;
        case 5:
                cout << "================================================================================" << endl;
                system("figlet -f smslant -c Change");
                cout << "================================================================================" << endl;
                break;
        case 6:
                cout << "================================================================================" << endl;
                system("figlet -f smslant -c Check");
                cout << "================================================================================" << endl;
                break;
        case 7:
                cout << "================================================================================" << endl;
                system("figlet -f smslant -c To Locate");
                cout << "================================================================================" << endl;
                break;
        case 8:
                cout << "================================================================================" << endl;
                system("figlet -f smslant -c Display");
                cout << "================================================================================" << endl;
                break;
        case 9:
                system("figlet -f smslant -c ERROR!");
                break;
        case 10:
                cout << "================================================================================" << endl;
                system("figlet -f smslant -c Empty List!");
                cout << "================================================================================" << endl;
                break;

        }
}
void Create(List &L){
        int I;
        FeatureVisual(2); //Aesthetic feature (Linux only, If you are a Windows user comment or delete)
        cout << "How long is the list? (0-100)" << endl;
        cout << ">> ";
        cin >> L.N;
        for(I=0; I<L.N; I++) {
                cout << "Insert an element at position " << I+1 << endl;
                cout << ">> ";
                cin >> L.Elements[I];

        }
        system("clear"); //If using windows use "system ("cls");" without the quotes

}

void Insert(List &L){
        if(L.N==0) {
                FeatureVisual(10); //Aesthetic feature (Linux only, If you are a Windows user comment or delete)
                //cout << "Empty list!" << endl; //Uncomment this line if using Windows
        }
        else{
                int I;
                int V;
                int P;
                FeatureVisual(3); //Aesthetic feature (Linux only, If you are a Windows user comment or delete)
                if (L.N == Max) {
                        cout << "Space is up!" << endl;
                }
                else{
                        cout << "What is the position of the new element?" << endl;
                        cout << ">> ";
                        cin >> P;
                        while(P-1<0 or P-1>L.N) {
                                cout << "Invalid Position!" << endl;
                                cout << ">> ";
                                cin >> P;
                        }
                        cout << "What is the value of the new element?" << endl;
                        cout << ">> ";
                        cin >> V;
                        for (I=L.N; I>=P-1; I--) {
                                L.Elements[I+1] = L.Elements[I];
                        }
                        L.Elements[P-1]=V;
                        L.N++;
                        system("clear"); //If using windows use "system ("cls");" without the quotes
                }
        }

}

void ToRemove(List &L){
        if(L.N==0) {
                FeatureVisual(10); //Aesthetic feature (Linux only, If you are a Windows user comment or delete)
                //cout << "Empty list!" << endl; //Uncomment this line if using Windows
        }
        else{
                int I;
                int P;
                FeatureVisual(4); //Aesthetic feature (Linux only, If you are a Windows user comment or delete)
                cout << "From which position do you want to remove an element?" << endl;
                cout << ">> ";
                cin >> P;
                while(P-1<0 or P-1>L.N) {
                        cout << "Invalid Position!" << endl;
                        cout << ">> ";
                        cin >> P;
                }
                for(I=P-1; I<L.N-1; I++) {
                        L.Elements[I]=L.Elements[I+1];
                }
                L.N--;
                system("clear"); //If using windows use "system ("cls");" without the quotes
        }

}

void Change(List &L){
        if(L.N==0) {
                FeatureVisual(10); //Aesthetic feature (Linux only, If you are a Windows user comment or delete)
                //cout << "Empty list!" << endl; //Uncomment this line if using Windows
        }
        else{
                int P;
                int V;
                FeatureVisual(5); //Aesthetic feature (Linux only, If you are a Windows user comment or delete)
                cout << "Which position do you want to change?" << endl;
                cout << ">> ";
                cin >> P;
                while(P-1<0 or P-1>L.N) {
                        cout << "Invalid Position!" << endl;
                        cout << ">> ";
                        cin >> P;
                }
                cout << "What is the value of the new element?" << endl;
                cout << ">> ";
                cin >> V;
                L.Elements[P-1] = V;
                system("clear"); //If using windows use "system ("cls");" without the quotes
        }
}

int Check(List &L){
        if(L.N==0) {
                FeatureVisual(10); //Aesthetic feature (Linux only, If you are a Windows user comment or delete)
                //cout << "Empty list!" << endl; //Uncomment this line if using Windows
        }
        else{
                int P;
                FeatureVisual(6); //Aesthetic feature (Linux only, If you are a Windows user comment or delete)
                cout << "Which position would you like to check?" << endl;
                cout << ">> ";
                cin >> P;
                while(P-1<0 or P-1>L.N) {
                        cout << "Invalid Position!" << endl;
                        cout << ">> ";
                        cin >> P;
                }
                system("clear"); //If using windows use "system ("cls");" without the quotes;
                FeatureVisual(6); //Aesthetic feature (Linux only, If you are a Windows user comment or delete)
                cout << "The value found in this position was " << L.Elements[P-1] << endl;
        }
}

void ToLocate(List &L){
        if(L.N==0) {
                FeatureVisual(10); //Aesthetic feature (Linux only, If you are a Windows user comment or delete)
                //cout << "Empty list!" << endl; //Uncomment this line if using Windows
        }
        else{
                int I;
                int V;
                int Aux=-1;
                FeatureVisual(7); //Aesthetic feature (Linux only, If you are a Windows user comment or delete)
                cout << "What value would you like to find?" << endl;
                cout << ">> ";
                cin >> V;
                system("clear"); //If using windows use "system ("cls");" without the quotes;
                FeatureVisual(7); //Aesthetic feature (Linux only, If you are a Windows user comment or delete)
                for(I=0; I<L.N; I++) {
                        if(L.Elements[I]==V) {
                                Aux++;
                                cout << "Value was found at position " << I+1 << endl;
                        }
                }
                if(Aux==-1) {
                        cout << "Value not found in List." << endl;
                }
        }

}


void Display(List &L){
        if(L.N==0) {
                FeatureVisual(10); //Aesthetic feature (Linux only, If you are a Windows user comment or delete)
                //cout << "Empty list!" << endl; //Uncomment this line if using Windows
        }
        else{
                int I;
                FeatureVisual(8); //Aesthetic feature (Linux only, If you are a Windows user comment or delete)
                for(I=0; I<L.N; I++) {
                        cout << "\t" << L.Elements[I];
                }
                cout << endl;
        }
}

void Option(List &L, int Choice){
        switch(Choice) {
        case 0:
                system("clear"); //If using windows use "system ("cls");" without the quotes;
                system("exit"); //If using windows delete this line;
                exit(0);
                break;
        case 1:
                system("clear"); //If using windows use "system ("cls");" without the quotes;
                Create(L);
                break;
        case 2:
                system("clear"); //If using windows use "system ("cls");" without the quotes;
                Insert(L);
                break;
        case 3:
                system("clear"); //If using windows use "system ("cls");" without the quotes;
                ToRemove(L);
                break;
        case 4:
                system("clear"); //If using windows use "system ("cls");" without the quotes;
                Change(L);
                break;
        case 5:
                system("clear"); //If using windows use "system ("cls");" without the quotes
                Check(L);
                break;
        case 6:
                system("clear"); //If using windows use "system ("cls");" without the quotes;
                ToLocate(L);
                break;
        case 7:
                system("clear"); //If using windows use "system ("cls");" without the quotes;
                Display(L);
                break;
        }
}

void Menu(List &L, int Choice){
        FeatureVisual(1); //Aesthetic feature (Linux only, If you are a Windows user comment or delete)
        cout << "Choose an option below:" << endl;
        cout << "1 | Create a list;" << endl;
        cout << "2 | Insert an element in the nth position;" << endl;
        cout << "3 | Remove an element in the nth position;" << endl;
        cout << "4 | Change an element of the nth position;" << endl;
        cout << "5 | Check element value at nth position;" << endl;
        cout << "6 | Find a Value;" << endl;
        cout << "7 | View list;" << endl;
        cout << "0 | Exit;" << endl;
        cout << ">> ";
        cin >> Choice;
        while(Choice<0 or Choice>7) {
                FeatureVisual(9); //Aesthetic feature (Linux only, If you are a Windows user comment or delete)
                //cout << "ERROR!" << endl; //Uncomment this line if using Windows
                cout << ">> ";
                cin >> Choice;
        }
        Option(L, Choice);
}

main(){
        List L;
        int Choice=-1;
        Menu(L, Choice);
        while(Choice!=0) {
                Menu(L, Choice);
        }
}
