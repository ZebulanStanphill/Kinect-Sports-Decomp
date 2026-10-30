extern void *fn_8265C9E0(int);
extern void *fn_824480E0(void *, void *);

void *fn_82449050(void *a)
{
  void *p = fn_8265C9E0(0x4c);
  if (p != 0) {
    return fn_824480E0(p, a);
  }
  return 0;
}
