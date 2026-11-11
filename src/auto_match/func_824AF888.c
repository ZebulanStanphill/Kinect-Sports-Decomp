extern void fn_8265CA20(void *);
extern char lbl_821C006C[];

typedef struct Ring_824AF888 {
  char *first;
  char *last;
  char *cur;
  int pad;
  unsigned count;
} Ring_824AF888;

typedef struct Obj_824AF888 {
  void *vt;
  Ring_824AF888 r;
} Obj_824AF888;

void fn_824AF888(Obj_824AF888 *o)
{
  Ring_824AF888 *r = &o->r;
  Ring_824AF888 *q = &o->r;
  unsigned i = 0;
  char *c;
  o->vt = lbl_821C006C;
  if (q->count > 0) {
    do {
      c = q->cur;
      i++;
      r->cur = c + 0xf0;
      if (r->cur == q->last) r->cur = o->r.first;
    } while (i < q->count);
  }
  if (r->first != 0) fn_8265CA20(r->first);
}
