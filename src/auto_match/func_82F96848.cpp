struct Node_82F96768;
struct Tree_82F96768;

struct Iter_82F96768 {
    Node_82F96768 *node;
    const Tree_82F96768 *cont;
    Iter_82F96768 operator++(int);
};

struct Tree_82F96768 {
    char comp;
    char alnod;
    char alptr;
    Node_82F96768 *head;
    unsigned int size;

    Iter_82F96768 begin();
    Iter_82F96768 end();
    void clear();
    Iter_82F96768 erase(Iter_82F96768 position);
    Iter_82F96768 erase(Iter_82F96768 first, Iter_82F96768 last);
};

extern "C" unsigned char fn_82F921A0(const Iter_82F96768 *, const Iter_82F96768 &);
extern "C" unsigned char fn_82F952E8(const Iter_82F96768 *, const Iter_82F96768 *);

Iter_82F96768 Tree_82F96768::erase(Iter_82F96768 first, Iter_82F96768 last)
{
    if (fn_82F921A0(&first, this->begin()) && fn_82F921A0(&last, this->end())) {
        this->clear();
        return this->begin();
    } else {
        while (fn_82F952E8(&first, &last)) {
            this->erase(first++);
        }
        return first;
    }
}
