extern void fn_8265CA20(void *);
extern char lbl_821C01DC[];

typedef struct Ring_824B3E60 {
  char *first;
  char *last;
  char *cur;
  int pad;
  unsigned count;
} Ring_824B3E60;

typedef struct Obj_824B3E60 {
  void *vt;
  Ring_824B3E60 r;
} Obj_824B3E60;

void fn_824B3E60(Obj_824B3E60 *o)
{
  Ring_824B3E60 *r = &o->r;
  Ring_824B3E60 *q = &o->r;
  unsigned i = 0;
  char *c;
  o->vt = lbl_821C01DC;
  if (q->count > 0) {
    do {
      c = q->cur;
      i++;
      r->cur = c + 0x190;
      if (r->cur == q->last) r->cur = o->r.first;
    } while (i < q->count);
  }
  if (r->first != 0) fn_8265CA20(r->first);
}
