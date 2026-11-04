inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Heap_827E8528 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void *Alloc(unsigned int size, void *ctx);
};

struct Allocator_827E8528 {
    Heap_827E8528 *heap;
    int ctx;
    void *allocate(unsigned int n) { return heap->Alloc(n, &ctx); }
};

struct Value_827E8528 {
    int v;
};

struct Node_827E8528 {
    int next;
    int prev;
    Value_827E8528 val;
};

struct List_827E8528 {
    int x0;
    int x4;
    Allocator_827E8528 alloc;
};

extern "C" void fn_827E8528(List_827E8528 *l, int next, int prev, const Value_827E8528 *val)
{
    Node_827E8528 *n = (Node_827E8528 *)l->alloc.allocate(sizeof(Node_827E8528));
    n->next = next;
    n->prev = prev;
    ::new ((void *)&n->val) Value_827E8528(*val);
}
