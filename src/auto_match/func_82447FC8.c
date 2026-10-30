extern void *fn_8265C9E0(int);
extern void *fn_824476C8(void *, void *);

void *fn_82447FC8(void *a)
{
  void *p = fn_8265C9E0(0x4c);
  if (p != 0) {
    return fn_824476C8(p, a);
  }
  return 0;
}
