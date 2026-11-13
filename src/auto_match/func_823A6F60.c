extern void fn_822315A0(void *);
extern void fn_8265CA20(void *);
typedef struct Node_823A6F60 { struct Node_823A6F60 *next; struct Node_823A6F60 *prev; int pad; void *data; } Node_823A6F60;
typedef struct { int pad0; Node_823A6F60 *L3; unsigned S3; int pad1; Node_823A6F60 *L2; unsigned S2; int pad2; Node_823A6F60 *L1; unsigned S1; } Obj_823A6F60;
void fn_823A6F60(Obj_823A6F60 *p)
{
  Node_823A6F60 *h, *n, *nx, **pl;
  pl = &p->L1;
  h = p->L1;
  n = h->next;
  h->next = h;
  p->L1->prev = p->L1;
  p->S1 = 0;
  if (n != p->L1) {
    do {
      nx = n->next;
      if (n->data != 0) {
        fn_822315A0(n->data);
      }
      fn_8265CA20(n);
      n = nx;
    } while (nx != (*pl));
  }
  fn_8265CA20(p->L1);
  pl = &p->L2;
  h = p->L2;
  n = h->next;
  h->next = h;
  p->L2->prev = p->L2;
  p->S2 = 0;
  if (n != p->L2) {
    do {
      nx = n->next;
      if (n->data != 0) {
        fn_822315A0(n->data);
      }
      fn_8265CA20(n);
      n = nx;
    } while (nx != (*pl));
  }
  fn_8265CA20(p->L2);
  pl = &p->L3;
  h = p->L3;
  n = h->next;
  h->next = h;
  p->L3->prev = p->L3;
  p->S3 = 0;
  if (n != p->L3) {
    do {
      nx = n->next;
      if (n->data != 0) {
        fn_822315A0(n->data);
      }
      fn_8265CA20(n);
      n = nx;
    } while (nx != (*pl));
  }
  fn_8265CA20(p->L3);
}
