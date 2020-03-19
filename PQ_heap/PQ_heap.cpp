#include "PQ_heap.h"
PQ_heap::PQ_heap(){
    vector<int> klucze;
}
PQ_heap::~PQ_heap(){
    klucze.clear();
}
bool PQ_heap::empty() {
    return klucze.empty();
}
int PQ_heap::left(int i){
	return 2*i;
}
int PQ_heap::right(int i ){
	return 2*i+1;
}
int PQ_heap::parent(int i){
	return i/2;
}
void PQ_heap::fixUp(int i){
	while (i >=1 && (klucze[parent(i)] < klucze[i])) {
            swap(klucze[parent(i)], klucze[i]);
		    i = parent(i);
	}}
void PQ_heap::fixDown(int i){
    int j=0;
    while(left(i)+1<klucze.size()-1) {
            if(klucze[left(i)+1]>klucze[right(i)+1])
                j=left(i)+1;
            else
                j=right(i)+1;
            if(klucze[j]>klucze[i])
                swap(klucze[i], klucze[j]);
            i=j;
            }
    }
void PQ_heap::insert(int x){
	klucze.push_back(x);
	fixUp(klucze.size()-1);
}

int PQ_heap::get_max(){
    int element=klucze[0];
	swap(klucze[0], klucze[klucze.size()-1]);
	klucze.pop_back();
	if(klucze.size()>0){
	    fixDown(0);
	}
	return element;
}
void PQ_heap::print(){
	for (int i = 0; i < klucze.size(); i++)
		cout <<"\t"<<klucze[i]<<' ';
}
void PQ_heap::drukujKopiec(){
    int y=0;
    for(int x=0;x<log2(klucze.size());x++){
        for(int n=0;n<pow(2,x);n++){
            if(y<klucze.size())
                cout<<klucze[y]<<'\t';
            y++;
          }
        cout<<endl;
    }
}
