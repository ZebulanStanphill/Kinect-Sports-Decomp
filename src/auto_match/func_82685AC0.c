typedef struct Node { struct Node *prev; struct Node *next; } Node;
typedef struct S { char pad[0x1c]; char s1c[0x1c]; Node list; char s40[4]; } S;
extern void fn_82685858(S *p);
extern void fn_82685698(S *p, Node *n);
extern void fn_82685948(void *p);
extern void fn_827B6200(void *p);

void fn_82685AC0(S *p)
{
    Node *h;
    fn_82685858(p);
    h = &p->list;
    while (h->next != h) {
        fn_82685698(p, p->list.next);
    }
    fn_82685948(p->s1c);
    fn_827B6200(p->s40);
}
