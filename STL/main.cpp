#include "show_pq.h"
#define ROZMIAR 10000
#define DRUKUJ 7
int main() {
    ofstream wynik;
    wynik.open("zestawienie.txt");
srand(time(NULL));
priority_queue <int> kolejka;

//Testy
cout<<"Testy funkcji dla kolejki STL:\n";
cout<<"\nDzialanie .push()\nDzialanie show_pq()\n";
for(int i=0;i<DRUKUJ;i++){
    kolejka.push(rand()%100);
    show_pq(kolejka);
    }
cout<<"\nDzialanie .pop()\nDzialanie show_pq()\nDzialanie .top()\nDzialanie .size()\n";
for(int i=0; i<=DRUKUJ; i++){
    show_pq(kolejka);
    cout<<"\nObsl. element: "<<kolejka.top()<<endl;
    cout<<"Rozmiar kolejki: "<<kolejka.size()<<endl<<endl;
    kolejka.pop();
}

//Obliczenie czasu
cout<<"Trwa dzialanie funkcji dla "<<ROZMIAR<<" elementow\n";
unsigned int time_start=clock();
for(int i=0;i<ROZMIAR;i++)
    kolejka.push(rand()%100);
for(int i=1;i<ROZMIAR;i++)
    kolejka.pop();
unsigned int time_stop=clock();
wynik<<"Kolejka STL dla "<<ROZMIAR<<" elementow.\nCzas: "<<time_stop-time_start<<"ms";
cout<<"Wynik zapisany do pliku 'zestawienie.txt' \n\n";
wynik.close();
}
