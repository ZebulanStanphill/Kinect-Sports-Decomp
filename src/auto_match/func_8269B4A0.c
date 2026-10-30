typedef struct Node { int a; int b; int refs; } Node;
typedef struct Ref { Node *n; unsigned char flag; } Ref;
extern void fn_826944C8(Node *n);

Ref *fn_8269B4A0(Ref *self, Ref *other)
{
    Node *n = other->n;
    Node *old;
    n->refs++;
    old = self->n;
    if (--old->refs == 0) {
        fn_826944C8(old);
    }
    self->n = n;
    self->flag = other->flag;
    return self;
}
