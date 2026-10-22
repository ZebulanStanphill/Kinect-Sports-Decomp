extern void fn_829E9F88(void *e, int flag);
extern void fn_82A28E60(void *heap, int flags, void *p);
extern char *lbl_832179FC;

typedef struct { char b[0x24]; } Elem;

typedef struct {
  void *mem;
  Elem *first;
  Elem *last;
  int cap;
} Vec;

void fn_829EABB8(Vec *v)
{
  Elem *end = v->last;
  Elem *p;
  for (p = v->first; p != end; p++) {
    fn_829E9F88(p, 0);
  }
  if (v->mem != 0) {
    fn_82A28E60(*(void **)(lbl_832179FC + 0x8f4cc), 0, v->mem);
  }
  v->cap = 0;
  v->first = 0;
  v->last = 0;
  v->mem = 0;
}
