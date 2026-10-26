typedef void (*fp)(int);

int **fn_822EF4E0(int **out, int *p)
{
  int q;
  *out = p;
  q = *(int *)((char *)p + ((int *)*p)[1] + 0x38);
  if (q != 0) {
    ((fp *)*(int *)q)[1](q);
  }
  return out;
}
