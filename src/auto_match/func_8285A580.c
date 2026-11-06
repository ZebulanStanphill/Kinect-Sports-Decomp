extern int fn_8285A498(int, int, int);
extern int fn_828629D8(int, int, int);
extern unsigned int lbl_8321132C[];
void fn_8285A580(int param_1, int param_2, int param_3)
{
  int x = *(int *)(param_1 + 0x34);
  unsigned int p = *(unsigned int *)(param_1 + 0x44);
  lbl_8321132C[0] = 0;
  lbl_8321132C[1] = x;
  if (p != 0) lbl_8321132C[0] = *(unsigned int *)(p + 0x44);
  fn_8285A498(x, param_2, param_3);
  if (*(unsigned int *)(param_1 + 0x44) != 0) fn_828629D8(*(int *)(param_1 + 0x44), param_2, param_3);
}
