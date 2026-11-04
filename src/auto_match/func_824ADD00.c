extern void fn_8265CA20(void *);
extern char lbl_821BFFD0[];

typedef struct Ring_824ADD00 {
  char *first;
  char *last;
  char *cur;
  int pad;
  unsigned count;
} Ring_824ADD00;

typedef struct Obj_824ADD00 {
  void *vt;
  Ring_824ADD00 r;
} Obj_824ADD00;

void fn_824ADD00(Obj_824ADD00 *o)
{
  Ring_824ADD00 *r = &o->r;
  Ring_824ADD00 *q = &o->r;
  unsigned i = 0;
  char *c;
  o->vt = lbl_821BFFD0;
  if (q->count > 0) {
    do {
      c = q->cur;
      i++;
      r->cur = c + 0x60;
      if (r->cur == q->last) r->cur = o->r.first;
    } while (i < q->count);
  }
  if (r->first != 0) fn_8265CA20(r->first);
}
