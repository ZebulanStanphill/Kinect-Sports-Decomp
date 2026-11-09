extern void fn_8265CA20(void *);

typedef struct Ring_8230D470 {
  char *first;
  char *last;
  char *cur;
  int pad;
  unsigned count;
} Ring_8230D470;

typedef struct Obj_8230D470 {
  char pad[0x90];
  Ring_8230D470 r;
} Obj_8230D470;

void fn_8230D470(Obj_8230D470 *o)
{
  Ring_8230D470 *r = &o->r;
  Ring_8230D470 *q = &o->r;
  unsigned i = 0;
  char *c;
  if (q->count > 0) {
    do {
      c = q->cur;
      i++;
      r->cur = c + 4;
      if (r->cur == q->last) r->cur = o->r.first;
    } while (i < q->count);
  }
  if (r->first != 0) fn_8265CA20(r->first);
}
