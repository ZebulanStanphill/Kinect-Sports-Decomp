extern int fn_82C9DE90();


void fn_82CA1D38(int param_1, __int64 param_2, __int64 param_3, __int64 param_4, __int64 param_5, int param_6, int param_7, int param_8, int in_stack_00000054)

{
  unsigned char bVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  unsigned char *pbVar5;
  __int64 lVar6;
  __int64 lVar7;
  __int64 lVar8;
  __int64 lVar9;

  
  param_2 = param_2 + -5;
  param_3 = param_3 + -5;
  param_4 = param_4 + -5;
  iVar4 = (int)param_5;
  if (0 < iVar4) {
    iVar3 = param_6 + 0x1f >> 5;
    pbVar5 = (unsigned char *)(param_7 + -1);
    do {
      if (0 < iVar3) {
        uVar2 = *(unsigned int *)(param_1 + 0xcc);
        lVar6 = (__int64)iVar3;
        lVar8 = param_2;
        do {
          pbVar5 = pbVar5 + 1;
          bVar1 = *pbVar5;
          fn_82C9DE90(param_1,lVar8,bVar1 >> 4,uVar2,*(unsigned int *)(param_1 + 0xf8));
          fn_82C9DE90(param_1,((unsigned __int64)*(unsigned int *)(param_1 + 0xcc) & 0xfffffff) * 0x10 + lVar8,
                        bVar1 & 0xf,*(unsigned int *)(param_1 + 0xcc),*(unsigned int *)(param_1 + 0xf8));
          uVar2 = *(unsigned int *)(param_1 + 0xcc);
          lVar6 = lVar6 + -1;
          lVar8 = ((unsigned __int64)uVar2 & 0x7ffffff) * 0x20 + lVar8;
        } while (lVar6 != 0);
      }
      param_5 = param_5 + -1;
      param_2 = param_2 + 8;
    } while (param_5 != 0);
  }
  iVar4 = iVar4 >> 1;
  lVar6 = (__int64)iVar4;
  if (0 < lVar6) {
    pbVar5 = (unsigned char *)(param_8 + -1);
    iVar3 = (param_6 >> 1) + 0x1f >> 5;
    lVar8 = lVar6;
    do {
      if (0 < iVar3) {
        uVar2 = *(unsigned int *)(param_1 + 0xd0);
        lVar7 = (__int64)iVar3;
        lVar9 = param_3;
        do {
          pbVar5 = pbVar5 + 1;
          bVar1 = *pbVar5;
          fn_82C9DE90(param_1,lVar9,bVar1 >> 4,uVar2,*(unsigned int *)(param_1 + 0xf8));
          fn_82C9DE90(param_1,((unsigned __int64)*(unsigned int *)(param_1 + 0xd0) & 0xfffffff) * 0x10 + lVar9,
                        bVar1 & 0xf,*(unsigned int *)(param_1 + 0xd0),*(unsigned int *)(param_1 + 0xf8));
          uVar2 = *(unsigned int *)(param_1 + 0xd0);
          lVar7 = lVar7 + -1;
          lVar9 = ((unsigned __int64)uVar2 & 0x7ffffff) * 0x20 + lVar9;
        } while (lVar7 != 0);
      }
      lVar8 = lVar8 + -1;
      param_3 = param_3 + 8;
    } while (lVar8 != 0);
  }
  if (0 < iVar4) {
    pbVar5 = (unsigned char *)(in_stack_00000054 + -1);
    iVar4 = (param_6 >> 1) + 0x1f >> 5;
    do {
      if (0 < iVar4) {
        uVar2 = *(unsigned int *)(param_1 + 0xd0);
        lVar8 = (__int64)iVar4;
        lVar7 = param_4;
        do {
          pbVar5 = pbVar5 + 1;
          bVar1 = *pbVar5;
          fn_82C9DE90(param_1,lVar7,bVar1 >> 4,uVar2,*(unsigned int *)(param_1 + 0xf8));
          fn_82C9DE90(param_1,((unsigned __int64)*(unsigned int *)(param_1 + 0xd0) & 0xfffffff) * 0x10 + lVar7,
                        bVar1 & 0xf,*(unsigned int *)(param_1 + 0xd0),*(unsigned int *)(param_1 + 0xf8));
          uVar2 = *(unsigned int *)(param_1 + 0xd0);
          lVar8 = lVar8 + -1;
          lVar7 = ((unsigned __int64)uVar2 & 0x7ffffff) * 0x20 + lVar7;
        } while (lVar8 != 0);
      }
      lVar6 = lVar6 + -1;
      param_4 = param_4 + 8;
    } while (lVar6 != 0);
  }
  return;
}

