extern void *fn_82FA5060(void *heap, unsigned int size);
extern void *lbl_831BC768;
typedef struct { int f0; int *begin; int *cur; unsigned int cap; unsigned int count; } Obj;
int fn_8301B560(Obj *o, unsigned int n)
{
  int *p;
  unsigned int c = n ? n : 0xff;
  o->count = c;
  if (c != 0) {
    p = fn_82FA5060(lbl_831BC768, c * 4);
    o->begin = p;
    o->cur = p;
    if (p == 0) {
      return 0x34;
    }
    o->cap = c;
  }
  return 1;
}
