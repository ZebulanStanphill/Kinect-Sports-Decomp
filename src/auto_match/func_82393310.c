extern int fn_822315A0(int);
extern int fn_82365BD8(int *, int);
extern unsigned int lbl_821B4828;

int *fn_82393310(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
  param_1[1] = 0;
  *param_1 = (int)&lbl_821B4828;
  fn_82365BD8(param_1 + 7, param_2);
  fn_82365BD8(param_1 + 9,param_3);
  fn_82365BD8(param_1 + 0xb,param_4);
  fn_82365BD8(param_1 + 0xd,param_5);
  fn_82365BD8(param_1 + 0xf,param_6);
  if (*(unsigned int *)(param_2 + 4) != 0) fn_822315A0(*(unsigned int *)(param_2 + 4));
  if (*(unsigned int *)(param_3 + 4) != 0) fn_822315A0(*(unsigned int *)(param_3 + 4));
  if (*(unsigned int *)(param_4 + 4) != 0) fn_822315A0(*(unsigned int *)(param_4 + 4));
  if (*(unsigned int *)(param_5 + 4) != 0) fn_822315A0(*(unsigned int *)(param_5 + 4));
  if (*(unsigned int *)(param_6 + 4) != 0) fn_822315A0(*(unsigned int *)(param_6 + 4));
  return param_1;
}
