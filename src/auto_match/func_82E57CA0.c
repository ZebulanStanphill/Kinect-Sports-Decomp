typedef struct Node { struct Node *next; struct Node *prev; } Node;
typedef struct S { char pad[0xc]; unsigned int count; Node *first; } S;
extern void fn_82E579E0(S *p);
extern void fn_82E4FE40(void *p);

void fn_82E57CA0(S *p)
{
    fn_82E579E0(p);
    while (p->count != 0) {
        Node *n, *next, *prev;
        n = p->first;
        p->count--;
        next = p->first->next;
        prev = p->first->prev;
        prev->next = next;
        next->prev = prev;
        if (n != 0) {
            fn_82E4FE40(n);
        }
    }
}
