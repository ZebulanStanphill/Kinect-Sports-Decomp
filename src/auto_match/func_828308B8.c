extern unsigned int *auStack_b0;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_c0;
extern int fn_8265C9E0();
extern int fn_828252D0();
extern int fn_828252D8();
extern int fn_82826568();
extern int fn_828277F0();
extern int fn_82827980();
extern int fn_82828B78();
extern int fn_82829758();
extern int fn_82829A80();
extern int fn_8282BBD0();
extern int fn_82830268();
extern int fn_828302D8();
extern int fn_828311B0();
extern unsigned int iStack_9c;
extern unsigned int iStack_a0;
extern unsigned int iStack_bc;
extern unsigned int uStack_8e;
extern unsigned int uStack_8f;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;


void fn_828308B8(int param_1,int param_2)

{
  int iVar2;
  int iVar3;
  __int64 lVar1;
  unsigned __int64 uVar4;
  int *piVar5;
  int iVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int uVar9;
  int iVar10;
  int iVar11;
  __int64 lVar12;
  unsigned int uVar13;
  int iVar14;
  unsigned int uVar15;
  int iVar16;
  unsigned char auStack_c0 [4];
  int iStack_bc;
  unsigned int auStack_b8;
  unsigned char auStack_b0 [16];
  struct { int first; int second; } stack_pair_a0;

  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned char uStack_90;
  unsigned char uStack_8f;
  unsigned short uStack_8e;
  
  iVar3 = 0;
  iVar2 = fn_828302D8();
  if (*(int *)(iVar2 + 0x28) != 0) {
    iVar3 = fn_828252D0(*(int *)(iVar2 + 0x28) << 2);
  }
  *(unsigned char *)(param_2 + 0x3f1) = 0;
  uVar9 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar14 = 0;
    iVar2 = iVar3;
    do {
      piVar5 = (int *)(iVar14 + *(int *)(param_1 + 0xe8));
      lVar1 = -0x7dfe0fbc;
      if ((unsigned __int64)*(unsigned int *)(param_1 + 0xe4) != 0) {
        lVar1 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0xe0) + *piVar5 * 4 + -4) +
                (unsigned __int64)*(unsigned int *)(param_1 + 0xe4);
      }
      iVar10 = 1 << (*(unsigned char *)(iVar14 + *(int *)(param_1 + 0xe8) + 0xd) & 0x3f);
      fn_82829A80(param_2,lVar1,
                        (unsigned __int64)
                        *(unsigned int *)((unsigned int)*(unsigned char *)(piVar5 + 3) * 0x21 + *(int *)(param_1 + 0x114) +
                                 -0x21) + (unsigned __int64)*(unsigned int *)(param_1 + 200),&auStack_b8,iVar10);
      if (*(int *)(iVar14 + *(int *)(param_1 + 0xe8) + 8) != 0) {
        iVar6 = iVar14 + *(int *)(param_1 + 0xe8);
        fn_82829758(auStack_b8,iVar2,*(unsigned int *)(iVar6 + 4),*(unsigned int *)(iVar6 + 8),
                          iVar10,1);
      }
      uVar9 = uVar9 + 1;
      iVar14 = iVar14 + 0xe;
      iVar2 = iVar2 + 4;
    } while (uVar9 < *(unsigned int *)(param_1 + 0x28));
  }
  iVar2 = 0;
  uVar9 = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar14 = *(int *)(param_1 + 0xec);
    iVar10 = 0;
    do {
      uVar15 = 0;
      if (*(int *)(iVar10 + iVar14 + 4) != 0) {
        iVar6 = iVar2 << 2;
        do {
          piVar5 = (int *)(iVar10 + *(int *)(param_1 + 0xec));
          uVar4 = (unsigned __int64)*(unsigned int *)(iVar6 + *(int *)(param_1 + 0xf0));
          fn_8282BBD0(param_2,*(unsigned int *)(*piVar5 * 4 + iVar3 + -4) + uVar4,uVar4,*piVar5,
                          piVar5[3],piVar5[2],piVar5[4]);
          iVar14 = *(int *)(param_1 + 0xec);
          uVar15 = uVar15 + 1;
          iVar2 = iVar2 + 1;
          iVar6 = iVar6 + 4;
        } while (uVar15 < *(unsigned int *)(iVar10 + iVar14 + 4));
      }
      uVar9 = uVar9 + 1;
      iVar10 = iVar10 + 0x14;
    } while (uVar9 < *(unsigned int *)(param_1 + 0x2c));
  }
  iVar2 = 0;
  uVar9 = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    iVar14 = *(int *)(param_1 + 0xfc);
    iVar10 = 0;
    do {
      uVar15 = 0;
      if (*(int *)(iVar10 + iVar14 + 8) != 0) {
        iVar6 = iVar2 << 2;
        do {
          puVar7 = (unsigned int *)(iVar10 + *(int *)(param_1 + 0xfc));
          fn_82830268(param_2,*(unsigned int *)(iVar6 + *(int *)(param_1 + 0x100)),*puVar7,puVar7[1]
                       );
          iVar14 = *(int *)(param_1 + 0xfc);
          uVar15 = uVar15 + 1;
          iVar2 = iVar2 + 1;
          iVar6 = iVar6 + 4;
        } while (uVar15 < *(unsigned int *)(iVar10 + iVar14 + 8));
      }
      uVar9 = uVar9 + 1;
      iVar10 = iVar10 + 0xc;
    } while (uVar9 < *(unsigned int *)(param_1 + 0x34));
  }
  *(unsigned int *)(param_2 + 0x3e4) = 0;
  iVar2 = 0;
  uVar9 = 0;
  if (*(char *)(param_1 + 0x51) != '\0') {
    iVar14 = 0;
    do {
      puVar8 = (unsigned int *)(*(int *)(param_1 + 0x114) + iVar14);
      iVar10 = *(int *)((int)puVar8 + 5);
      lVar12 = (unsigned __int64)*puVar8 + (unsigned __int64)*(unsigned int *)(param_1 + 200);
      fn_82827980(param_2,lVar12,&iStack_bc);
      lVar1 = fn_8265C9E0(0x10);
      if (lVar1 == 0) {
        lVar1 = 0;
      }
      else {
        fn_82828B78(lVar1,auStack_c0,auStack_c0);
      }
      *(int *)(iStack_bc + 0x28) = (int)lVar1;
      if (iVar10 == 0) {
        fn_828277F0(param_2,0xffffffff8201f048,lVar12,iStack_bc + 0x24,
                        1 << (*(unsigned char *)(*(int *)(param_1 + 0x114) + iVar14 + 4) & 0x3f));
      }
      else {
        *(unsigned int *)(param_2 + 0x3e4) =
             *(unsigned int *)(*(int *)(param_1 + 0xe8) + iVar10 * 0xe + -0xe);
        fn_82826568(param_2,iVar10,iStack_bc + 0x24);
        uVar15 = 0;
        if (*(char *)(param_1 + 0x53) != '\0') {
          iVar6 = *(int *)(param_1 + 0x118);
          iVar11 = 0;
          do {
            if ((*(int *)(iVar6 + iVar11) == iVar10) &&
               (uVar13 = 0, *(int *)(iVar6 + iVar11 + 4) != 0)) {
              iVar16 = iVar2 << 4;
              do {
                puVar7 = (unsigned int *)(iVar16 + *(int *)(param_1 + 0x11c));
                stack_pair_a0.second = puVar7[1];
                uStack_8f = *(unsigned char *)((int)puVar7 + 0xd);
                uStack_90 = *(unsigned char *)(puVar7 + 3);
                uStack_8e = *(unsigned short *)((int)puVar7 + 0xe);
                uStack_98 = *puVar7;
                uStack_94 = puVar7[2];
                stack_pair_a0.first = *(int *)(*(int *)(iStack_bc + 0x24) + 0x44) + stack_pair_a0.second;
                fn_828311B0(auStack_b0,*(unsigned int *)(iStack_bc + 0x28),&stack_pair_a0.first);
                iVar6 = *(int *)(param_1 + 0x118);
                uVar13 = uVar13 + 1;
                iVar2 = iVar2 + 1;
                iVar16 = iVar16 + 0x10;
              } while (uVar13 < *(unsigned int *)(iVar6 + iVar11 + 4));
            }
            uVar15 = uVar15 + 1;
            iVar11 = iVar11 + 8;
          } while (uVar15 < *(unsigned char *)(param_1 + 0x53));
        }
      }
      uVar9 = uVar9 + 1;
      iVar14 = iVar14 + 0x21;
    } while (uVar9 < *(unsigned char *)(param_1 + 0x51));
  }
  fn_828252D8(iVar3);
  *(unsigned char *)(param_2 + 0x3f1) = 1;
  return;
}

