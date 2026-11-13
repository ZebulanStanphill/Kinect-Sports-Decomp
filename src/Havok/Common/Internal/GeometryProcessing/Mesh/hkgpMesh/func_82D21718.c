extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CEA160();
extern int fn_82CEA280();
extern int fn_82CEA4B8();
extern int fn_82CEAB00();
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_82D21718(int param_1,int *param_2,char param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  unsigned __int64 in_r0;
  int iVar10;
  int iVar11;
  unsigned int uVar12;
  __int64 lVar13;
  int iVar14;
  unsigned int *puVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned int uStack_58;
  
  if (0 < *(int *)(param_1 + 0x30)) {
    uVar1 = param_2[1];
    uVar2 = *(unsigned int *)(param_1 + 0x18);
    iVar10 = fn_82CE5410();
    uVar3 = param_2[1];
    lVar13 = (unsigned __int64)uVar3 + (unsigned __int64)uVar2;
    iVar11 = (int)lVar13;
    if ((int)(param_2[2] & 0x3fffffffU) < iVar11) {
      lVar9 = ((unsigned __int64)(unsigned int)param_2[2] & 0x3fffffff) << 1;
      if (iVar11 < (int)lVar9) {
        lVar13 = lVar9;
      }
      fn_82CE6310(*(unsigned int *)(iVar10 + 0x10),param_2,lVar13,0x10);
    }
    iVar10 = *param_2;
    param_2[1] = uVar2 + param_2[1];
    uVar2 = *(unsigned int *)(param_1 + 0x30);
    iVar11 = fn_82CE5410();
    uVar4 = param_2[4];
    lVar13 = (unsigned __int64)uVar4 + (unsigned __int64)uVar2;
    iVar14 = (int)lVar13;
    if ((int)(param_2[5] & 0x3fffffffU) < iVar14) {
      lVar9 = ((unsigned __int64)(unsigned int)param_2[5] & 0x3fffffff) << 1;
      if (iVar14 < (int)lVar9) {
        lVar13 = lVar9;
      }
      fn_82CE6310(*(unsigned int *)(iVar11 + 0x10),param_2 + 3,lVar13,0x10);
    }
    stack_pair_60.first = 0;
    stack_pair_60.second = 0;
    param_2[4] = param_2[4] + uVar2;
    uStack_58 = 0xffffffff;
    puVar15 = (unsigned int *)(uVar4 * 0x10 + param_2[3]);
    iVar11 = fn_82CE5410();
    fn_82CEAB00(&stack_pair_60.first,*(unsigned int *)(iVar11 + 0x10),0);
    uVar2 = *(unsigned int *)(param_1 + 0x18);
    iVar11 = fn_82CE5410();
    fn_82CEAB00(&stack_pair_60.first,*(unsigned int *)(iVar11 + 0x10),(unsigned __int64)uVar2 + 1);
    iVar10 = uVar3 * 0x10 + iVar10;
    for (puVar5 = *(unsigned int **)(param_1 + 0x14); puVar5 != (unsigned int *)0x0;
        puVar5 = (unsigned int *)*puVar5) {
      uVar8 = (unsigned __int64)stack_pair_60.second;
      iVar11 = fn_82CE5410();
      fn_82CEA160(&stack_pair_60.first,*(unsigned int *)(iVar11 + 0x10),puVar5,
                        (uVar8 & 0x7fffffff) + (unsigned __int64)uVar1);
      puVar6 = (unsigned int *)((unsigned int)(puVar5 + 4) & 0xfffffff0);
      uVar12 = puVar6[1];
      uVar16 = puVar6[2];
      uVar17 = puVar6[3];
      puVar7 = (unsigned int *)((int)in_r0 + iVar10 & 0xfffffff0);
      *puVar7 = *puVar6;
      puVar7[1] = uVar12;
      puVar7[2] = uVar16;
      puVar7[3] = uVar17;
      iVar10 = iVar10 + 0x10;
    }
    for (puVar5 = *(unsigned int **)(param_1 + 0x2c); puVar5 != (unsigned int *)0x0;
        puVar5 = (unsigned int *)*puVar5) {
      uVar12 = fn_82CEA280(&stack_pair_60.first,puVar5[2],0xffffffffffffffff);
      *puVar15 = uVar12;
      uVar12 = fn_82CEA280(&stack_pair_60.first,puVar5[3],0xffffffffffffffff);
      puVar15[1] = uVar12;
      uVar12 = fn_82CEA280(&stack_pair_60.first,puVar5[4],0xffffffffffffffff);
      puVar15[2] = uVar12;
      puVar15[3] = puVar5[0xe];
      if (param_3 != '\0') {
        uVar16 = puVar15[1];
        puVar15[1] = uVar12;
        puVar15[2] = uVar16;
      }
      puVar15 = puVar15 + 4;
    }
    iVar10 = fn_82CE5410();
    fn_82CEA4B8(&stack_pair_60.first,*(unsigned int *)(iVar10 + 0x10));
    fn_82BA02A8(&stack_pair_60.first);
  }
  return;
}

