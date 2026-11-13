extern unsigned int lbl_83264218;


void fn_82FA5D50(unsigned int *param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  
  uVar2 = *(unsigned int *)(param_2 + 4) & 0xfffffffc;
  if (uVar2 < 0x80) {
    uVar6 = 0;
    uVar5 = (unsigned __int64)(*(unsigned int *)(param_2 + 4) >> 2);
  }
  else {
    uVar6 = -LZCOUNT(uVar2) + 0x19;
    uVar5 = (unsigned __int64)(uVar2 >> ((int)-LZCOUNT(uVar2) + 0x1aU & 0x3f)) ^ 0x20;
  }
  iVar3 = (int)(((uVar6 & 0x7ffffff) * 0x20 + uVar5 + 0x19 & 0xffffffff) << 2);
  iVar1 = *(int *)(iVar3 + (int)param_1);
  *(unsigned int **)(param_2 + 0xc) = &lbl_83264218;
  *(int *)(param_2 + 8) = iVar1;
  iVar4 = (int)((uVar6 + 1 & 0xffffffff) << 2);
  *(int *)(iVar1 + 0xc) = param_2;
  *(int *)(iVar3 + (int)param_1) = param_2;
  *param_1 = 1 << ((unsigned int)uVar6 & 0x3f) | *param_1;
  *(unsigned int *)(iVar4 + (int)param_1) = 1 << ((unsigned int)uVar5 & 0x3f) | *(unsigned int *)(iVar4 + (int)param_1);
  return;
}

