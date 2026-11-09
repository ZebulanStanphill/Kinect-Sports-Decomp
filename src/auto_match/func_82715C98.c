typedef struct { void *object; int rest[18]; } Elem_82715C98;
extern void fn_8267C498(void *);

void fn_82715C98(Elem_82715C98 *a, unsigned n)
{
  Elem_82715C98 *p = a + n - 1;
  int i;
  if (n != 0) {
    i = n;
    do {
      if (p->object != 0) fn_8267C498(p->object);
      i--;
      p--;
    } while (i != 0);
  }
}
