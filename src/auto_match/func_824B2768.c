extern void fn_8265CA20(void *);
extern char lbl_821C0198[];

typedef struct Ring_824B2768 {
  char *first;
  char *last;
  char *cur;
  int pad;
  unsigned count;
} Ring_824B2768;

typedef struct Obj_824B2768 {
  void *vt;
  Ring_824B2768 r;
} Obj_824B2768;

void fn_824B2768(Obj_824B2768 *o)
{
  Ring_824B2768 *r = &o->r;
  Ring_824B2768 *q = &o->r;
  unsigned i = 0;
  char *c;
  o->vt = lbl_821C0198;
  if (q->count > 0) {
    do {
      c = q->cur;
      i++;
      r->cur = c + 0x50;
      if (r->cur == q->last) r->cur = o->r.first;
    } while (i < q->count);
  }
  if (r->first != 0) fn_8265CA20(r->first);
}
