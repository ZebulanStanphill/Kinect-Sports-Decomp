extern int fn_827B7AE0();

typedef struct Node_827B7BF8 {
  struct Node_827B7BF8 *next;
  struct Node_827B7BF8 *prev;
  unsigned *blk;
  struct Node_827B7BF8 *a;
  struct Node_827B7BF8 *b;
  struct Node_827B7BF8 *c;
  struct Node_827B7BF8 *d;
  int pad1c;
  unsigned short flags;
  unsigned short pad22;
  unsigned short f24;
} Node_827B7BF8;

typedef struct { char pad[0xc]; unsigned *head; } Pool_827B7BF8;
typedef struct { Node_827B7BF8 *next; Node_827B7BF8 *prev; } Sent_827B7BF8;
typedef struct {
  char pad0[0x1c];
  Pool_827B7BF8 p1c;
  char pad2c[0x30 - 0x2c];
  Sent_827B7BF8 s30;
  int f38;
  char pad3c[0x64 - 0x3c];
  Pool_827B7BF8 p64;
} Obj_827B7BF8;

static void push_(Pool_827B7BF8 *p, unsigned *blk) { *blk = (unsigned)p->head; p->head = blk; }

void fn_827B7BF8(Obj_827B7BF8 *o, Node_827B7BF8 *first, Node_827B7BF8 *last, int v)
{
  Node_827B7BF8 *n = first;
  Node_827B7BF8 *nx;
  unsigned *blk;
  Sent_827B7BF8 *sp;
  for (;;) {
    nx = n->b;
    fn_827B7AE0(o, n);
    if (n != first) {
      blk = n->blk;
      push_(&o->p64, blk);
      n->next->prev = n->prev;
      n->prev->next = n->next;
      o->f38 = o->f38 - 1;
      if ((n->flags & 0x4000) == 0) {
        n->c->d = n->d;
        n->d->c = n->c;
      }
      n->a->b = n->b;
      n->b->a = n->a;
      push_(&o->p1c, (unsigned *)n);
    }
    if (n == last) break;
    n = nx;
  }
  sp = &o->s30;
  first->f24 = v;
  *(unsigned short *)((char *)first->blk + 0x1c) = v;
  first->next->prev = first->prev;
  first->prev->next = first->next;
  first->prev = sp->prev;
  first->next = (Node_827B7BF8 *)sp;
  sp->prev->next = first;
  sp->prev = first;
}
