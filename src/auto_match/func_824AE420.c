extern void fn_8265CA20(void *);
extern char lbl_821C0020[];

typedef struct Ring_824AE420 {
  char *first;
  char *last;
  char *cur;
  int pad;
  unsigned count;
} Ring_824AE420;

typedef struct Obj_824AE420 {
  void *vt;
  Ring_824AE420 r;
} Obj_824AE420;

void fn_824AE420(Obj_824AE420 *o)
{
  Ring_824AE420 *r = &o->r;
  Ring_824AE420 *q = &o->r;
  unsigned i = 0;
  char *c;
  o->vt = lbl_821C0020;
  if (q->count > 0) {
    do {
      c = q->cur;
      i++;
      r->cur = c + 0x40;
      if (r->cur == q->last) r->cur = o->r.first;
    } while (i < q->count);
  }
  if (r->first != 0) fn_8265CA20(r->first);
}
