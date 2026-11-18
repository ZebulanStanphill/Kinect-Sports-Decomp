typedef struct Node_82FB64A8 Node_82FB64A8;

typedef struct NodeVt_82FB64A8 {
    void *pad0[5];
    int (*getType)(Node_82FB64A8 *self); /* 0x14 */
} NodeVt_82FB64A8;

struct Node_82FB64A8 {
    NodeVt_82FB64A8 *vt;
    int f4;
    int f8;
    unsigned int id;     /* 0x0c */
    Node_82FB64A8 *next; /* 0x10 */
};

typedef struct Entry_82FB64A8 {
    unsigned int a;
    unsigned int b;
    char pad[0x2c];
} Entry_82FB64A8;

typedef struct Vec_82FB64A8 {
    Entry_82FB64A8 *begin;
    Entry_82FB64A8 *end;
} Vec_82FB64A8;

typedef struct Graph_82FB64A8 {
    char pad[0xa0];
    Vec_82FB64A8 entries; /* 0xa0 */
} Graph_82FB64A8;

static __forceinline int Size(const Vec_82FB64A8 *v)
{
    return (int)(v->end - v->begin);
}

Entry_82FB64A8 *fn_82FB64A8(Graph_82FB64A8 *self, Node_82FB64A8 *stop, unsigned int idA,
                            Node_82FB64A8 *listA, unsigned int idB, Node_82FB64A8 *listB,
                            unsigned char *out)
{
    int i;
    Entry_82FB64A8 *e;
    Node_82FB64A8 *n;
    unsigned int v;
    Node_82FB64A8 *found;

    i = Size(&self->entries) - 1;
    if (i >= 0) {
        e = &self->entries.begin[i];
        do {
            v = e->a;
            if (v != (unsigned int)-1 && v != idA) {
                for (n = listA; n != 0 && n != stop; n = n->next) {
                    if (n->id == v)
                        goto checkB;
                }
                goto next;
            }
        checkB:
            v = e->b;
            found = 0;
            if (v != (unsigned int)-1 && v != idB) {
                for (n = listB; n != 0 && n != stop; n = n->next) {
                    if (n->id == v) {
                        found = n;
                        break;
                    }
                }
                if (found == 0)
                    goto next;
            }
            if (found != 0 && found->vt->getType(found) == 8) {
                *out = 1;
            } else {
                *out = 0;
            }
            return e;
        next:
            e--;
        } while (--i >= 0);
    }
    return self->entries.begin;
}
