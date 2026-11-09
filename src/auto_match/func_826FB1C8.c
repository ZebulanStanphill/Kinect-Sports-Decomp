typedef struct { int v[2]; } Elem_826FB1C8;
extern void fn_826F8438(Elem_826FB1C8 *, int);

void fn_826FB1C8(Elem_826FB1C8 *a, unsigned n)
{
  Elem_826FB1C8 *p = a + n - 1;
  int i;
  if (n != 0) {
    i = n;
    do {
      fn_826F8438(p, 0);
      i--;
      p--;
    } while (i != 0);
  }
}
