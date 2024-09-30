class LinkedList{
private:
struct element{
    const char* value;
    element *next;
    element(const char* value, element *next) : value{value}, next{next}{};
};
element* head;
element* tail;

public:
LinkedList();
~LinkedList();
LinkedList(const LinkedList &copyList);
int append(const char* text);
int insert(const char* text, int p);
int remove(int p);
const char *get(int p);
int index_of(const char *text);
const char *first();
const char *last();
void visit_all(void (*work)(const char* t));
};