#include "d_pqueue.h"
#include "preqrec.h"
#include <iostream>

using namespace std;


int main(){
srand(time(0));
miniPQ<procReqRec> mpq;
char process = 'A';
for(int i = 0; i < 10; i++){
int priority = rand() % 40;
string name = "Process ";
name = name + process;
procReqRec newReq = procReqRec(name,priority);
mpq.push(newReq);
process++;
}
for(int i = 0; i < 10; i++){
    cout << mpq.top();
    mpq.pop();
}





    return 0;
}

