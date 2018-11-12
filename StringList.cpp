#include <iostream>
#include "StringList.h"
using namespace std;

StringList::StringList()
{
    head = NULL;
}
StringList::~StringList()
{
    StringNode *del = head;
    head = head -> next;
    delete del;
}
int StringList::count()
{
   StringNode *current;
   int count = 0;
   current=head;
   while(current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}

void StringList::add(string movie)
{
    StringNode *newNode = new StringNode;
    newNode ->data = movie;
    newNode ->next= head;
    head = newNode;
}

void StringList::display()
{
    StringNode *display;
    display=head;
    while (display!=NULL)
    {
        cout << display ->data << " " << endl;
        display=display->next;
    }
}

bool StringList::remove(string movie)
{
    StringNode *p;
    StringNode *remove;
    remove = head;

    while(remove!=NULL)
    {
        if(remove -> data==movie)
        {
            delete remove;
            return true;
        }
        p->next= remove->next;
    }
    return false;
}
