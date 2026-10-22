extern void fn_822315A0(void *);
extern void fn_82265538(void *);
extern void fn_822746B8(void *, int);
extern void fn_824A7FF8(void *);
extern void fn_8265CA20(void *);

typedef struct Node { struct Node *next; struct Node *prev; void *item; } Node;
typedef struct { Node *head; int a; int b; } List;
typedef struct { int x0; void *x4; } Sub;
typedef struct {
  List l0;        /* 0x00 */
  List l1;        /* 0x0c */
  void *x18;      /* 0x18 */
  char pad[0x50 - 0x1c];
  int x50;        /* 0x50 */
  char pad2[0x6c - 0x54];
  Sub *x6c;       /* 0x6c */
} Obj;

Obj *fn_82267130(Obj *p)
{
  Node *n;
  void *it;
  Sub *s;

  for (n = p->l0.head->next; n != p->l0.head; n = n->next) {
    it = n->item;
    if (it != 0) {
      fn_82265538(it);
      fn_8265CA20(it);
    }
  }
  for (n = p->l1.head->next; n != p->l1.head; n = n->next) {
    it = n->item;
    if (it != 0) {
      fn_82265538(it);
      fn_8265CA20(it);
    }
  }
  fn_822746B8(p->x18, p->x50);
  p->x18 = 0;
  s = p->x6c;
  if (s != 0) {
    if (s->x4 != 0)
      fn_822315A0(s->x4);
    fn_8265CA20(s);
    p->x6c = 0;
  }
  fn_824A7FF8(&p->l1);
  fn_824A7FF8(&p->l0);
  fn_8265CA20(p);
  return p;
}
