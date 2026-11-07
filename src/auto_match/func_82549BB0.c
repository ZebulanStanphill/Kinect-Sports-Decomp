extern void *fn_82549AD8(void *mem, int a, void *b);
extern void *fn_8265C9E0(unsigned int size);
extern int fn_82A1DD38(void *dst, void *src, int n);

void *fn_82549BB0(char *param_1)
{
  void *mem;
  void *result;

  mem = fn_8265C9E0(0x200);
  if (mem != 0) {
    result = fn_82549AD8(mem, *(int *)(param_1 + 0x1c0), param_1 + 0x1b8);
  }
  else {
    result = 0;
  }
  fn_82A1DD38(param_1 + 0xd0, param_1 + 0xd0, 0x4c);
  return result;
}
