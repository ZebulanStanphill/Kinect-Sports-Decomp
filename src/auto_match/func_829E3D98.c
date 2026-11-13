extern unsigned int lbl_821AAD20;


double fn_829E3D98(int param_1,unsigned int param_2)

{
  float fVar1;
  unsigned int *puVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  
  param_2 = param_2 & 0xff;
  fVar1 = lbl_821AAD20;
  if (param_2 < 0x100) {
    iVar3 = 0x100 - param_2;
    iVar4 = (param_2 + 0x19) * 4;
    do {
      puVar2 = (unsigned int *)(iVar4 + *(int *)(param_1 + 0xc));
      iVar4 = iVar4 + 4;
      fVar1 = (float)*puVar2 + fVar1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uVar5 = *(int *)(param_1 + 0x7c) * *(int *)(param_1 + 0x78);
  return (double)(fVar1 / (float)(__int64)
                                 (int)(((int)uVar5 >> 1) +
                                      (unsigned int)((int)uVar5 < 0 && (uVar5 & 1) != 0)));
}

