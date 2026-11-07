extern void *fn_82930318(int size);
extern void *fn_829B36B8(void *mem, int arg);

void *fn_829B3708(int param_1)
{
  void *p;

  p = fn_82930318(0x14);
  if (p != 0) {
    return fn_829B36B8(p, *(int *)(param_1 + 0x10));
  }
  return 0;
}
