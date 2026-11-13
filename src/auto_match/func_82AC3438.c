extern int fn_82F68CC0();


unsigned __int64 fn_82AC3438(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned __int64 param_5)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  
  uVar4 = param_1[1] + 1;
  param_1[1] = uVar4;
  if (uVar4 < 0x10000) {
    puVar5 = (unsigned int *)(param_1 + uVar4 * 4 + 3);
    if (((param_2 < 0x2000) && (param_3 < 5)) && (param_4 < 5)) {
      uVar1 = *puVar5;
      param_2 = param_2 << 0x13;
      iVar2 = *param_1;
      uVar3 = ((param_3 & 7) << 3 | param_4 & 7) << 0xd;
      *puVar5 = uVar3 | param_2 | uVar1 & 0x1fff;
      if ((int)param_5 != 0) {
        fn_82F68CC0(param_1 + uVar4 * 4 + 4,param_5,9);
        uVar4 = param_1[iVar2 * 4 + 3];
        *puVar5 = uVar4 & 0x1000 | uVar3 | param_2 | uVar1 & 0xfff;
        *puVar5 = uVar4 & 0x1000 | uVar3 | param_2 | uVar1 & 0x7ff | param_1[iVar2 * 4 + 3] & 0x800U
        ;
        *puVar5 = *puVar5 & 0xfffffbff | param_1[iVar2 * 4 + 3] & 0x400U;
        *puVar5 = *puVar5 & 0xfffffdff | param_1[iVar2 * 4 + 3] & 0x200U;
        *puVar5 = *puVar5 & 0xfffffeff | param_1[iVar2 * 4 + 3] & 0x100U;
        *puVar5 = *puVar5 & 0xffffff7f | param_1[iVar2 * 4 + 3] & 0x80U;
        *puVar5 = *puVar5 & 0xffffffbf | param_1[iVar2 * 4 + 3] & 0x40U;
        return 0;
      }
    }
  }
  return 0xffffffff80004005;
}

