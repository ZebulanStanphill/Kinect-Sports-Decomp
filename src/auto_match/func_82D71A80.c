void fn_82D71A80(unsigned int *param_1,unsigned int *param_2,int *param_3,int *param_4,int param_5,
                  int param_6,unsigned int *param_7,unsigned int *param_8)

{
  unsigned int iVar1;
  unsigned int uVar2;
  
  iVar1 = param_1[1];
  if (param_2[1] != iVar1) {
    param_2[1] = iVar1;
    uVar2 = (*(int (**)())(*param_4 + 0x14))(param_4,iVar1,param_6);
    *param_8 = uVar2;
    param_8[1] = iVar1;
  }
  iVar1 = *param_1;
  if (*param_2 != iVar1) {
    *param_2 = iVar1;
    uVar2 = (*(int (**)())(*param_3 + 0x14))(param_3,iVar1,param_5);
    *param_7 = uVar2;
    param_7[1] = iVar1;
  }
  return;
}
