extern void fn_8265CA20(void *);
extern char lbl_821C014C[];

typedef struct Ring_824B1F68 {
  char *first;
  char *last;
  char *cur;
  int pad;
  unsigned count;
} Ring_824B1F68;

typedef struct Obj_824B1F68 {
  void *vt;
  Ring_824B1F68 r;
} Obj_824B1F68;

void fn_824B1F68(Obj_824B1F68 *o)
{
  Ring_824B1F68 *r = &o->r;
  Ring_824B1F68 *q = &o->r;
  unsigned i = 0;
  char *c;
  o->vt = lbl_821C014C;
  if (q->count > 0) {
    do {
      c = q->cur;
      i++;
      r->cur = c + 0x30;
      if (r->cur == q->last) r->cur = o->r.first;
    } while (i < q->count);
  }
  if (r->first != 0) fn_8265CA20(r->first);
}
