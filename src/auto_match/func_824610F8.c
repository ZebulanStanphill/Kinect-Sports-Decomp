extern void *fn_8265C9E0(int);
extern void *fn_8245E9D8(void *, void *);

void *fn_824610F8(void *a)
{
  void *p = fn_8265C9E0(0xcc);
  if (p != 0) {
    return fn_8245E9D8(p, a);
  }
  return 0;
}
