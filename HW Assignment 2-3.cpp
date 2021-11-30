#include <iostream>
#include <list>
#include <vector>
using namespace std;

void PrintListContents (const list <int>& listInput);
bool SortPredicate_Descending (const int& lsh, const int& rsh);

struct Students{
    int id;
    char name[10];
};

int main()
{

    std::list<int> students1;
    std::list<int>::iterator it;

    int RandomNums();
    {
        int *ptr1;
        int *ptr2;
        int *ptr3;

        int num1 = rand() % 100;
        int num2 = rand() % 100;
        int num3 = rand() % 100;

        ptr1 = &num1;
        ptr2 = &num2;
        ptr3 = &num3;

        cout << "Randy got " << ptr1 << " points." << endl;
        cout << "Mandy got " << ptr2 << " points." << endl;
        cout << "Sandy got " << ptr3 << " points." << endl;

    

            int sortNums();
            {
                students1.emplace_back(num1);
                students1.emplace_back(num2);
                students1.emplace_back(num3);

                students1.sort (SortPredicate_Descending); 
                

                

                
            }
    
                    int printNums();
                    {
                        cout << "Overall, here are all of the scores: "<< students1.size() << "." << endl;
                    }

                        int deleteNums();
                        {
                            students1.pop_front();
                            students1.pop_front();
                            students1.pop_front();
                        }
    }
}

