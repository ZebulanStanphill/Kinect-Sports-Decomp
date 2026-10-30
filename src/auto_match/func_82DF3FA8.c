typedef struct { char pad[8]; void *owner; } Node;
typedef struct { char pad[8]; char link[4]; unsigned char flags; char pad2[3]; Node *node; } Obj;
typedef struct { int v[4]; } Tmp;

extern void fn_82D81240(Tmp *t, void *owner, Node *n);
extern void fn_82D89B48(Node *n, void *link);

void fn_82DF3FA8(Obj *p)
{
    if (p->node) {
        Tmp t;
        fn_82D81240(&t, p->node->owner, p->node);
        if (p->flags & 4) {
            fn_82D89B48(p->node, p->link);
        }
    }
}
