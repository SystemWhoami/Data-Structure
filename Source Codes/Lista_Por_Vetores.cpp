/*Tudo neste código que está Comentado faz parte de recursos visuais que no windows não poderão ser usados pois é apenas um recurso estético do linux*/
#include <iostream>
using namespace std;
#define Max 100

struct Lista {
        int N;
        int Elementos[Max];
};

void RecursoVisual(int Recurso){ //Em caso de usar Windows não usará essa função, então podera deletar ela;
        switch(Recurso) {
        case 1:
                cout << "================================================================================" << endl;
                system("figlet -f smslant -c Lista");
                cout << "================================================================================" << endl;
                break;
        case 2:
                cout << "================================================================================" << endl;
                system("figlet -f smslant -c Criar");
                cout << "================================================================================" << endl;
                break;
        case 3:
                cout << "================================================================================" << endl;
                system("figlet -f smslant -c Inserir");
                cout << "================================================================================" << endl;
                break;
        case 4:
                cout << "================================================================================" << endl;
                system("figlet -f smslant -c Remover");
                cout << "================================================================================" << endl;
                break;
        case 5:
                cout << "================================================================================" << endl;
                system("figlet -f smslant -c Alterar");
                cout << "================================================================================" << endl;
                break;
        case 6:
                cout << "================================================================================" << endl;
                system("figlet -f smslant -c Verificar");
                cout << "================================================================================" << endl;
                break;
        case 7:
                cout << "================================================================================" << endl;
                system("figlet -f smslant -c Localizar");
                cout << "================================================================================" << endl;
                break;
        case 8:
                cout << "================================================================================" << endl;
                system("figlet -f smslant -c Exibir");
                cout << "================================================================================" << endl;
                break;
        case 9:
                system("figlet -f smslant -c ERRO!");
                break;
        case 10:
                cout << "================================================================================" << endl;
                system("figlet -f smslant -c Lista vazia!");
                cout << "================================================================================" << endl;
                break;

        }
}
void Criar(Lista &L){
        int I;
        RecursoVisual(2); //Recurso estético (Somente Linux, Se você é um usuário Windows comente ou delete)
        cout << "Qual o tamanho da lista? (0-100)" << endl;
        cout << ">> ";
        cin >> L.N;
        for(I=0; I<L.N; I++) {
                cout << "Insira um elemento na posição " << I+1 << endl;
                cout << ">> ";
                cin >> L.Elementos[I];

        }
        system("clear"); //Em caso de usar windows use "system("cls");" sem as aspas

}

void Inserir(Lista &L){
        if(L.N==0) {
                RecursoVisual(10); //Recurso estético (Somente Linux, Se você é um usuário Windows comente ou delete)
                //cout << "Lista vazia!" << endl; //Descomente essa linha em caso de usar Windows
        }
        else{
                int I;
                int V;
                int P;
                RecursoVisual(3); //Recurso estético (Somente Linux, Se você é um usuário Windows comente ou delete)
                if (L.N == Max) {
                        cout << "Espaço esgotado!" << endl;
                }
                else{
                        cout << "Qual a posição do novo elemento?" << endl;
                        cout << ">> ";
                        cin >> P;
                        while(P-1<0 or P-1>L.N) {
                                cout << "Posição Inválida!" << endl;
                                cout << ">> ";
                                cin >> P;
                        }
                        cout << "Qual a Valor do novo elemento?" << endl;
                        cout << ">> ";
                        cin >> V;
                        for (I=L.N; I>=P-1; I--) {
                                L.Elementos[I+1] = L.Elementos[I];
                        }
                        L.Elementos[P-1]=V;
                        L.N++;
                        system("clear"); //Em caso de usar windows use "system("cls");" sem as aspas
                }
        }

}

void Remover(Lista &L){
        if(L.N==0) {
                RecursoVisual(10); //Recurso estético (Somente Linux, Se você é um usuário Windows comente ou delete)
                //cout << "Lista vazia!" << endl; //Descomente essa linha em caso de usar Windows
        }
        else{
                int I;
                int P;
                RecursoVisual(4); //Recurso estético (Somente Linux, Se você é um usuário Windows comente ou delete)
                cout << "De qual posição deseja remover um elemento?" << endl;
                cout << ">> ";
                cin >> P;
                while(P-1<0 or P-1>L.N) {
                        cout << "Posição Inválida!" << endl;
                        cout << ">> ";
                        cin >> P;
                }
                for(I=P-1; I<L.N-1; I++) {
                        L.Elementos[I]=L.Elementos[I+1];
                }
                L.N--;
                system("clear"); //Em caso de usar windows use "system("cls");" sem as aspas
        }

}

void Alterar(Lista &L){
        if(L.N==0) {
                RecursoVisual(10); //Recurso estético (Somente Linux, Se você é um usuário Windows comente ou delete)
                //cout << "Lista vazia!" << endl; //Descomente essa linha em caso de usar Windows
        }
        else{
                int P;
                int V;
                RecursoVisual(5); //Recurso estético (Somente Linux, Se você é um usuário Windows comente ou delete)
                cout << "Qual posição desja alterar?" << endl;
                cout << ">> ";
                cin >> P;
                while(P-1<0 or P-1>L.N) {
                        cout << "Posição Inválida!" << endl;
                        cout << ">> ";
                        cin >> P;
                }
                cout << "Qual a Valor do novo elemento?" << endl;
                cout << ">> ";
                cin >> V;
                L.Elementos[P-1] = V;
                system("clear"); //Em caso de usar windows use "system("cls");" sem as aspas
        }
}

int Verificar(Lista &L){
        if(L.N==0) {
                RecursoVisual(10); //Recurso estético (Somente Linux, Se você é um usuário Windows comente ou delete)
                //cout << "Lista vazia!" << endl; //Descomente essa linha em caso de usar Windows
        }
        else{
                int P;
                RecursoVisual(6); //Recurso estético (Somente Linux, Se você é um usuário Windows comente ou delete)
                cout << "Qual posição desja verificar?" << endl;
                cout << ">> ";
                cin >> P;
                while(P-1<0 or P-1>L.N) {
                        cout << "Posição Inválida!" << endl;
                        cout << ">> ";
                        cin >> P;
                }
                system("clear"); //Em caso de usar windows use "system("cls");" sem as aspas;
                RecursoVisual(6); //Recurso estético (Somente Linux, Se você é um usuário Windows comente ou delete)
                cout << "O valor encontrado nesta posição foi " << L.Elementos[P-1] << endl;
        }
}

void Localizar(Lista &L){
        if(L.N==0) {
                RecursoVisual(10); //Recurso estético (Somente Linux, Se você é um usuário Windows comente ou delete)
                //cout << "Lista vazia!" << endl; //Descomente essa linha em caso de usar Windows
        }
        else{
                int I;
                int V;
                int Aux=-1;
                RecursoVisual(7);         //Recurso estético (Somente Linux, Se você é um usuário Windows comente ou delete)
                cout << "Qual valor desja localizar?" << endl;
                cout << ">> ";
                cin >> V;
                system("clear"); //Em caso de usar windows use "system("cls");" sem as aspas;
                RecursoVisual(7); //Recurso estético (Somente Linux, Se você é um usuário Windows comente ou delete)
                for(I=0; I<L.N; I++) {
                        if(L.Elementos[I]==V) {
                                Aux++;
                                cout << "O valor foi encontrado na(s) posição(ões) " << I+1 << endl;
                        }
                }
                if(Aux==-1) {
                        cout << "Valor não encontrado na lista." << endl;
                }
        }

}


void Exibir(Lista &L){
        if(L.N==0) {
                RecursoVisual(10); //Recurso estético (Somente Linux, Se você é um usuário Windows comente ou delete)
                //cout << "Lista vazia!" << endl; //Descomente essa linha em caso de usar Windows
        }
        else{
                int I;
                RecursoVisual(8); //Recurso estético (Somente Linux, Se você é um usuário Windows comente ou delete)
                for(I=0; I<L.N; I++) {
                        cout << "\t" << L.Elementos[I];
                }
                cout << endl;
        }
}

void Opcao(Lista &L, int Escolha){
        switch(Escolha) {
        case 0:
                system("clear"); //Em caso de usar windows use "system("cls");" sem as aspas;
                system("exit"); //Em caso de usar windows delete esta linha;
                exit(0);
                break;
        case 1:
                system("clear"); //Em caso de usar windows use "system("cls");" sem as aspas;
                Criar(L);
                break;
        case 2:
                system("clear"); //Em caso de usar windows use "system("cls");" sem as aspas;
                Inserir(L);
                break;
        case 3:
                system("clear"); //Em caso de usar windows use "system("cls");" sem as aspas;
                Remover(L);
                break;
        case 4:
                system("clear"); //Em caso de usar windows use "system("cls");" sem as aspas;
                Alterar(L);
                break;
        case 5:
                system("clear"); //Em caso de usar windows use "system("cls");" sem as aspas
                Verificar(L);
                break;
        case 6:
                system("clear"); //Em caso de usar windows use "system("cls");" sem as aspas;
                Localizar(L);
                break;
        case 7:
                system("clear"); //Em caso de usar windows use "system("cls");" sem as aspas;
                Exibir(L);
                break;
        }
}

void Menu(Lista &L, int Escolha){
        RecursoVisual(1); //Recurso estético (Somente Linux, Se você é um usuário Windows comente ou delete)
        cout << "Escolha uma opção abaixo:" << endl;
        cout << "1 | Criar a lista;" << endl;
        cout << "2 | Inserir um elemento na k-ésima posição;" << endl;
        cout << "3 | Remover um elemento na k-ésima posição;" << endl;
        cout << "4 | Alterar um elemento da k-ésima posição;" << endl;
        cout << "5 | Verificar o valor do elemento na k-ésima posição;" << endl;
        cout << "6 | Localizar um valor;" << endl;
        cout << "7 | Exibir a lista;" << endl;
        cout << "0 | Sair;" << endl;
        cout << ">> ";
        cin >> Escolha;
        while(Escolha<0 or Escolha>7) {
                RecursoVisual(9); //Recurso estético (Somente Linux, Se você é um usuário Windows comente ou delete)
                //cout << "ERRO!" << endl; //Descomente essa linha em caso de usar Windows
                cout << ">> ";
                cin >> Escolha;
        }
        Opcao(L, Escolha);
}

main(){
        Lista L;
        int Escolha=-1;
        Menu(L, Escolha);
        while(Escolha!=0) {
                Menu(L, Escolha);
        }
}
