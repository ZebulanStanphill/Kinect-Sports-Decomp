typedef struct Node_828B4690 { struct Node_828B4690 *next, *prev; unsigned int val; } Node_828B4690;
typedef struct List_828B4690 { Node_828B4690 *head; int size; } List_828B4690;
typedef struct Obj_828B4690 { char pad[0x20]; List_828B4690 l; } Obj_828B4690;
typedef struct It_828B4690 { Node_828B4690 *p; List_828B4690 *l; } It_828B4690;
extern void fn_8265CA20(void *p);

static void Find(List_828B4690 *l, It_828B4690 *out, unsigned int v)
{
    Node_828B4690 *head = l->head;
    Node_828B4690 *n;
    for (n = head->next; n != head; n = n->next) { if (n->val == v) break; }
    out->p = n;
    out->l = l;
}
void fn_828B4690(Obj_828B4690 *o, unsigned int v)
{
    List_828B4690 *l = &o->l;
    It_828B4690 it;
    Node_828B4690 *n;
    Find(l, &it, v);
    n = it.p;
    if (n != it.l->head) {
        n->prev->next = n->next;
        n->next->prev = n->prev;
        fn_8265CA20(n);
        l->size--;
    }
}

