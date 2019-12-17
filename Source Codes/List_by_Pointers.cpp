#include <iostream>
using namespace std;

struct Shopping {
        string Product;
        float Price;
};

struct No {
        Shopping Elements;
        No *Prox;
};
typedef No *PtNo;

Shopping DataEntry(){
        Shopping Data;

        cout << "Product: ";
        cin >> Data.Product;
        cout << endl;
        cout << "Price:";
        cin >> Data.Price;
        cout << endl;
        return Data;
}

void InsertStart(PtNo &p, Shopping Data){
        PtNo q;
        q = new No;
        q->Elements=Data;
        q->Prox=NULL;
        q->Prox=p;
        p=q;
}

void InsertEnd(PtNo p, Shopping Data){
        while((p->Prox!=NULL) and (p!=NULL)) {
                p=p->Prox;
        }
        PtNo q;
        q = new No;
        q->Elements=Data;
        q->Prox=NULL;
        p->Prox=q;
}

void DeleteStart(PtNo &p){
        if(p==NULL) {
                cout << "Empty List!" << endl;
        }
        else{
                PtNo q;
                q = p;
                p = p->Prox;
                free(q);
        }
}

void DeleteEnd(PtNo &p){
        PtNo q = p;
        PtNo aux;
        if(p->Prox==NULL) {
                free(p);
                p = NULL;
        }
        else{
                while(q->Prox!=NULL) {
                        aux = q;
                        q = q->Prox;
                }
                aux->Prox = NULL;
                free(q);
        }
}

void View(PtNo p){
        if(p==NULL)
                cout << "Empty List!" << endl;
        while(p!=NULL) {
                cout << "-------------------------" << endl;
                cout << "Product: "<< p->Elements.Product << endl;
                cout << "Price: "<< p->Elements.Price << endl;
                cout << "-------------------------" << endl;
                p=p->Prox;
        }
}

void Option(PtNo &P, int Choice){
        Shopping Data;
        switch(Choice) {
        case 0:
                system("clear");
                system("exit");
                exit(0);
                break;
        case 1:
                Data = DataEntry();
                InsertStart(P, Data);
                system("clear");
                break;
        case 2:
                Data = DataEntry();
                InsertEnd(P, Data);
                system("clear");
                break;
        case 3:
                DeleteStart(P);
                break;
        case 4:
                DeleteEnd(P);
                break;
        case 5:
                View(P);
                break;
        }
}

void Menu(PtNo &P, int Choice){
        cout << "Choose an option below:" << endl;
        cout << "1 | Insert at the beginning of the list;" << endl;
        cout << "2 | Insert at end of list;" << endl;
        cout << "3 | Delete at the beginning of the list;" << endl;
        cout << "4 | Delete at end of list;" << endl;
        cout << "5 | View list;" << endl;
        cout << "0 | Exit;" << endl;
        cout << ">> ";
        cin >> Choice;
        while(Choice<0 or Choice>5) {
                cout << "ERROR!" << endl;
                cout << ">> ";
                cin >> Choice;
        }
        Option(P, Choice);
}

main(){
        PtNo P = NULL;
        int Choice=-1;
        Menu(P, Choice);
        while(Choice!=0) {
                Menu(P, Choice);
        }
}
