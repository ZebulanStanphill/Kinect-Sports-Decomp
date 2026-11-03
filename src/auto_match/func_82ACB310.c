extern void *memset(void *, int, unsigned);
typedef struct { char pad[4]; int *t4; int *a8; int ac; int a10; } Obj;

void fn_82ACB310(Obj *o)
{
  int *t = o->t4;
  if ((~(unsigned)t & 1) == 0) {
    o->t4 = (int *)1;
  } else {
    memset(t + 1, 0, *t << 2);
  }
  if (o->a8 != 0) {
    memset(o->a8, 0, o->ac << 2);
  }
  o->a10 = 0;
}
