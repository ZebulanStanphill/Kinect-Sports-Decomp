typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_a0;
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b0;
extern int fn_8223C478();
extern int fn_8240D928();
extern int fn_8287C340();
extern int fn_8287C5A0();
extern int fn_8288B2D8();
extern int fn_8288B588();
extern int fn_82897620();
extern int fn_82897B18();
extern int fn_82897BA8();
extern int fn_82897BD0();
extern int fn_82897BF8();
extern int fn_82897C00();
extern int fn_828B2E68();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B55F0();
extern int fn_828B55F8();
extern int fn_828B5600();
extern int fn_828B56B8();
extern int fn_828B57B0();
extern int fn_828E9DB8();
extern unsigned int iStack_b4;
extern unsigned int iStack_bc;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;


unsigned __int64 fn_828916D0(int param_1,unsigned __int64 param_2,int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  bool bVar3;
  int iVar4;
  int iVar11;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  int *piVar12;
  char cVar19;
  int iVar13;
  int iVar14;
  unsigned __int64 uVar10;
  int iVar15;
  int iVar16;
  int *piVar17;
  int *piVar18;
  unsigned int *puVar20;
  unsigned int *puVar21;
  unsigned __int64 uVar22;
  int iVar23;
  int iVar24;
  unsigned __int64 uVar25;
  bool bVar26;
  struct { unsigned int first; int second; } stack_pair_c0;

  struct { unsigned int first; int second; } stack_pair_b8;

  unsigned char auStack_b0 [8];
  unsigned char auStack_a8 [8];
  unsigned char auStack_a0 [160];

  iVar11 = (**(int (***)())(*param_3 + 8))(param_3);
  iVar13 = *(int *)(iVar11 + 0x10);
  stack_pair_c0.second = iVar13;
  lVar5 = fn_8240D928(*(unsigned int *)(param_1 + 0x48c));
  if (*(char *)((int)lVar5 + iVar11 + 0x34) == '\0') {
    return 0;
  }
  iVar14 = (int)((lVar5 + 5U & 0x3fffffff) << 2);
  uVar1 = *(unsigned int *)(iVar14 + iVar11);
  stack_pair_b8.second = iVar14;
  if ((unsigned __int64)uVar1 != 0) {
    iVar13 = (int)((lVar5 + 9U & 0xffffffff) << 2);
    *(int *)(iVar13 + iVar11) = *(int *)(iVar13 + iVar11) + 1;
    fn_8288B588(iVar11,(unsigned __int64)uVar1 - 1,lVar5);
    return 0;
  }
  param_3 = param_3 + 5;
  fn_828B5580(auStack_b0,param_3);
  uVar6 = fn_828B55F8(auStack_b0);
  fn_828B55B0(auStack_b0);
  if (*(int *)(param_1 + 0x480) == 0) {
LAB_828917e8:
    fn_828B56B8(param_2,uVar6,param_1 + 0x494);
  }
  else {
    bVar26 = uVar6 != *(unsigned int *)(param_1 + 0x484);
    fn_8223C478(param_1 + 0x494,1,0);
    fn_828E9DB8(param_1 + 0x494,bVar26,1);
    if (bVar26) goto LAB_828917e8;
  }
  iVar23 = param_1 + 0x494;
  *(int *)(param_1 + 0x484) = (int)uVar6;
  fn_828B5580(auStack_a8,param_3);
  uVar7 = fn_828B55F0(auStack_a8);
  fn_828B55B0(auStack_a8);
  if (*(int *)(param_1 + 0x480) != 0) {
    bVar26 = uVar7 != *(unsigned int *)(param_1 + 0x488);
    fn_8223C478(iVar23,1,0);
    fn_828E9DB8(iVar23,bVar26,1);
    if (!bVar26) goto LAB_82891888;
  }
  fn_8223C478(iVar23,2,0);
  fn_828E9DB8(iVar23,uVar7,2);
LAB_82891888:
  *(int *)(param_1 + 0x488) = (int)uVar7;
  uVar8 = fn_828B57B0(param_2,uVar6);
  fn_828B5580(auStack_a0,param_3);
  uVar9 = fn_828B5600(auStack_a0);
  fn_8223C478(iVar23,uVar8,0);
  fn_828E9DB8(iVar23,uVar9,uVar8);
  fn_828B55B0(auStack_a0);
  uVar6 = 0xffffffffffffffff;
  iVar4 = (int)((lVar5 + 9U & 0xffffffff) << 2);
  stack_pair_c0.first = 0xffffffff;
  uVar7 = 0;
  uVar1 = *(unsigned int *)(iVar4 + iVar11);
  if (*(int *)(iVar13 + 8) != 0) {
    do {
      piVar12 = (int *)fn_8288B2D8(iVar13,uVar7);
      cVar19 = fn_82897BA8();
      if ((cVar19 != '\0') && (cVar19 = fn_828B2E68(piVar12), cVar19 != '\0')) {
        bVar26 = false;
        iVar13 = fn_82897620(iVar11,uVar7);
        if (*(int **)(iVar13 + 0x20) == (int *)0x0) {
          iVar14 = 0;
        }
        else {
          iVar14 = (**(int (***)())(**(int **)(iVar13 + 0x20) + 4))();
        }
        iVar13 = fn_8240D928(*(unsigned int *)(param_1 + 0x48c));
        uVar22 = (unsigned __int64)*(unsigned int *)((iVar13 + 3) * 4 + iVar14);
        uVar25 = (-(unsigned __int64)(uVar22 != 3) & (unsigned __int64)uVar1) + uVar22;
        if (uVar25 != 0) {
          bVar3 = false;
          cVar19 = fn_82897BF8(piVar12);
          if ((cVar19 != '\0') &&
             (uVar10 = fn_82897C00(piVar12), (uVar10 & 0xffffffff) <= (uVar25 & 0xffffffff))) {
            bVar3 = true;
            bVar26 = (int)uVar25 ==
                     (int)((uVar25 & 0xffffffff) / (uVar10 & 0xffffffff)) * (int)uVar10;
          }
          if ((!bVar3) && (cVar19 = fn_8287C340(uVar25), cVar19 != '\0')) {
            bVar26 = true;
          }
        }
        fn_8223C478(iVar23,1,0);
        fn_828E9DB8(iVar23,bVar26,1);
        for (piVar18 = piVar12; iVar13 = stack_pair_c0.second, piVar18 != (int *)0x0;
            piVar18 = (int *)fn_82897BD0(piVar18)) {
          uVar8 = fn_82897B18(piVar18);
          iVar13 = fn_82897620(iVar11,uVar8);
          if (uVar22 != 0) {
            iVar24 = 1;
            if ((unsigned __int64)uVar1 != 0) {
              iVar24 = uVar1 + 1;
            }
            if (*(int **)(iVar13 + 0x20) == (int *)0x0) {
              iVar15 = 0;
            }
            else {
              iVar15 = (**(int (***)())(**(int **)(iVar13 + 0x20) + 4))();
            }
            iVar16 = fn_8240D928(*(unsigned int *)(param_1 + 0x48c));
            iVar16 = (iVar16 + 3) * 4;
            *(int *)(iVar16 + iVar15) = *(int *)(iVar16 + iVar15) + iVar24;
          }
          iVar24 = fn_8240D928(*(unsigned int *)(param_1 + 0x48c));
          uVar2 = *(unsigned int *)((iVar24 + 3) * 4 + iVar14);
          uVar25 = (unsigned __int64)uVar2;
          if (uVar25 != 0) {
            bVar3 = false;
            cVar19 = fn_82897BF8(piVar12);
            if ((cVar19 != '\0') &&
               (uVar10 = fn_82897C00(piVar12), (uVar10 & 0xffffffff) <= uVar25)) {
              bVar3 = true;
              uVar6 = uVar10 - (uVar25 - (__int64)(int)(uVar25 / (uVar10 & 0xffffffff)) *
                                         (__int64)(int)uVar10);
              stack_pair_c0.first = (unsigned int)uVar6;
            }
            if (!bVar3) {
              iVar24 = fn_8287C5A0(uVar25);
              stack_pair_b8.first = iVar24 - uVar2;
              puVar21 = &stack_pair_b8.first;
              if ((uVar6 & 0xffffffff) <= (unsigned __int64)stack_pair_b8.first) {
                puVar21 = &stack_pair_c0.first;
              }
              stack_pair_c0.first = *puVar21;
              uVar6 = (unsigned __int64)stack_pair_c0.first;
            }
          }
          if (bVar26) {
            (**(int (***)())(*piVar18 + 4))(piVar18,param_2,iVar23,iVar13 + 4);
            if (*(int **)(iVar13 + 0x20) == (int *)0x0) {
              piVar17 = (int *)0x0;
            }
            else {
              piVar17 = (int *)(**(int (***)())(**(int **)(iVar13 + 0x20) + 4))();
            }
            iVar24 = *piVar17;
            uVar8 = fn_8240D928(*(unsigned int *)(param_1 + 0x48c));
            (**(int (***)())(iVar24 + 0x28))(piVar17,uVar8,iVar13 + 4);
          }
        }
      }
      uVar7 = uVar7 + 1;
      iVar14 = stack_pair_b8.second;
    } while ((uVar7 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar13 + 8));
  }
  *(unsigned char *)(param_1 + 0x490) = 1;
  iVar13 = 0;
  *(int *)(param_1 + 0x480) = *(int *)(param_1 + 0x480) + 1;
  *(unsigned int *)(iVar4 + iVar11) = 0;
  if ((int)lVar5 != -1) {
    *(int *)(iVar14 + iVar11) = (int)uVar6;
    return 1;
  }
  puVar20 = (unsigned int *)(iVar11 + 0x14);
  lVar5 = 4;
  do {
    *puVar20 = (int)uVar6;
    if ((uVar6 & 0xffffffff) == 0) {
      *(unsigned char *)(iVar13 + iVar11 + 0x34) = 1;
    }
    iVar13 = iVar13 + 1;
    puVar20 = puVar20 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return 1;
}
