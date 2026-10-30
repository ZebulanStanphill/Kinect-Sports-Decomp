extern void *fn_8265C9E0(int);
extern void *fn_822C7FD8(void *, void *);

void *fn_822C9EB0(void *a)
{
  void *p = fn_8265C9E0(0xc0);
  if (p != 0) {
    return fn_822C7FD8(p, a);
  }
  return 0;
}
