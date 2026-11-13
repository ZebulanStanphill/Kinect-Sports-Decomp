extern unsigned int lbl_82160708;


double fn_82EFE498(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  double dVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar8;
  double dVar9;
  
  dVar5 = lbl_82160708;
  dVar9 = *(double *)(param_1 + 0x1de0);
  uVar1 = *(unsigned int *)(param_1 + 0x1f04);
  uVar7 = *(int *)(param_1 + 0x1df4) + 1;
  uVar6 = *(int *)(param_1 + 0x1df8) + 1;
  iVar2 = *(int *)(param_1 + 0x1df0);
  iVar3 = *(int *)(param_1 + 0x1dfc);
  uVar4 = *(unsigned int *)(*(int *)(param_1 + 0x1df8) * 4 + iVar2);
  iVar8 = uVar7 - (uVar7 / uVar1) * uVar1;
  *(int *)(param_1 + 0x1df4) = iVar8;
  trapWord(6,(unsigned __int64)uVar1,0);
  trapWord(6,(unsigned __int64)uVar1,0);
  iVar8 = iVar8 * 4;
  *(unsigned int *)(param_1 + 0x1df8) = uVar6 - (uVar6 / uVar1) * uVar1;
  *(int *)(param_1 + 0x1dfc) = iVar3 - ((int)(uVar4 << 8 | uVar4 >> 0x18) >> 8);
  *(unsigned int *)(iVar8 + iVar2) = *(unsigned int *)(iVar8 + iVar2) & 0xff000000;
  dVar9 = dVar9 * (double)(__int64)(int)uVar1;
  return ((double)(__int64)(*(int *)(param_1 + 0x2a4) * (iVar3 - (int)dVar9)) / dVar9) * dVar5;
}

