extern int fn_82F68B78();
extern unsigned int lbl_831E7E64;


int fn_8268D210(int *param_1,unsigned int param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  
  if ((unsigned int)param_1[0x82] < param_2) {
    iVar1 = lbl_831E7E64;
    if (*param_1 != 0) {
      iVar1 = *param_1;
    }
    iVar1 = fn_82F68B78(iVar1,param_2,4,0);
    return iVar1;
  }
  iVar1 = param_1[0x81];
  iVar3 = ((iVar1 + param_2) - 1 & 0xfffffffc) + 4;
  param_1[0x81] = iVar3;
  uVar2 = (iVar3 - (int)param_1) - 4;
  iVar3 = 0x200 - uVar2;
  if (0x1ff < uVar2) {
    iVar3 = 0;
  }
  param_1[0x82] = iVar3;
  return iVar1;
}

