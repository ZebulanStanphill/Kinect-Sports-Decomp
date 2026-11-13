typedef struct Node_83019B78 { unsigned next; int value; } Node_83019B78;
typedef struct List_83019B78 { unsigned head; unsigned tail; unsigned free; int f0c; int f10; int count; } List_83019B78;
extern unsigned char fn_830198B8(List_83019B78 *);
#define NP(x) ((Node_83019B78 *)(x))
int *fn_83019B78(List_83019B78 *l, int v)
{
  Node_83019B78 *n;
  int *r;
  if (fn_830198B8(l) != 0) {
    if (l->tail == 0) l->head = l->free;
    else NP(l->tail)->next = l->free;
    n = NP(l->free);
    l->tail = l->free;
    l->free = n->next;
    NP(l->tail)->next = 0;
    l->count = l->count + 1;
    r = &NP(l->tail)->value;
    NP(l->tail)->value = v;
  } else {
    r = 0;
  }
  return r;
}
