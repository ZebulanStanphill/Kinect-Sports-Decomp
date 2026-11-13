int fn_82D8E9D0(int param_1,unsigned int *param_2,int param_3,int param_4)

{
  int iVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  
  if ((param_3 < *(int *)(param_1 + 0xb4)) && (*(char *)(param_1 + 200) != '\0')) {
    uVar5 = (unsigned __int64)param_2[1] - 0x14;
    uVar4 = (unsigned __int64)param_2[1] - 1;
    uVar2 = -(unsigned int)(uVar5 < 0xffffffff80000000) & (unsigned int)uVar5;
    if ((int)uVar2 <= (int)uVar4) {
      lVar3 = (uVar4 & 0x3fffffff) * 4 + (unsigned __int64)*param_2;
      do {
        iVar1 = *(int *)lVar3;
        if (param_4 != iVar1) {
          iVar6 = *(int *)(iVar1 + 0x4c);
          if (*(int *)(iVar1 + 0x4c) <= *(int *)(iVar1 + 0x1c)) {
            iVar6 = *(int *)(iVar1 + 0x1c);
          }
          if (((*(unsigned char *)(iVar1 + 0x26) & 0x30) != 0) &&
             (iVar6 + param_3 < *(int *)(param_1 + 0xb4))) {
            *(unsigned char *)(iVar1 + 0x25) = *(unsigned char *)(iVar1 + 0x25) & 0xcf | 0x10;
            return iVar1;
          }
        }
        uVar4 = uVar4 - 1;
        lVar3 = lVar3 + -4;
      } while ((int)uVar2 <= (int)uVar4);
    }
  }
  return 0;
}

