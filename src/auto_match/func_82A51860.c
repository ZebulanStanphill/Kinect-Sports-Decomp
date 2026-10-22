typedef struct Node { unsigned int value; struct Node *next; } Node;
typedef struct List { char pad[0x18]; Node *head; } List;
typedef struct Owner { char pad[0x50]; List list; } Owner;
typedef struct Item { int pad; Owner *owner; int *data; } Item;
typedef struct Self { char pad[8]; int queue; char pad2[0x30 - 0xc]; int ctx; } Self;

extern void fn_82A403E8(int ctx, int v);
extern Item *fn_82A40BA8(int *q);
extern void fn_82A47B28(List *l, Node *n);
extern void fn_82A4F4E0(Item *it);
extern void fn_82A51260(Item *it);

static Node *List_find(List *l, unsigned int v)
{
    Node *n;
    for (n = l->head; n != 0; n = n->next)
        if (n->value == v)
            return n;
    return 0;
}

static void List_removeValue(List *l, unsigned int v)
{
    fn_82A47B28(l, List_find(l, v));
}

void fn_82A51860(Self *self)
{
    Item *it;
    while ((it = fn_82A40BA8(&self->queue)) != 0) {
        List_removeValue(&it->owner->list, (unsigned int)self);
        fn_82A403E8(self->ctx, *it->data);
        fn_82A51260(it);
        fn_82A4F4E0(it);
    }
}
