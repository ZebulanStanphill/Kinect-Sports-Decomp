typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern int fn_82250A18();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_8229A000();
extern int fn_8229D068();
extern int fn_8229D190();
extern int fn_822A0C98();
extern int fn_822A0EB8();
extern int fn_822ABA88();
extern int fn_823980B0();
extern int fn_824A7310();
extern int fn_824A73D8();
extern int fn_824D78A0();
extern int fn_82672C20();
extern unsigned int lbl_82195528;
extern unsigned int lbl_82195830;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_88;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_f0;


unsigned __int64 fn_823A4208(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  float *pfVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned int *puVar10;
  unsigned __int64 uVar11;
  unsigned char *puVar12;
  __int64 lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  unsigned __int64 uStack_f0;
  unsigned char auStack_e0 [8];
  double dStack_d8;
  unsigned char auStack_d0 [8];
  double dStack_c8;
  unsigned char auStack_c0 [4];
  unsigned int uStack_bc;
  unsigned __int64 uStack_b8;
  unsigned char auStack_b0 [8];
  double dStack_a8;
  unsigned char auStack_a0 [8];
  double dStack_98;
  unsigned char auStack_90 [8];
  unsigned __int64 uStack_88;
  unsigned char auStack_80 [128];
  
  iVar5 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar5 = fn_82250A18();
  }
  iVar8 = *(int *)(param_1 + 8);
  uVar11 = -(unsigned __int64)(*(char *)(iVar5 + 4) == '\0') & param_2;
  piVar2 = *(int **)(**(int **)(iVar8 + 8) + (int)((param_2 & 0xffffffff) << 2));
  iVar6 = fn_822ABA88(*(unsigned int *)(piVar2[4] * 4 + *piVar2),param_3);
  iVar5 = *(int *)(iVar6 + 0x24);
  if (param_4 != 0) {
    *(unsigned int *)(iVar6 + 0x214) = 0;
    if (iVar5 != 0) {
      fn_824D78A0(iVar5,0);
    }
    goto code_r0x823a467c;
  }
  if (iVar5 == 0) {
    return 0;
  }
  iVar7 = *(int *)(*(int *)(iVar8 + 0x2d8) + 0x148);
  if ((iVar7 == 2) || (bVar3 = false, iVar7 == 0)) {
    bVar3 = true;
  }
  if ((iVar7 == 1) || (bVar4 = false, iVar7 == 0)) {
    bVar4 = true;
  }
  dVar17 = (double)ltcg_pool_0_0f;
  dVar15 = (double)lbl_821CA460;
  if (bVar3) {
    dVar14 = dVar17;
    if ((*(int *)(iVar5 + 0x11c) != 0) &&
       (iVar7 = *(int *)(*(int *)(iVar5 + 0x11c) + 0x3c), dVar17 < (double)*(float *)(iVar7 + 0x20))
       ) {
      dVar14 = (double)(*(float *)(iVar7 + 0x24) / *(float *)(iVar7 + 0x20));
    }
    if (dVar17 < dVar14) {
      iVar8 = *(int *)(*(int *)(iVar8 + 0xd4) + 0xd4);
      dVar16 = dVar15;
      if (dVar14 <= dVar15) {
        if (dVar14 < dVar17) {
          dVar14 = dVar17;
        }
        dVar16 = dVar14;
        if (dVar17 < dVar14) goto code_r0x823a43c0;
      }
      else {
code_r0x823a43c0:
        if (dVar16 != (double)*(float *)(iVar8 + 4)) {
          puVar10 = (unsigned int *)((int)&uStack_f0 + 4);
          lVar13 = 3;
          do {
            puVar10[3] = 0;
            puVar10 = puVar10 + 4;
            *puVar10 = 0;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          fn_82273CD8(auStack_e0,3);
          uStack_f0 = (__int64)(int)uVar11;
          dStack_d8 = (double)uStack_f0;
          fn_82273CD8(auStack_d0,3);
          dStack_c8 = dVar16;
          fn_82273CD8(auStack_c0,3);
          uStack_b8 = lbl_82195830;
          *(float *)(iVar8 + 4) = (float)dVar16;
          fn_82672C20(*(unsigned int *)(iVar8 + 8),0xffffffff821ab15c,auStack_e0,3);
          puVar12 = auStack_b0;
          lVar13 = 2;
          do {
            puVar12 = puVar12 + -0x10;
            fn_82273C88(puVar12);
            lVar13 = lVar13 + -1;
          } while (-1 < lVar13);
        }
      }
      *(unsigned int *)((int)((uVar11 + 9 & 0xffffffff) << 2) + param_1) = 1;
    }
    else {
      iVar7 = (int)((uVar11 + 9 & 0xffffffff) << 2);
      if (*(int *)(iVar7 + param_1) != 0) {
        fn_8229D190(*(unsigned int *)(*(int *)(iVar8 + 0xd4) + 0xd4),uVar11,2);
        *(unsigned int *)(iVar7 + param_1) = 0;
      }
    }
  }
  if (bVar4) {
    dVar14 = dVar17;
    if ((*(int *)(iVar5 + 0x11c) != 0) &&
       (iVar8 = *(int *)(*(int *)(iVar5 + 0x11c) + 0x3c), dVar17 < (double)*(float *)(iVar8 + 0x20))
       ) {
      dVar14 = (double)(*(float *)(iVar8 + 0x28) / *(float *)(iVar8 + 0x20));
    }
    if (dVar17 < dVar14) {
      pfVar1 = *(float **)(*(int *)(*(int *)(param_1 + 8) + 0xd4) + 0xd4);
      if (dVar14 <= dVar15) {
        dVar15 = dVar14;
        if (dVar14 < dVar17) {
          dVar15 = dVar17;
        }
        if (dVar17 < dVar15) goto code_r0x823a4514;
      }
      else {
code_r0x823a4514:
        if (dVar15 != (double)*pfVar1) {
          puVar10 = &uStack_bc;
          lVar13 = 3;
          do {
            puVar10[3] = 0;
            puVar10 = puVar10 + 4;
            *puVar10 = 0;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          fn_82273CD8(auStack_b0,3);
          uStack_f0 = (__int64)(int)uVar11;
          dStack_a8 = (double)uStack_f0;
          fn_82273CD8(auStack_a0,3);
          dStack_98 = dVar15;
          fn_82273CD8(auStack_90,3);
          uStack_88 = lbl_82195528;
          *pfVar1 = (float)dVar15;
          fn_82672C20(pfVar1[2],0xffffffff821ab15c,auStack_b0,3);
          puVar12 = auStack_80;
          lVar13 = 2;
          do {
            puVar12 = puVar12 + -0x10;
            fn_82273C88(puVar12);
            lVar13 = lVar13 + -1;
          } while (-1 < lVar13);
        }
      }
      *(unsigned int *)((int)((uVar11 + 0xb & 0xffffffff) << 2) + param_1) = 1;
    }
    else {
      iVar8 = (int)((uVar11 + 0xb & 0xffffffff) << 2);
      if (*(int *)(iVar8 + param_1) != 0) {
        fn_8229D190(*(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 0xd4) + 0xd4),uVar11,1);
        *(unsigned int *)(iVar8 + param_1) = 0;
      }
    }
  }
  iVar8 = *(int *)(iVar5 + 0x11c);
  if ((((iVar8 == 0) || (iVar7 = fn_824A73D8(iVar8), iVar7 == 0)) ||
      (*(float *)(*(int *)(iVar8 + 0x3c) + 0x28) <= *(float *)(*(int *)(iVar8 + 0x3c) + 0x20))) ||
     (!bVar4)) {
    iVar5 = *(int *)(iVar5 + 0x11c);
    if (((iVar5 == 0) || (iVar8 = fn_824A7310(iVar5), iVar8 == 0)) ||
       ((*(float *)(*(int *)(iVar5 + 0x3c) + 0x24) <= *(float *)(*(int *)(iVar5 + 0x3c) + 0x20) ||
        (!bVar3)))) {
      return 0;
    }
    *(unsigned int *)(iVar6 + 0x214) = 1;
    if (*(int *)(iVar6 + 0x24) != 0) {
      fn_824D78A0(*(int *)(iVar6 + 0x24),1);
    }
    uVar9 = 2;
  }
  else {
    *(unsigned int *)(iVar6 + 0x214) = 0;
    if (*(int *)(iVar6 + 0x24) != 0) {
      fn_824D78A0(*(int *)(iVar6 + 0x24),0);
    }
    uVar9 = 1;
  }
  fn_8229D068(*(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 0xd4) + 0xd4),uVar11,uVar9);
code_r0x823a467c:
  *(unsigned int *)(iVar6 + 0x278) = 1;
  iVar5 = *(int *)(*(int *)(param_1 + 8) + 0xd4);
  iVar8 = fn_822A0C98(iVar5);
  if (iVar8 != 0) {
    fn_8229A000(*(unsigned int *)(iVar5 + 0x3c));
    fn_8229A000(*(unsigned int *)(iVar5 + 0x40));
    fn_822A0EB8(iVar5);
  }
  fn_823980B0(*(unsigned int *)(param_1 + 8),*(unsigned int *)(iVar6 + 0x2c),0);
  fn_822A0EB8(*(unsigned int *)(*(int *)(param_1 + 8) + 0xd4));
  return 1;
}

