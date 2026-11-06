typedef struct DivResult_8256DBA0 { int quot; int rem; } DivResult_8256DBA0;
extern DivResult_8256DBA0 fn_82F65C10(int, int);

int fn_8256DBA0(int param_1, unsigned int *param_2)
{
  DivResult_8256DBA0 d;
  int t;

  d = fn_82F65C10((*param_2 & 0x7fffffff) ^ 0x5eadbeef, 0x1f31d);
  t = d.rem * 0x41a7 - d.quot * 0xb14;
  if (t < 0) {
    t += 0x7fffffff;
  }
  return t;
}
