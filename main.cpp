
#include <iostream>
#include <string>
using namespace std;
// Node structure for each contact
struct Contact {
string name;
string phone;
Contact* next;
};
// Class to handle contact list operations
class ContactList {
private:
Contact* head;
public:
ContactList() {
head = nullptr;
}