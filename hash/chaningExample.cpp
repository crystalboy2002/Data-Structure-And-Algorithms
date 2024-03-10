#include <iostream>
#include <list>

using namespace std;

struct myHash
{
    int bucket;
    // taking pointer to list{data type to store link list}
    list<int> *table;
    myHash(int b)
    {
        bucket = b;
        table = new list<int>[b];
    }

    void insert(int key)
    {
        int i = key % bucket; // to get index of link list;
        table[i].push_back(key);
    }
    bool search(int key)
    {
        int i = key % bucket; // to get index of link list;
        for (auto x : table[i])
        {
            if (x == key)
            {
                return true;
            }
        }
        return false;
    }

    void remove(int key)
    {
        int i = key % bucket; // to get index of link list;
        table[i].remove(key);
    }
};
int main()
{
    int size = 10;
    myHash hashTable(size);
    hashTable.insert(10);
    hashTable.insert(20);
    cout << hashTable.search(50);
}