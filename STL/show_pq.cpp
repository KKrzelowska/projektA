#include "show_pq.h"

void show_pq(priority_queue <int> gq){
    priority_queue <int> g=gq;
    while(!g.empty()){
        cout<<"\t"<<g.top();
        g.pop();}
        cout<<"\n";
}

