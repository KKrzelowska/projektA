#include <vector>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
class PriorityQueue{
    private:
        vector <int> klucze;
    public:
        PriorityQueue();
        PriorityQueue(int);
        ~PriorityQueue();
        bool empty();
        void print();
        void insert(int);
        int get_max();
};

