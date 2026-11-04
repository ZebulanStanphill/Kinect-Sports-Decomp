extern void fn_8265CA20(void *);
extern char lbl_821BF850[];

typedef struct Ring_824A7658 {
  char *first;
  char *last;
  char *cur;
  int pad;
  unsigned count;
} Ring_824A7658;

typedef struct Obj_824A7658 {
  void *vt;
  Ring_824A7658 r;
} Obj_824A7658;

void fn_824A7658(Obj_824A7658 *o)
{
  Ring_824A7658 *r = &o->r;
  Ring_824A7658 *q = &o->r;
  unsigned i = 0;
  char *c;
  o->vt = lbl_821BF850;
  if (q->count > 0) {
    do {
      c = q->cur;
      i++;
      r->cur = c + 0xa0;
      if (r->cur == q->last) r->cur = o->r.first;
    } while (i < q->count);
  }
  if (r->first != 0) fn_8265CA20(r->first);
}
