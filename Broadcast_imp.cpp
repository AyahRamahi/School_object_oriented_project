#include <iostream>
#include "Broadcast.h"
using namespace std;

Broadcast::Broadcast(){
    arrow=0;
    for (int i=0 ; i<12 ; i++) classes[i]=i+1;
}

void Broadcast::classOfToday(){
    cout<<"Broadcast today for: "<<classes[arrow]<<endl;
    arrow=(arrow+1)%12;
}