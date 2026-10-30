typedef struct { int f0; int f4; int f8; int f0c; int f10; int f14; int f18; int f1c; int f20; int f24; int f28; int f2c; int f30; } Val_83019AB0;
typedef struct Node_83019AB0 Node_83019AB0;
struct Node_83019AB0 { Node_83019AB0 *next; Val_83019AB0 v; };
typedef struct {
    int pad0[2];
    Node_83019AB0 *head;
    int pad0c;
    unsigned cap;
    unsigned count;
    int pad18;
    void *heap;
} Pool_83019AB0;
extern Node_83019AB0 *fn_82FA5060(void *heap, int size);

int fn_83019AB0(Pool_83019AB0 *p)
{
    Node_83019AB0 *n;
    Val_83019AB0 *v;

    if (p->head != 0)
        return 1;
    if (p->count < p->cap && (n = fn_82FA5060(p->heap, 0x38)) != 0) {
        v = &n->v;
        if (v != 0) {
            v->f8 = 0;
            v->f0c = 0;
            v->f10 = 0;
            v->f20 = 0;
            v->f24 = 0;
            v->f28 = 0;
            v->f30 = -1;
        }
        n->next = p->head;
        p->head = n;
        return 1;
    }
    return 0;
}
