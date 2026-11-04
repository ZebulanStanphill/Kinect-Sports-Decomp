extern void fn_8265CA20(void *);
extern char lbl_821C00B8[];

typedef struct Ring_824B0CF8 {
  char *first;
  char *last;
  char *cur;
  int pad;
  unsigned count;
} Ring_824B0CF8;

typedef struct Obj_824B0CF8 {
  void *vt;
  Ring_824B0CF8 r;
} Obj_824B0CF8;

void fn_824B0CF8(Obj_824B0CF8 *o)
{
  Ring_824B0CF8 *r = &o->r;
  Ring_824B0CF8 *q = &o->r;
  unsigned i = 0;
  char *c;
  o->vt = lbl_821C00B8;
  if (q->count > 0) {
    do {
      c = q->cur;
      i++;
      r->cur = c + 0xd0;
      if (r->cur == q->last) r->cur = o->r.first;
    } while (i < q->count);
  }
  if (r->first != 0) fn_8265CA20(r->first);
}
