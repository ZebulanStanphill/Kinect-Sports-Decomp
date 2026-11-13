extern void fn_823B4970(int, int, int, int);
extern int fn_828E9D90(int);
extern int fn_828E9DA8(int);
extern int fn_828E9FF8(int, int);

static __forceinline int ReadBits(int w, int n)
{
  int v;
  if (fn_828E9DA8(w) - fn_828E9D90(w) >= n) {
    v = fn_828E9FF8(w, n);
  } else {
    v = 0;
  }
  return v;
}

void fn_828CD6A0(int param_1, int param_2)
{
  *(int *)(param_1 + 0x84) = ReadBits(param_2, 8);
  *(int *)(param_1 + 0x88) = ReadBits(param_2, 5);
  *(char *)(param_1 + 0x8c) = ReadBits(param_2, 1) != 0;
  fn_823B4970(param_1 + 0x98, param_2, ReadBits(param_2, 0xd), 0);
}
