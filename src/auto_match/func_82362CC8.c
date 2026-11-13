extern int fn_822315A0(unsigned int);

void fn_82362CC8(int param_1)
{
  unsigned int t;

  t = *(unsigned int *)(param_1 + 0x24);
  if (t != 0) fn_822315A0(t);
  t = *(unsigned int *)(param_1 + 0x1c);
  if (t != 0) fn_822315A0(t);
  t = *(unsigned int *)(param_1 + 0x14);
  if (t != 0) fn_822315A0(t);
  t = *(unsigned int *)(param_1 + 0xc);
  if (t != 0) fn_822315A0(t);
  t = *(unsigned int *)(param_1 + 4);
  if (t != 0) fn_822315A0(t);
}
