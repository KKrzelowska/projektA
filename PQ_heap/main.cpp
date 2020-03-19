#include "PQ_heap.h"
#define ROZMIAR 10000     //Osobny rozmiar dla obliczania wydajnosci
#define DRUKUJ 8          //Osobny dla wydruku
int main() {
    ofstream wynik;
    wynik.open("zestawienie.txt");

srand(time(NULL));

//Testy
cout<<"Testy funkcji dla tablicy uporzadkowanej kopcowo:\n";
cout<<"\nDzialanie .print()\nDzialanie .insert()\n";
PQ_heap stos1;                                       //wywolanie konstruktora
int klucze[DRUKUJ];
for(int i=0; i<DRUKUJ;i++){                         //zapelnienie tabelki klucze liczbami pseudolosowymi
    klucze[i]=rand()%100;
}
for(int i=0;i<DRUKUJ;i++){                                        //zapelnianie stosu pokazowego
        stos1.insert(klucze[i]);                                 //zawartoscia tabelki klucze wstawianymi w odpowiednie wezly stosu
        stos1.print();
        cout<<endl;
}
cout<<"Dzialanie .drukujKopiec()\n";
stos1.drukujKopiec();
cout<<"Dzialanie .empty() : "<<stos1.empty()<<endl<<endl;          //zwraca 0 kiedy stos niepusty
cout<<"Dzialanie .get_max()\nDzialanie .print()\n";
for(int i=0;i<DRUKUJ;i++){
        stos1.print();
        int c=stos1.get_max();
        cout<<"\nObsl. element: "<<c<<endl;
}

cout<<"\nDzialanie .empty() : "<<stos1.empty()<<endl<<endl;

//Obliczenie czasu
cout<<"Trwa dzialanie funkcji dla "<<ROZMIAR<<" elementow\n";
unsigned int time_start=clock();
PQ_heap stos;
for(int i=0;i<ROZMIAR;i++){
		stos.insert(rand()%100);
}
for(int i=1;i<ROZMIAR;i++)
        stos.get_max();
unsigned int time_stop=clock();
wynik<<"Tablica uporządkowana kopcowo dla "<<ROZMIAR<<" elementow.\nCzas: "<<time_stop-time_start<<"ms";
cout<<"Wynik zapisany do pliku 'zestawienie.txt' \n\n";
wynik.close();
return 0;

}

