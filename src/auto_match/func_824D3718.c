extern void *fn_8265C9E0(int);
extern void *fn_824D2D78(void *, void *);

void *fn_824D3718(void *a)
{
  void *p = fn_8265C9E0(0xa60);
  if (p != 0) {
    return fn_824D2D78(p, a);
  }
  return 0;
}
