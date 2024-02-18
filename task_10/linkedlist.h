namespace fhdo_pk2{
template <class T> class LinkedList{
private:
struct element{
    T value;
    element *next;
    element(T value, element *next) : value{value}, next{next}{};
};
element* head;
element* tail;

template<class T>
class Iterator<T>{
    virtual bool hasNext() = 0;
    virtual T next() = 0; 
};
class ListIterator : Iterator<T>{
    private:
    element *current;
    public:
    ListIterator();
    ListIterator(const LinkedList &list);
    ~ListIterator();
    public:
    bool hasNext() override;
    T next() override; 
};

public:
LinkedList();
~LinkedList();
LinkedList(const LinkedList &copyList);
int append(T value);
int insert(T value, int p);
int remove(int p);
T get(int p);
int index_of(T value);
T first();
T last();
void visit_all(void (*work)(T value));
ListIterator* iterator();
};
}