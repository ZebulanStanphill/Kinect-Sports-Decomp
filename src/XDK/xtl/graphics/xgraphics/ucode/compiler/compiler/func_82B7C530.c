extern void fn_82BA70A8(unsigned int);

typedef struct {
  char pad0[0x550];
  unsigned int f550;
  char pad554[0x59c - 0x554];
  void (*free)(unsigned int, unsigned int);
  char pad5a0[4];
  unsigned int heap;
  unsigned int slots[3];
} Obj_82B7C530;

void fn_82B7C530(Obj_82B7C530 *o, unsigned char param_2)
{
  int n;
  unsigned int *p;

  if (param_2 != 0) {
    o->free(o->heap, o->f550);
  }
  p = o->slots;
  n = 3;
  do {
    if (*p != 0) {
      fn_82BA70A8(*p);
      o->free(o->heap, *p);
      *p = 0;
    }
    n = n - 1;
    p = p + 1;
  } while (n != 0);
}
