extern void *fn_8265C9E0(int);
extern void *fn_8244C688(void *, void *);

void *fn_82450680(void *a)
{
  void *p = fn_8265C9E0(0x48);
  if (p != 0) {
    return fn_8244C688(p, a);
  }
  return 0;
}
