extern void *fn_8265C9E0(int);
extern void *fn_824D4F90(void *, void *);

void *fn_824D7118(void *a)
{
  void *p = fn_8265C9E0(0x170);
  if (p != 0) {
    return fn_824D4F90(p, a);
  }
  return 0;
}
