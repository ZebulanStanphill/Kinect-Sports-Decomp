extern void *fn_8265C9E0(int);
extern void *fn_824D73E8(void *, void *);

void *fn_824D7DB8(void *a)
{
  void *p = fn_8265C9E0(0x130);
  if (p != 0) {
    return fn_824D73E8(p, a);
  }
  return 0;
}
