#include <iostream>
#include "StringList.h"
using namespace std;

StringList::StringList()
{
    StringNode *head = NULL;
}
StringList::~StringList()
{
    StringNode *del = head;
    head = head -> next;
    delete del;
}
int StringList::count()
{
   int count =0;
   StringNode *current;
   current = head;
   while(current !=NULL)
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
    newNode ->next= NULL;
}

void StringList::display()
{
    StringNode *display;
    display=head;
    while (display!=NULL)
    {
        cout << display ->data << " ";
        display=display->next;
    }
}
