inline void *operator new(unsigned int, void *p) throw() { return p; }
struct Val_830312C0 {
    int a[1];
    int x, y, z;
    Val_830312C0() : x(0), y(0), z(0) {}
};
struct Node_830312C0 {
    Node_830312C0 *next;
    Val_830312C0 value;
};
struct List_830312C0 {
    int pad0;
    int pad4;
    Node_830312C0 *head;
    int pad0c;
    unsigned max;
    unsigned size;
    int pad18;
    void *alloc;
};
extern "C" {
Node_830312C0 *fn_82FA5060(void *, int);
int fn_830312C0(List_830312C0 *l)
{
    if (l->head != 0) return 1;
    if (l->size < l->max) {
        Node_830312C0 *n = fn_82FA5060(l->alloc, 0x14);
        if (n != 0) {
            ::new ((void *)&n->value) Val_830312C0();
            n->next = l->head;
            l->head = n;
            return 1;
        }
    }
    return 0;
}
}
