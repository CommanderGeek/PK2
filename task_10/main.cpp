#include "linkedlist.h"
#include <iostream>
#include <string>
void ausgabe(std::string text)
{
    std::cout << text << std::endl;
}
// Test der LinkedList-Klasse
int main()
{
    using namespace std;
    using namespace fhdo_pk2;
    LinkedList<string> liste ;
    liste.append("Element 1");
    liste.insert("Element 2", 2);
    LinkedList<string> liste2 = liste;
    cout << "Liste:" << endl;
    liste.visit_all(ausgabe);
    liste.remove(2);
    cout << "Liste:" << endl;
    liste.visit_all(ausgabe);
    cout << "Liste2:" << endl;
    liste2.visit_all(ausgabe);
    return 0;
}