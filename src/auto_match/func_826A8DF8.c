typedef struct { int v[2]; } Elem_826A8DF8;
extern void fn_826A7868(Elem_826A8DF8 *, int);

void fn_826A8DF8(Elem_826A8DF8 *a, unsigned n)
{
  Elem_826A8DF8 *p = a + n - 1;
  int i;
  if (n != 0) {
    i = n;
    do {
      fn_826A7868(p, 0);
      i--;
      p--;
    } while (i != 0);
  }
}
