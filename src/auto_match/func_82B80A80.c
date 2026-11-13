void fn_82B80A80(unsigned __int64 param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5,
                  unsigned int param_6)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  int iVar5;
  
  if ((*param_2 & 0x40000000) == 0) {
    if (param_5 <= param_4) {
      return;
    }
    iVar5 = param_5 - param_4;
    iVar3 = param_4 << 3;
    uVar2 = 0;
    do {
      puVar4 = (unsigned int *)(iVar3 + param_2[6]);
      iVar3 = iVar3 + 8;
      *puVar4 = param_6;
      uVar1 = uVar2 & 0xfffc;
      uVar2 = uVar2 + 4;
      puVar4[1] = uVar1 | puVar4[1] & 0x10000 | 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    return;
  }
  uVar2 = 0;
  if ((*param_2 & 0x1fff8) == 0) {
    return;
  }
  iVar3 = 0;
  do {
    uVar1 = *(unsigned int *)(iVar3 + param_2[7]);
    if ((uVar1 >> 4 & 0x3fff) == param_3) {
      puVar4 = (unsigned int *)(param_2[6] + iVar3);
      *puVar4 = param_6;
      puVar4[1] = (unsigned int)((0x1fU - LZCOUNT(uVar1 & 0xf) & 0xffffffff) << 2) & 0xfffc |
                  puVar4[1] & 0x10000 | 1;
    }
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + 8;
  } while (uVar2 < (*param_2 >> 3 & 0x3fff));
  return;
}

