void fn_82A2CA20(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  unsigned char *pbVar6;
  
  if (param_3 < param_3 + 0x1000) {
    pbVar6 = (unsigned char *)(param_3 + 0x29);
    lVar4 = (unsigned __int64)(((param_3 + 0x1000) - param_3) - 1 >> 6) + 1;
    do {
      if ((pbVar6[-1] & 0x80) == 0) {
        uVar2 = ((unsigned __int64)*(unsigned int *)(pbVar6 + 0xb) + 0xfff & 0xffffffff) >> 0xc;
        if (uVar2 < ((unsigned __int64)pbVar6[2] * 0x100 + (unsigned __int64)pbVar6[1]) * 0x100 +
                    (unsigned __int64)*pbVar6) {
          *pbVar6 = (unsigned char)uVar2;
          pbVar6[1] = (unsigned char)(uVar2 >> 8);
          pbVar6[2] = (unsigned char)(uVar2 >> 0x10);
        }
      }
      pbVar6 = pbVar6 + 0x40;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  uVar2 = (param_2 & 0xffffffff) >> 6;
  puVar5 = *(unsigned int **)(param_1 + 0x80);
  while (puVar5 != (unsigned int *)(param_1 + 0x80)) {
    iVar1 = puVar5[-0x12];
    puVar5 = (unsigned int *)*puVar5;
    if (((((*(unsigned char *)(iVar1 + 0x35) & 2) == 0) && (uVar2 <= *(unsigned short *)(iVar1 + 0x36))) &&
        ((unsigned __int64)*(unsigned short *)(iVar1 + 0x36) < uVar2 + 0x40)) &&
       (uVar3 = *(int *)(iVar1 + 0x18) + 0xfffU & 0xfffff000, uVar3 < *(unsigned int *)(iVar1 + 0x1c))) {
      *(unsigned int *)(iVar1 + 0x1c) = uVar3;
    }
  }
  return;
}

