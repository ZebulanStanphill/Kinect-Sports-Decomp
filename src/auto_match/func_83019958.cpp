inline void *operator new(unsigned int, void *p) throw() { return p; }
struct Val_83019958 {
    int a[4];
    int x, y, z;
    Val_83019958() : x(0), y(0), z(0) {}
};
struct Node_83019958 {
    Node_83019958 *next;
    Val_83019958 value;
};
struct List_83019958 {
    int pad0;
    int pad4;
    Node_83019958 *head;
    int pad0c;
    unsigned max;
    unsigned size;
    int pad18;
    void *alloc;
};
extern "C" {
Node_83019958 *fn_82FA5060(void *, int);
int fn_83019958(List_83019958 *l)
{
    if (l->head != 0) return 1;
    if (l->size < l->max) {
        Node_83019958 *n = fn_82FA5060(l->alloc, 0x20);
        if (n != 0) {
            ::new ((void *)&n->value) Val_83019958();
            n->next = l->head;
            l->head = n;
            return 1;
        }
    }
    return 0;
}
}
