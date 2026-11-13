extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_82A1DDC0();
extern unsigned int lbl_8329F13C;


void fn_82C8E218(unsigned __int64 param_1,int param_2,__int64 param_3,__int64 param_4,int param_5,
                  int param_6,int param_7,int param_8)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  int in_r0;
  unsigned char *pbVar3;
  __int64 lVar4;
  int iVar6;
  int iVar7;
  __int64 lVar5;
  int iVar8;
  __int64 lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  unsigned int uVar13;
  unsigned char in_vs43 [16];
  unsigned char in_vs61 [16];
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned int in_register_000103e0;
  unsigned int in_register_000103e4;
  unsigned int in_register_000103e8;
  unsigned int in_vr62;
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  int in_stack_0000005c;
  int in_stack_00000064;
  unsigned int auStack_a0 [4];
  unsigned int auStack_90 [36];
  
  param_2 = param_2 + param_5;
  iVar11 = param_2 - lbl_8329F13C;
  iVar10 = lbl_8329F13C * 2 + (-param_8 & 0xfU) + param_8;
  pbVar3 = (unsigned char *)(param_2 + param_8 + -1);
  iVar6 = iVar10 - lbl_8329F13C;
  lVar9 = ((-(unsigned __int64)(in_stack_00000064 != 0) & 0x1c) << 0x20 |
          -(unsigned __int64)(in_stack_00000064 != 0) & 0x14) + 0x14;
  iVar12 = iVar11;
  if ((int)param_3 < (int)param_4) {
    param_3 = param_4 - param_3;
    do {
      iVar7 = iVar6 + iVar12;
      auStack_90[0] = (unsigned int)*pbVar3;
      puVar1 = (unsigned int *)((int)auStack_90 + in_r0 & 0xfffffff0);
      uVar18 = *puVar1;
      uVar19 = puVar1[1];
      uVar20 = puVar1[2];
      uVar21 = puVar1[3];
      auStack_a0[0] = (unsigned int)*(unsigned char *)((param_2 - iVar11) + iVar12);
      iVar8 = 0;
      puVar1 = (unsigned int *)((int)auStack_a0 + in_r0 & 0xfffffff0);
      uVar14 = *puVar1;
      uVar15 = puVar1[1];
      uVar16 = puVar1[2];
      uVar17 = puVar1[3];
      puVar1 = (unsigned int *)((int)auStack_a0 + in_r0 & 0xfffffff0);
      *puVar1 = uVar14;
      puVar1[1] = uVar15;
      puVar1[2] = uVar16;
      puVar1[3] = uVar17;
      puVar1 = (unsigned int *)((int)auStack_90 + in_r0 & 0xfffffff0);
      *puVar1 = uVar18;
      puVar1[1] = uVar19;
      puVar1[2] = uVar20;
      puVar1[3] = uVar21;
      for (uVar13 = -param_8 & 0xfU; uVar13 != 0; uVar13 = uVar13 - 1) {
        pbVar3[iVar8 + 1] = *pbVar3;
        iVar8 = iVar8 + 1;
      }
      puVar1 = (unsigned int *)(in_r0 + iVar12 & 0xfffffff0);
      *puVar1 = uVar14;
      puVar1[1] = uVar15;
      puVar1[2] = uVar16;
      puVar1[3] = uVar17;
      param_3 = param_3 + -1;
      puVar1 = (unsigned int *)(in_r0 + iVar7 & 0xfffffff0);
      *puVar1 = uVar18;
      puVar1[1] = uVar19;
      puVar1[2] = uVar20;
      puVar1[3] = uVar21;
      pbVar3 = pbVar3 + in_stack_0000005c;
      puVar1 = (unsigned int *)(iVar12 + 0x10U & 0xfffffff0);
      *puVar1 = uVar14;
      puVar1[1] = uVar15;
      puVar1[2] = uVar16;
      puVar1[3] = uVar17;
      iVar12 = iVar12 + in_stack_0000005c;
      puVar1 = (unsigned int *)(iVar7 + 0x10U & 0xfffffff0);
      *puVar1 = uVar18;
      puVar1[1] = uVar19;
      puVar1[2] = uVar20;
      puVar1[3] = uVar21;
    } while (param_3 != 0);
  }
  if (param_6 != 0) {
    iVar8 = iVar11 - (int)lVar9 * in_stack_0000005c;
    iVar6 = (iVar10 >> 3 & 0x1ffffffeU) * 8;
    fn_82A1DDC0(iVar8,iVar11,iVar10);
    lVar4 = lVar9;
    if ((int)lVar9 != 0) {
      do {
        iVar11 = 0;
        if (0 < iVar6) {
          lVar5 = (unsigned __int64)(iVar6 - 1U >> 4) + 1;
          do {
            altv300_21(in_vs43,in_vs61);
            puVar1 = (unsigned int *)(iVar11 + iVar8 & 0xfffffff0);
            *puVar1 = in_register_000103f0;
            puVar1[1] = in_register_000103f4;
            puVar1[2] = in_register_000103f8;
            puVar1[3] = in_vr63;
            iVar11 = iVar11 + 0x10;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
        }
        lVar4 = lVar4 + -1;
        iVar8 = iVar8 + in_stack_0000005c;
      } while (lVar4 != 0);
    }
  }
  if (param_7 != 0) {
    iVar6 = (iVar10 >> 3 & 0x1ffffffeU) * 8;
    if (in_stack_00000064 == 0) {
      uVar2 = -param_4 & 0xf;
    }
    else {
      uVar2 = -param_4 & 0x1f;
    }
    lVar9 = uVar2 + lVar9;
    fn_82A1DDC0(iVar12,iVar12 - in_stack_0000005c,iVar10);
    if ((int)lVar9 != 0) {
      do {
        iVar10 = 0;
        if (0 < iVar6) {
          lVar4 = (unsigned __int64)(iVar6 - 1U >> 4) + 1;
          do {
            altv300_21(in_vs43,in_vs61);
            puVar1 = (unsigned int *)(iVar10 + iVar12 & 0xfffffff0);
            *puVar1 = in_register_000103e0;
            puVar1[1] = in_register_000103e4;
            puVar1[2] = in_register_000103e8;
            puVar1[3] = in_vr62;
            iVar10 = iVar10 + 0x10;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        lVar9 = lVar9 + -1;
        iVar12 = iVar12 + in_stack_0000005c;
      } while (lVar9 != 0);
    }
  }
  return;
}

