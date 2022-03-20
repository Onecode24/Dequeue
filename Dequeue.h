// Partie sur le principe d'un tableau qui stock les valeurs inserer ou supprimer

#include <vector>

class Dequeue
{
private:
    /* data */
    std::vector<int> values;
public:
    Dequeue(/* args */);
    ~Dequeue();
    void addFront(int n);
    void addBack(int n);
    void removeFront();
    void removeBack();
    int getFront();
    int getBack();

};

