typedef struct Node { int x0; struct Node *next; } Node;
typedef struct Obj { int x0; int x4; Node *cur; } Obj;
extern void fn_82693C98(Obj *p);

Node *fn_82693E40(Obj *p)
{
    Node *n;
    if (p->cur == 0) {
        fn_82693C98(p);
    }
    n = p->cur;
    if (n != 0) {
        p->cur = n->next;
    }
    return n;
}
