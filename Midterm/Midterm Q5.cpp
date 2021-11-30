#include <iostream>
using namespace std;


class Student

SID: int
sname: string
scores: [0,1,2]


Student();
Student(int i, string name, double *sc);
getID(): int;
getName(): string;
getScores(): double *; 


template <class T>
pool: vector<T>;
    push(el: const T &): void
    pop(): T 
    topEl(): T &
    isEmpty(): bool
    size(): int