#include <string>
using namespace std;

class StringList
{
  private:
    struct StringNode          // the Nodes of the linked list
    {
        string data;           // data is a string
        StringNode *next;      // points to next node in list
    };

    StringNode *head;           // the head pointer

  public:
    StringList();
    ~StringList();

    int count();
    void add(string);
    bool remove(string);
    void display();
    string minimum();
    void sort();
};
