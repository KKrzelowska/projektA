#include "PQ.h"
#define ROZMIAR 10000    //sta³a zmienna sprawdzaj¹ca kolejke dla 10000 elementów
#define DRUKUJ 7         //stala zmienna umozliwiajaca przejrzyste pokazanie dzi¹³ania programu w konsoli
int main() {
    ofstream wynik;
    wynik.open("zestawienie.txt");     //tworzenie i otwieranie pliku wynikowego

srand(time(NULL));                    //powi¹zanie funkcji rand() z czasem rzeczywistym co zapewnia pseudolosowosc
PriorityQueue PQ;                     //Wywo³anie konstruktora kolejki
int klucze[DRUKUJ];                   //tworzenie tablicy do której generowane bêd¹ liczby losowe
for(int i=0;i<DRUKUJ;i++){
    klucze[i]=rand()%100;             //zape³nianie tablicy za pomoc¹ funkcji rand()
}
//Testy
cout<<"Testy funkcji dla zwyklej tablicy:\n";
cout<<"\nDzialanie .print()\nDzialanie .insert()\n";
for(int i=1;i<DRUKUJ;i++){
        PQ.insert(klucze[i]);         //Za pomoc¹ metody insert do kolejki dodawane sa kolejne elementy tablicy
        PQ.print();
        cout<<endl;
}

cout<<"Dzialanie .empty() : "<<PQ.empty()<<endl<<endl;
cout<<"Dzialanie .get_max()\nDzialanie .print()\n";
for(int i=0;i<DRUKUJ-1;i++){
        PQ.print();
        int c=PQ.get_max();
        cout<<"\nObsl. element: "<<c<<endl;
}
cout<<"\nDzialanie .empty() : "<<PQ.empty()<<endl<<endl;

//Obliczenie czasu
cout<<"Trwa dzialanie funkcji dla "<<ROZMIAR<<" elementow\n";
unsigned int time_start=clock();
for(int i=0;i<ROZMIAR;i++)
		PQ.insert(rand()%100);
for(int i=1;i<ROZMIAR;i++)
        PQ.get_max();
unsigned int time_stop=clock();
wynik<<"Zwykla tablica dla "<<ROZMIAR<<" elementow.\nCzas: "<<time_stop-time_start<<"ms";
cout<<"Wynik zapisany do pliku 'zestawienie.txt' \n\n";
wynik.close();

return 0;

}
