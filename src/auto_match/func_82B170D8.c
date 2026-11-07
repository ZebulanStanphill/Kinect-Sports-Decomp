typedef unsigned int uint;

static __forceinline unsigned char isWide_82B170D8(uint v)
{
  return ((v >> 7) & 0x7f) == 0x60 && (v & 0x380000) > 0x80000;
}

unsigned char fn_82B170D8(int param_1)
{
  uint v = *(uint *)(param_1 + 8);
  uint t = v >> 7 & 0x7f;

  return t == 0x61 || t == 99 || t == 100 || isWide_82B170D8(v);
}
