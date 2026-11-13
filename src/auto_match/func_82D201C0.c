extern int fn_82CE5410();
extern int fn_82CE6310();


unsigned int fn_82D201C0(int param_1,int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  int in_r0;
  int iVar7;
  __int64 lVar8;
  int iVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  
  uVar1 = *(unsigned int *)(param_1 + 0x18);
  iVar7 = fn_82CE5410();
  uVar2 = param_2[1];
  lVar8 = (unsigned __int64)uVar2 + (unsigned __int64)uVar1;
  iVar9 = (int)lVar8;
  if ((int)(param_2[2] & 0x3fffffffU) < iVar9) {
    lVar6 = ((unsigned __int64)(unsigned int)param_2[2] & 0x3fffffff) << 1;
    if (iVar9 < (int)lVar6) {
      lVar8 = lVar6;
    }
    fn_82CE6310(*(unsigned int *)(iVar7 + 0x10),param_2,lVar8,0x10);
  }
  param_2[1] = param_2[1] + uVar1;
  iVar7 = uVar2 * 0x10 + *param_2;
  for (puVar3 = *(unsigned int **)(param_1 + 0x14); puVar3 != (unsigned int *)0x0;
      puVar3 = (unsigned int *)*puVar3) {
    puVar4 = (unsigned int *)((unsigned int)(puVar3 + 4) & 0xfffffff0);
    uVar10 = puVar4[1];
    uVar11 = puVar4[2];
    uVar12 = puVar4[3];
    puVar5 = (unsigned int *)(in_r0 + iVar7 & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar10;
    puVar5[2] = uVar11;
    puVar5[3] = uVar12;
    iVar7 = iVar7 + 0x10;
  }
  return *(unsigned int *)(param_1 + 0x18);
}

