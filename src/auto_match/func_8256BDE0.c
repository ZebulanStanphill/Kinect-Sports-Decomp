typedef struct { int quot; int rem; } DivRes_82F65C10;
extern DivRes_82F65C10 fn_82F65C10(int num, int den);

unsigned int fn_8256BDE0(int param_1, unsigned int *param_2)
{
  DivRes_82F65C10 d;
  int v;
  unsigned int mask;

  d = fn_82F65C10((*param_2 & 0x7fffffff) ^ 0x5eadbeef, 0x1f31d);
  v = d.rem * 0x41a7 - d.quot * 0xb14;
  if (v < 0) {
    v = v + 0x7fffffff;
  }
  mask = *(unsigned int *)(param_1 + 0x20);
  v = mask & v;
  if (*(unsigned int *)(param_1 + 0x24) <= (unsigned int)v) {
    v = (v - (*(unsigned int *)(param_1 + 0x20) >> 1)) - 1;
  }
  return v;
}
