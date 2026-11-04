extern void fn_8265CA20(void *);
extern char lbl_821C00FC[];

typedef struct Ring_824B15D8 {
  char *first;
  char *last;
  char *cur;
  int pad;
  unsigned count;
} Ring_824B15D8;

typedef struct Obj_824B15D8 {
  void *vt;
  Ring_824B15D8 r;
} Obj_824B15D8;

void fn_824B15D8(Obj_824B15D8 *o)
{
  Ring_824B15D8 *r = &o->r;
  Ring_824B15D8 *q = &o->r;
  unsigned i = 0;
  char *c;
  o->vt = lbl_821C00FC;
  if (q->count > 0) {
    do {
      c = q->cur;
      i++;
      r->cur = c + 0x20;
      if (r->cur == q->last) r->cur = o->r.first;
    } while (i < q->count);
  }
  if (r->first != 0) fn_8265CA20(r->first);
}
