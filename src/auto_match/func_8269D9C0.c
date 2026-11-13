extern int fn_8269B4F8();


int fn_8269D9C0(int *param_1,unsigned int *param_2)

{
  unsigned int iVar1;
  int iVar2;
  unsigned int uVar3;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    uVar3 = param_2[1];
    if ((*param_2 & 0x20000) != 0) {
      uVar3 = (int)*(short *)(param_2 + 2) ^ uVar3;
    }
    iVar2 = fn_8269B4F8(param_1,param_2,*(unsigned int *)(iVar1 + 4) & uVar3);
    if (iVar2 >= 0) {
      return iVar2 * 0x24 + iVar1 + 0x10;
    }
  }
  return 0;
}

