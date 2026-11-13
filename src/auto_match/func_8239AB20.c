extern unsigned int *auStack_50;
extern unsigned int fStack_5c;
extern int fn_823116D8();
extern int fn_8239AA78();
extern int fn_8239D070();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_60;


void fn_8239AB20(int param_1)

{
  unsigned __int64 *puVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned __int64 *puVar5;
  unsigned __int64 in_r0;
  int iVar6;
  int iVar7;
  unsigned __int64 *puVar8;
  int iVar9;
  unsigned __int64 *puVar10;
  int *piVar11;
  double dVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uStack_60;
  float fStack_5c;
  unsigned char auStack_50 [16];
  
  iVar9 = param_1 + 0x1e8;
  for (puVar10 = *(unsigned __int64 **)(param_1 + 0x1e8); puVar10 != *(unsigned __int64 **)(param_1 + 0x1ec);
      puVar10 = puVar10 + 4) {
    iVar6 = fn_8239D070(param_1,puVar10,*(unsigned int *)(param_1 + 0x174));
    if (iVar6 != 0) {
      puVar1 = *(unsigned __int64 **)(param_1 + 0x1ec);
      puVar8 = puVar10;
      puVar5 = puVar10;
      while (puVar5 = puVar5 + 4, puVar5 != puVar1) {
        *puVar8 = *puVar5;
        puVar8[1] = puVar5[1];
        puVar8[2] = puVar5[2];
        puVar8[3] = puVar5[3];
        puVar8 = puVar8 + 4;
      }
      iVar7 = *(int *)(param_1 + 0x1ec) + -0x20;
      for (iVar6 = iVar7; iVar6 != *(int *)(param_1 + 0x1ec); iVar6 = iVar6 + 0x20) {
      }
      *(int *)(param_1 + 0x1ec) = iVar7;
      puVar10 = puVar10 + -4;
    }
  }
  iVar6 = *(int *)(param_1 + 0x1e4);
  dVar12 = (double)ltcg_pool_0_0f;
  if ((iVar6 != 0) && (iVar7 = fn_8239AA78(param_1), iVar7 != 0)) {
    fStack_5c = (float)dVar12;
    uStack_60 = 1;
    puVar3 = (unsigned int *)(iVar6 + 0x30U & 0xfffffff0);
    uVar13 = puVar3[1];
    uVar14 = puVar3[2];
    uVar15 = puVar3[3];
    puVar4 = (unsigned int *)((unsigned int)(auStack_50 + (int)in_r0) & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar13;
    puVar4[2] = uVar14;
    puVar4[3] = uVar15;
    fn_823116D8(iVar9,&uStack_60);
  }
  piVar2 = *(int **)(param_1 + 0x1b8);
  for (piVar11 = *(int **)(param_1 + 0x1b4); piVar11 != piVar2; piVar11 = piVar11 + 1) {
    iVar6 = *piVar11;
    iVar7 = fn_8239AA78(param_1,iVar6);
    if (iVar7 != 0) {
      puVar3 = (unsigned int *)(iVar6 + 0x30U & 0xfffffff0);
      uVar13 = puVar3[1];
      uVar14 = puVar3[2];
      uVar15 = puVar3[3];
      fStack_5c = (float)dVar12;
      uStack_60 = 1;
      puVar4 = (unsigned int *)((unsigned int)(auStack_50 + (int)in_r0) & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar13;
      puVar4[2] = uVar14;
      puVar4[3] = uVar15;
      fn_823116D8(iVar9,&uStack_60);
    }
  }
  piVar2 = *(int **)(param_1 + 0x1c8);
  for (piVar11 = *(int **)(param_1 + 0x1c4); piVar11 != piVar2; piVar11 = piVar11 + 1) {
    iVar6 = *piVar11;
    iVar7 = fn_8239AA78(param_1,iVar6);
    if (iVar7 != 0) {
      puVar3 = (unsigned int *)(iVar6 + 0x30U & 0xfffffff0);
      uVar13 = puVar3[1];
      uVar14 = puVar3[2];
      uVar15 = puVar3[3];
      fStack_5c = (float)dVar12;
      uStack_60 = 1;
      puVar4 = (unsigned int *)((unsigned int)(auStack_50 + (int)in_r0) & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar13;
      puVar4[2] = uVar14;
      puVar4[3] = uVar15;
      fn_823116D8(iVar9,&uStack_60);
    }
  }
  piVar2 = *(int **)(param_1 + 0x1a8);
  for (piVar11 = *(int **)(param_1 + 0x1a4); piVar11 != piVar2; piVar11 = piVar11 + 1) {
    iVar6 = *piVar11;
    iVar7 = fn_8239AA78(param_1,iVar6);
    if (iVar7 != 0) {
      puVar3 = (unsigned int *)(iVar6 + 0x30U & 0xfffffff0);
      uVar13 = puVar3[1];
      uVar14 = puVar3[2];
      uVar15 = puVar3[3];
      fStack_5c = (float)dVar12;
      uStack_60 = 1;
      puVar4 = (unsigned int *)((unsigned int)(auStack_50 + (int)in_r0) & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar13;
      puVar4[2] = uVar14;
      puVar4[3] = uVar15;
      fn_823116D8(iVar9,&uStack_60);
    }
  }
  return;
}

