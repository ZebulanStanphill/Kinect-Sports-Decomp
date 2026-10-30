typedef struct Node_8275D0F8 { struct Node_8275D0F8 *next; } Node_8275D0F8;
typedef struct List_8275D0F8 { Node_8275D0F8 *head; int f4; short f8; } List_8275D0F8;
extern void fn_8267BE38(void *p);

void fn_8275D0F8(List_8275D0F8 *l)
{
    Node_8275D0F8 *p, *next;
    for (p = l->head; p != 0; p = next) { next = p->next; fn_8267BE38(p); }

    l->head = 0;
    l->f4 = 0;
    l->f8 = 0;
}
