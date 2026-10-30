extern void *fn_8265C9E0(int);
extern void *fn_823BC1B8(void *, void *);

void *fn_823BC608(void *a)
{
  void *p = fn_8265C9E0(0x30);
  if (p != 0) {
    return fn_823BC1B8(p, a);
  }
  return 0;
}
