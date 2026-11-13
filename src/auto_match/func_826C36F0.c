extern int fn_8267C498(unsigned int);
extern int fn_826824B0(unsigned int);

void fn_826C36F0(int param_1)
{
  unsigned int t;

  t = *(unsigned int *)(param_1 + 0x24);
  if (t != 0) fn_826824B0(t);
  t = *(unsigned int *)(param_1 + 0x20);
  if (t != 0) fn_826824B0(t);
  t = *(unsigned int *)(param_1 + 0x1c);
  if (t != 0) fn_8267C498(t);
  t = *(unsigned int *)(param_1 + 0x18);
  if (t != 0) fn_8267C498(t);
  t = *(unsigned int *)(param_1 + 0x14);
  if (t != 0) fn_8267C498(t);
}
