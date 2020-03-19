#include <vector>
#include <iostream>
#include <ctime>     //pobieranie aktualnego czasu
#include <cstdlib>   //biblioteka z funkcja losujaca liczby calkowite
#include <fstream>   //obsluga plikow
#include <math.h>
using namespace std;
class PQ_heap{
    private:
        vector <int> klucze;
        void fixUp(int);
        void fixDown(int);
        int parent(int);
        int right(int);
        int left(int);
    public:
        PQ_heap();
        ~PQ_heap();
        bool empty();
        void insert(int);
        int get_max();
        void print();
        void drukujKopiec();
};

