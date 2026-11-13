int fn_82BF74D0(int param_1,unsigned int *param_2,int *param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  
  uVar2 = *param_2 >> 4;
  *param_4 = uVar2;
  uVar1 = *(unsigned int *)(param_1 + 0xc);
  trapWord(6,(unsigned __int64)uVar1,0);
  iVar3 = uVar2 - (uVar2 / uVar1) * uVar1;
  *param_3 = iVar3;
  if (*(int *)(param_1 + 8) != 0) {
    for (iVar3 = *(int *)(iVar3 * 4 + *(int *)(param_1 + 8)); iVar3 != 0;
        iVar3 = *(int *)(iVar3 + 0x10)) {
      if ((*(unsigned int *)(iVar3 + 0x14) == *param_4) && (*(unsigned int *)(iVar3 + 8) == *param_2)) {
        return iVar3;
      }
    }
  }
  return 0;
}

