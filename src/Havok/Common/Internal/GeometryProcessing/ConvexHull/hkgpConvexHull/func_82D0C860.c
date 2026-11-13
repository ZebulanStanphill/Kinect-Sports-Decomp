extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82D0B2B0();
extern int fn_82D0B378();


void fn_82D0C860(unsigned __int64 param_1,int *param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  unsigned __int64 in_r0;
  __int64 lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  __int64 lVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  
  lVar5 = fn_82D0B2B0();
  iVar6 = fn_82CE5410();
  uVar1 = param_2[1];
  lVar9 = (unsigned __int64)uVar1 + lVar5;
  iVar7 = (int)lVar9;
  if ((int)(param_2[2] & 0x3fffffffU) < iVar7) {
    lVar4 = ((unsigned __int64)(unsigned int)param_2[2] & 0x3fffffff) << 1;
    if (iVar7 < (int)lVar4) {
      lVar9 = lVar4;
    }
    fn_82CE6310(*(unsigned int *)(iVar6 + 0x10),param_2,lVar9,0x10);
  }
  iVar6 = *param_2;
  param_2[1] = param_2[1] + (int)lVar5;
  lVar9 = 0;
  iVar7 = fn_82D0B2B0(param_1);
  iVar6 = uVar1 * 0x10 + iVar6;
  if (0 < iVar7) {
    do {
      iVar8 = fn_82D0B378(param_1,lVar9);
      lVar9 = lVar9 + 1;
      puVar2 = (unsigned int *)((int)in_r0 + iVar8 & 0xfffffff0);
      uVar10 = puVar2[1];
      uVar11 = puVar2[2];
      uVar12 = puVar2[3];
      puVar3 = (unsigned int *)((int)in_r0 + iVar6 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar10;
      puVar3[2] = uVar11;
      puVar3[3] = uVar12;
      iVar6 = iVar6 + 0x10;
    } while ((int)lVar9 < iVar7);
  }
  return;
}

