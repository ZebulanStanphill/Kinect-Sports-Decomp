typedef struct Node { int a; struct Node *next; int b, c; int data[1]; } Node;
typedef struct List { Node *head; int x; int count; } List;
extern int fn_8306BE58(int lo, int hi);
extern void fn_8305D7D0(void *d, void *out);

int fn_83068C70(List *l, int a, int b, void *out)
{
    int i;
    int k = fn_8306BE58(0, l->count - 1);
    Node *n = l->head;
    for (i = 0; i < k; i++) n = n->next;
    fn_8305D7D0(n->data, out);
    return 1;
}
