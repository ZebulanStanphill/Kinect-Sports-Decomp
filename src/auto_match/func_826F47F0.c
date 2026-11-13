void __emit(unsigned int opcode);
#define __lwsync() __emit(0x7C2004AC)

typedef struct Node_826F47F0 { int pad0[2]; int f8; struct Node_826F47F0 *next; } Node_826F47F0;
typedef struct Lst_826F47F0 { char pad[0x18]; Node_826F47F0 *head; Node_826F47F0 *tail; } Lst_826F47F0;
typedef struct Sub_826F47F0 { char pad[0x88]; Lst_826F47F0 lst; } Sub_826F47F0;
typedef struct Self_826F47F0 { char pad[0x20]; Sub_826F47F0 *f20; char pad24[0x2b4]; Node_826F47F0 *f2d8; } Self_826F47F0;
typedef struct Other_826F47F0 { int pad; int f4; } Other_826F47F0;

extern void fn_826862E0(Node_826F47F0 *, int);
extern void fn_826DDD10(Other_826F47F0 *, Sub_826F47F0 *, int *);
extern Node_826F47F0 *fn_826F44D0(Sub_826F47F0 *);

Other_826F47F0 *fn_826F47F0(Other_826F47F0 *o, Self_826F47F0 *self, int *src, int p4)
{
  int tmp;
  Node_826F47F0 *n;
  Sub_826F47F0 *sub;
  Lst_826F47F0 *l;
  Node_826F47F0 *h;

  tmp = *src;
  fn_826DDD10(o, self->f20, &tmp);
  sub = self->f20;
  l = &sub->lst;
  n = fn_826F44D0(sub);
  if (n != 0) {
    fn_826862E0(n, p4);
    n->f8 = o->f4;
    if (self->f2d8 == 0) {
      self->f2d8 = n;
    }
    h = l->head;
    __lwsync();
    if (h == 0) {
      __lwsync();
      l->head = n;
    } else {
      h = l->tail;
      __lwsync();
      h->next = n;
    }
    l->tail = n;
    *(int *)((char *)self + 0x2c8) = *(int *)((char *)self + 0x2c8) + 1;
  }
  return o;
}
