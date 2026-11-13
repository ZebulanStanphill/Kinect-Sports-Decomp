extern int fn_82722B00();
extern int fn_827912D8();
extern int fn_827A5000();


void fn_8272CC50(int *param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int iVar2;
  
  if (*(int *)(param_1[0x28] + 0x114) == 0) {
    fn_82722B00();
  }
  if (*(int *)(param_1[0x28] + 0x114) != 0) {
    param_2 = (param_2 >> 0x1f) - 1 & param_2;
    param_3 = (param_3 >> 0x1f) - 1 & param_3;
    uVar1 = fn_827912D8(*(unsigned int *)(param_1[0x28] + 8));
    if ((int)uVar1 < (int)param_2) {
      param_2 = uVar1;
    }
    if ((int)uVar1 < (int)param_3) {
      param_3 = uVar1;
    }
    fn_827A5000(*(unsigned int *)(param_1[0x28] + 0x114),param_2,param_3);
    iVar2 = (*(int (**)())(*param_1 + 0x40))(param_1);
    if (iVar2 != 0) {
      *(unsigned int *)(iVar2 + 0xb00) = *(unsigned int *)(iVar2 + 0xb00) | 0x400;
    }
  }
  return;
}

