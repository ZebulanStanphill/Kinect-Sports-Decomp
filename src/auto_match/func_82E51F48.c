typedef struct { int v[4]; } Sub;
typedef struct E { int x0[4]; Sub x10; } E;
typedef struct O { char pad[0x40]; E *items; int x44; unsigned int count; } O;
extern void fn_82E50330(void *s);
int fn_82E51F48(O *p)
{
  unsigned int i;
  for (i = 0; i < p->count; i++) {
    fn_82E50330(&p->items[i].x10);
  }
  p->count = 0;
  return 0;
}
