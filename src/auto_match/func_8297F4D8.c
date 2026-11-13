unsigned int fn_8297F4D8(unsigned __int64 param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  
  iVar3 = *(int *)(param_3 + 0x1c);
  if (iVar3 != 0) {
    do {
      pbVar4 = *(unsigned char **)(iVar3 + 0x10);
      pbVar5 = *(unsigned char **)(param_2 + 8);
      do {
        uVar2 = (unsigned int)*pbVar4;
        uVar1 = (unsigned int)*pbVar5;
        if (*pbVar5 == 0) break;
        pbVar5 = pbVar5 + 1;
        pbVar4 = pbVar4 + 1;
      } while (uVar1 == uVar2);
      if (uVar1 == uVar2) {
        return *(unsigned int *)(iVar3 + 0x14);
      }
      if ((int)(uVar1 - uVar2) < 0) {
        iVar3 = *(int *)(iVar3 + 8);
      }
      else {
        iVar3 = *(int *)(iVar3 + 0xc);
      }
    } while (iVar3 != 0);
  }
  return 0;
}

