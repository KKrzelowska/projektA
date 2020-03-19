#include "PQ.h"
PriorityQueue::PriorityQueue(){       //konstruktor kolejki
    vector<int> klucze;
}
PriorityQueue::PriorityQueue(int ){    //konstruktor kolejki z parametrem
    vector<int> klucze;
}
PriorityQueue::~PriorityQueue(){    //destruktor kolejki
    klucze.clear();
}
bool PriorityQueue::empty() {       //metoda klasy ktora sprawdza czy kolejka jest pusta
    return klucze.empty();
}
void PriorityQueue::print(){                //metoda klasy która drukuje kolejke
	for (int i = 0; i < klucze.size(); i++)
        cout<<"\t"<<klucze[i];
}

void PriorityQueue::insert(int x){        //metoda klasy która wstawia element
	klucze.push_back(x);                  //na koniec kolejki
}


int PriorityQueue::get_max(){             //metoda klasy która pobiera klucz o najwiekszej wartosci
	int najwiekszy = 0;
	int indeks = 0;
    for(int y = 0;y < klucze.size();y++){   //iterujemy po zawartosci kolejki
        if(klucze[y] > najwiekszy){         //jesli klucz o danym indeksie ma większą wartość niż zmienna najwiekszy
            najwiekszy = klucze[y];         //zapisz go jako zmienna najwiekszy
            indeks = y;                     //zapisz indeks klucza do zmiennej indeks
        }
    }
    klucze.erase(klucze.begin()+indeks);       //usun klucz o indeksie najwiekszego elementu
	return najwiekszy;                         //zwroc wartosc zmiennej najwiekszy
}
