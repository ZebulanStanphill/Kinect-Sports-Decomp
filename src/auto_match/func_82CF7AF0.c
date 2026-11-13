extern int fn_82CE6310();
extern int fn_82CF6B28();


void fn_82CF7AF0(int *param_1,unsigned __int64 param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  int iVar4;
  
  iVar1 = param_1[1];
  iVar4 = (iVar1 - param_4) + param_6;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar4) {
    iVar2 = (param_1[2] & 0x3fffffffU) << 1;
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    fn_82CE6310(param_2,param_1,iVar2,8);
  }
  fn_82CF6B28((param_3 + param_6) * 8 + *param_1,(param_3 + param_4) * 8 + *param_1,
               (iVar1 - param_3) - param_4 & 0x1fffffff);
  puVar3 = (unsigned int *)(param_3 * 8 + *param_1);
  if (0 < param_6) {
    param_5 = param_5 - (int)puVar3;
    do {
      if (puVar3 != (unsigned int *)0x0) {
        *puVar3 = *(unsigned int *)(param_5 + (int)puVar3);
        puVar3[1] = *(unsigned int *)((int)puVar3 + param_5 + 4);
      }
      param_6 = param_6 + -1;
      puVar3 = puVar3 + 2;
    } while (param_6 != 0);
  }
  param_1[1] = iVar4;
  return;
}

