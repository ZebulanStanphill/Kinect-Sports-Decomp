extern unsigned int *auStack_4c;
extern int fn_82559EF0();
extern int fn_825A2A88();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_50;


void fn_82573AE0(unsigned __int64 param_1,__int64 param_2,int param_3,int param_4)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned __int64 in_r0;
  int iVar4;
  __int64 lVar5;
  int *piVar6;
  double dVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uStack_50;
  unsigned int auStack_4c [19];
  
  piVar1 = (int *)param_2;
  iVar4 = 0;
  if (0 < piVar1[9]) {
    lVar5 = param_2 + 0x28;
    do {
      piVar6 = (int *)lVar5;
      puVar2 = (unsigned int *)((int)in_r0 + param_3 & 0xfffffff0);
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      puVar3 = (unsigned int *)((int)in_r0 + param_4 & 0xfffffff0);
      uVar11 = *puVar3;
      uVar12 = puVar3[1];
      uVar13 = puVar3[2];
      uVar14 = puVar3[3];
      puVar3 = (unsigned int *)(*piVar6 + 0xa0U & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar8;
      puVar3[2] = uVar9;
      puVar3[3] = uVar10;
      puVar2 = (unsigned int *)(*piVar6 + 0xb0U & 0xfffffff0);
      *puVar2 = uVar11;
      puVar2[1] = uVar12;
      puVar2[2] = uVar13;
      puVar2[3] = uVar14;
      if (*(int *)(*piVar6 + 0x1b0) != 0) {
        (**(int (***)())(**(int **)(*piVar6 + 0x1b0) + 8))(*(int **)(*piVar6 + 0x1b0),0x18,0);
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < piVar1[9]);
  }
  if (*piVar1 != 0) {
    fn_82559EF0(&uStack_50,auStack_4c);
    lVar5 = 0;
    if (0 < *piVar1) {
      dVar7 = (double)ltcg_pool_0_0f;
      do {
        param_2 = param_2 + 4;
        iVar4 = fn_825A2A88(param_1,*(unsigned int *)param_2);
        if (iVar4 != 0) {
          puVar2 = (unsigned int *)((int)in_r0 + param_3 & 0xfffffff0);
          uVar8 = puVar2[1];
          uVar9 = puVar2[2];
          uVar10 = puVar2[3];
          puVar3 = (unsigned int *)(iVar4 + 0x30U & 0xfffffff0);
          *puVar3 = *puVar2;
          puVar3[1] = uVar8;
          puVar3[2] = uVar9;
          puVar3[3] = uVar10;
          *(unsigned int *)(iVar4 + 0x94) = uStack_50;
          *(unsigned int *)(iVar4 + 0x98) = auStack_4c[0];
          *(float *)(iVar4 + 0x9c) = (float)dVar7;
        }
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < *piVar1);
    }
  }
  return;
}

