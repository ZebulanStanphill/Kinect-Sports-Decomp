extern void *fn_8265C9E0(int);
extern void *fn_824A2838(void *, void *);

void *fn_824A2B40(void *a)
{
  void *p = fn_8265C9E0(0x70);
  if (p != 0) {
    return fn_824A2838(p, a);
  }
  return 0;
}
