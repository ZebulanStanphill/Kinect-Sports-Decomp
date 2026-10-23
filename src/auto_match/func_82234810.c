typedef struct Node Node;
typedef struct {
    void *slot[5];
    void (*Serialize)(Node *self, void *s, int flag);
} NodeVtbl;
struct Node {
    NodeVtbl *vtbl;
};

typedef struct {
    char pad0[0x68];
    Node *a;
    int pad6c;
    Node *b;
    int pad74;
    Node *c;
    int pad7c;
    Node *d;
    int pad84;
    Node *e;
} Obj;

extern int fn_828E9D90(void *s);
extern void fn_828E9D60(void *s, int pos);

int fn_82234810(Obj *self, void *s)
{
    int start;
    int size;

    start = fn_828E9D90(s);
    self->a->vtbl->Serialize(self->a, s, 0);
    self->b->vtbl->Serialize(self->b, s, 0);
    self->c->vtbl->Serialize(self->c, s, 0);
    self->d->vtbl->Serialize(self->d, s, 0);
    self->e->vtbl->Serialize(self->e, s, 0);
    size = fn_828E9D90(s) - start;
    fn_828E9D60(s, start);
    return size;
}
