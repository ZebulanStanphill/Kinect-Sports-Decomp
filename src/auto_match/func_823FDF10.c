extern int fn_822315A0(int);
extern int fn_82365BD8(int *, int);
extern unsigned int lbl_821B742C;

int *fn_823FDF10(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11)
{
  param_1[1] = 0;
  *param_1 = (int)&lbl_821B742C;
  fn_82365BD8(param_1 + 0xc, param_2);
  fn_82365BD8(param_1 + 0xe, param_3);
  fn_82365BD8(param_1 + 0x10, param_4);
  fn_82365BD8(param_1 + 0x12, param_5);
  fn_82365BD8(param_1 + 0x14, param_6);
  fn_82365BD8(param_1 + 0x16, param_7);
  fn_82365BD8(param_1 + 0x18, param_8);
  fn_82365BD8(param_1 + 0x1a, param_9);
  fn_82365BD8(param_1 + 0x1c, param_10);
  fn_82365BD8(param_1 + 0x1e, param_11);
  if (*(unsigned int *)(param_2 + 4) != 0) fn_822315A0(*(unsigned int *)(param_2 + 4));
  if (*(unsigned int *)(param_3 + 4) != 0) fn_822315A0(*(unsigned int *)(param_3 + 4));
  if (*(unsigned int *)(param_4 + 4) != 0) fn_822315A0(*(unsigned int *)(param_4 + 4));
  if (*(unsigned int *)(param_5 + 4) != 0) fn_822315A0(*(unsigned int *)(param_5 + 4));
  if (*(unsigned int *)(param_6 + 4) != 0) fn_822315A0(*(unsigned int *)(param_6 + 4));
  if (*(unsigned int *)(param_7 + 4) != 0) fn_822315A0(*(unsigned int *)(param_7 + 4));
  if (*(unsigned int *)(param_8 + 4) != 0) fn_822315A0(*(unsigned int *)(param_8 + 4));
  if (*(unsigned int *)(param_9 + 4) != 0) fn_822315A0(*(unsigned int *)(param_9 + 4));
  if (*(unsigned int *)(param_10 + 4) != 0) fn_822315A0(*(unsigned int *)(param_10 + 4));
  if (*(unsigned int *)(param_11 + 4) != 0) fn_822315A0(*(unsigned int *)(param_11 + 4));
  return param_1;
}
