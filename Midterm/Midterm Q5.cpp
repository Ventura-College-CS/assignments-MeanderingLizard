#include <iostream>
using namespace std;


class Student

    SID: int
    SName: string
    scores: [0,1,2] //should be a double array for 3 scores


        Student();
        Student(int i, string , double *sc);
        getID(): int
        getName(): string;
        getScores(): double *

//Visual seperator

template <class T>
class stack
    pool: vector<T>;
        Stack();
        push(el: const T &): void;
        pop(): T 
        topEl(): T &
        isEmpty(): bool
        size(): int