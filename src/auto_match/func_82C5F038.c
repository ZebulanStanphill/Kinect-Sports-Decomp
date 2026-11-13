typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82C565B0();
extern int fn_82C65818();
extern int fn_82C658A8();
extern int fn_82C68D68();
extern int fn_82C69268();
extern int fn_82C9D0C8();
extern int fn_82CA6210();
extern int fn_82CA6690();
extern int fn_82CA6740();
extern int fn_82CB1DF0();
extern int fn_82CB2F60();
extern unsigned int iStack_bc;
extern unsigned int iStack_c0;
extern unsigned int lbl_820FC6B0;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64 fn_82C5F038(int param_1)

{
  unsigned char uVar1;
  unsigned char uVar2;
  unsigned char uVar3;
  int iVar4;
  unsigned int uVar5;
  __int64 lVar6;
  int iVar8;
  unsigned __int64 uVar7;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  int iVar12;
  unsigned int uVar13;
  unsigned __int64 uVar14;
  unsigned int uVar15;
  __int64 lVar16;
  __int64 lVar17;
  unsigned __int64 uVar18;
  unsigned short *puVar19;
  unsigned __int64 uVar20;
  __int64 lVar21;
  unsigned __int64 uVar22;
  char *pcVar23;
  unsigned int *puVar24;
  unsigned char *puVar25;
  unsigned __int64 uVar26;
  bool bVar27;
  unsigned int uStack_c8;
  unsigned int uStack_c4;
  int iStack_c0;
  int iStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  
  uStack_c8 = *(unsigned int *)(param_1 + 0xe0);
  uVar15 = *(int *)(param_1 + 0x88) + 1;
  uStack_c4 = *(int *)(param_1 + 0xecc) + *(unsigned int *)(param_1 + 0xdc);
  iStack_c0 = *(int *)(param_1 + 0xed0) + uStack_c8;
  iStack_bc = *(int *)(param_1 + 0xed4) + uStack_c8;
  uVar14 = (unsigned __int64)*(unsigned int *)(param_1 + 0xec4) + (unsigned __int64)uStack_c8;
  uVar22 = (unsigned __int64)*(unsigned int *)(param_1 + 0xdc) + (unsigned __int64)*(unsigned int *)(param_1 + 0xec0);
  uStack_c8 = uStack_c8 + *(int *)(param_1 + 0xec8);
  puVar24 = *(unsigned int **)(param_1 + 0x110);
  pcVar23 = *(char **)(param_1 + 0x10c);
  puVar19 = *(unsigned short **)(param_1 + 0x768);
  uVar18 = (unsigned __int64)*(unsigned int *)(param_1 + 0x76c);
  uStack_b0 = (unsigned int)uVar22;
  uStack_b4 = (unsigned int)uVar14;
  *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x88);
  if ((*(int *)(param_1 + 0x3cb0) == 3) || (3 < *(int *)(param_1 + 0x3cb0))) {
    uVar5 = *(unsigned int *)(param_1 + 0x7f8);
    iVar12 = (*(int *)(param_1 + 0xb94) + 0x2df) * 4;
    *(unsigned int *)(param_1 + 0xb64) = *(unsigned int *)(iVar12 + param_1);
    *(unsigned int *)(param_1 + 0xb68) = *(unsigned int *)(iVar12 + param_1);
    *(unsigned int *)(param_1 + 0xb6c) = *(unsigned int *)(iVar12 + param_1);
    uVar9 = *(unsigned int *)((*(int *)(param_1 + 0xb94) + 0x2e2) * 4 + param_1);
    *(unsigned int *)(param_1 + 0xb78) = uVar9;
    *(unsigned int *)(param_1 + 0xb74) = uVar9;
    *(unsigned int *)(param_1 + 0xb70) = uVar9;
    *(unsigned int *)(param_1 + 0x830) =
         *(unsigned int *)((*(int *)(param_1 + 0x82c) + 0x107) * 8 + param_1);
    *(unsigned int *)(param_1 + 0x834) =
         *(unsigned int *)(*(int *)(param_1 + 0x82c) * 8 + param_1 + 0x83c);
    *(unsigned int *)(param_1 + 0x7c4) =
         *(unsigned int *)((int)(((unsigned __int64)uVar5 + 0x1f8 & 0xffffffff) << 2) + param_1);
    *(unsigned int *)(param_1 + 0x7bc) =
         *(unsigned int *)((int)(((unsigned __int64)uVar5 + 0xfd & 0xffffffff) << 3) + param_1);
    *(unsigned int *)(param_1 + 0x7c0) = *(unsigned int *)(uVar5 * 8 + param_1 + 0x7ec);
  }
  else {
    *(unsigned int *)(param_1 + 0xb64) = *(unsigned int *)(param_1 + 0xb84);
    *(unsigned int *)(param_1 + 0xb70) = *(unsigned int *)(param_1 + 0xb90);
  }
  fn_82C565B0(param_1,*(unsigned int *)(param_1 + 0xf8));
  iVar12 = *(int *)(param_1 + 0x140) + *(int *)(param_1 + 0x13c);
  uStack_b8 = 0;
  uVar26 = 0;
  *(int *)(param_1 + 0x134) = iVar12;
  *(int *)(param_1 + 0x138) = -iVar12;
  if (*(int *)(param_1 + 0x8c) != 0) {
    lVar16 = 0;
    do {
      if (*(int *)(param_1 + 0x3cac) == 0) {
        return 1;
      }
      lVar6 = fn_82CA6740(uVar26);
      bVar27 = lVar6 != 0;
      *(int *)(param_1 + 0x158) = -*(int *)(param_1 + 0x158);
      if ((uVar26 & 1) == 0) {
        puVar19 = *(unsigned short **)(param_1 + 0x768);
        uVar18 = (unsigned __int64)*(unsigned int *)(param_1 + 0x76c);
        pcVar23 = *(char **)(param_1 + 0x10c);
      }
      if ((*(int *)(param_1 + 0x3cb0) == 0) && ((uVar26 & 0xffffffff) != 0)) {
        bVar27 = true;
      }
      lVar6 = 0;
      uVar20 = 0;
      if (*(int *)(param_1 + 0x88) != 0) {
        lVar17 = 0;
        iVar12 = (int)uVar14;
        puVar25 = (unsigned char *)((int)puVar24 + 0xf);
        lVar21 = uStack_c8 - uVar14;
        uVar26 = uVar14;
        do {
          if ((*(int *)(param_1 + 0x3cb0) == 0) && (iVar8 = fn_82C65818(param_1), iVar8 != 0)) {
            uVar7 = fn_82C658A8(param_1,param_1 + 0xf8);
            if ((int)uVar7 != 0) {
              return uVar7;
            }
            uVar15 = 0;
          }
          uVar15 = uVar15 + 1;
          uVar9 = fn_82CA6690(param_1,lVar6,bVar27,pcVar23);
          *(unsigned int *)(param_1 + 0x148) = uVar9;
          uVar7 = (**(int (***)())(param_1 + 0xc28))(param_1,puVar24);
          if ((int)uVar7 != 0) {
            return uVar7;
          }
          if ((*puVar24 & 0x80000000) == 0) {
            iVar8 = (int)uVar20;
            if ((*puVar24 & 0x20000) == 0x20000) {
              iVar4 = *(int *)(param_1 + 0x3cb0);
              if ((iVar4 < 4) && (iVar4 != 3)) {
                if ((iVar4 == 2) || (iVar4 == 1)) {
                  uVar7 = fn_82C69268(param_1,pcVar23,puVar24,iVar8 == 0,
                                            *(int *)(param_1 + 0x94) == iVar8,bVar27 == false);
                  goto LAB_82c5f3e8;
                }
                if (iVar4 == 0) {
                  if ((bVar27 == false) || (uVar7 = 0, uVar15 < *(int *)(param_1 + 0x88) + 1U)) {
                    uVar7 = 1;
                  }
                  if (((uVar20 & 0xffffffff) == 0) || (uVar10 = 0, uVar15 == 1)) {
                    uVar10 = 1;
                  }
                  uVar7 = fn_82C69268(param_1,pcVar23,puVar24,uVar10,
                                            *(int *)(param_1 + 0x94) == iVar8,uVar7);
                  goto LAB_82c5f3e8;
                }
              }
              else {
                uVar7 = fn_82CA6210(param_1,pcVar23,puVar24,iVar8 == 0,
                                          *(int *)(param_1 + 0x94) == iVar8,bVar27 == false,
                                          *(unsigned int *)(param_1 + 0x7c4),
                                          *(unsigned int *)(param_1 + 0x7bc));
LAB_82c5f3e8:
                if ((int)uVar7 != 0) {
                  return uVar7;
                }
              }
              if ((*pcVar23 != '\0') || (iVar8 = 1, pcVar23[1] != '\0')) {
                iVar8 = 0;
              }
              uVar5 = *puVar24;
              uVar13 = iVar8 << 0x1d | uVar5 & 0xdfffffff;
              *puVar24 = uVar13;
              if (((uVar5 & 0x40000000) != 0) && (iVar8 != 0)) {
                *puVar24 = uVar13 | 0x80000000;
                goto LAB_82c5f43c;
              }
              uVar7 = (**(int (***)())(param_1 + 0xc18))
                                (param_1,puVar24,uVar22,uVar26,lVar21 + uVar26,*pcVar23 + lVar17,
                                 pcVar23[1] + lVar16,*(char *)(*pcVar23 + lbl_820FC6B0) + lVar6);
            }
            else {
              pcVar23[1] = '\0';
              *pcVar23 = '\0';
              if (*(int *)(param_1 + 0x3cb0) < 4) {
                uVar1 = *puVar25;
                uVar2 = puVar25[4];
                uVar3 = puVar25[1];
                puVar25[4] = puVar25[-1];
                puVar25[-1] = uVar2;
                *puVar25 = puVar25[3];
                puVar25[3] = uVar1;
                puVar25[1] = puVar25[2];
                puVar25[2] = uVar3;
                if ((((uVar20 & 0xffffffff) == 0) || ((*(unsigned int *)(puVar25 + -0x27) & 0x20000) != 0))
                   || (uVar7 = 1, uVar15 < 2)) {
                  uVar7 = 0;
                }
                uVar7 = fn_82C68D68(param_1,puVar24,uVar22,uVar26,lVar21 + uVar26,puVar19,
                                          uVar18,uVar7);
              }
              else if (*(int *)(param_1 + 0x194) == 0) {
                uVar1 = *puVar25;
                uVar2 = puVar25[4];
                uVar3 = puVar25[1];
                puVar25[4] = puVar25[-1];
                puVar25[-1] = uVar2;
                *puVar25 = puVar25[3];
                puVar25[3] = uVar1;
                puVar25[1] = puVar25[2];
                puVar25[2] = uVar3;
                if ((uVar20 == 0) || (uVar7 = 1, (*(unsigned int *)(puVar25 + -0x27) & 0x20000) != 0)) {
                  uVar7 = 0;
                }
                uVar7 = fn_82CB1DF0(param_1,puVar24,uVar22,uVar26,lVar21 + uVar26,puVar19,uVar18
                                        ,uVar7);
              }
              else {
                uVar1 = puVar25[1];
                uVar2 = puVar25[-1];
                uVar3 = puVar25[3];
                puVar25[3] = *puVar25;
                puVar25[1] = puVar25[2];
                puVar25[2] = uVar1;
                puVar25[-1] = puVar25[4];
                puVar25[4] = uVar2;
                *puVar25 = uVar3;
                uVar7 = fn_82CB2F60(param_1,puVar24,uVar22,uVar26,lVar21 + uVar26,puVar19,uVar18
                                       );
                uVar14 = (unsigned __int64)uStack_b4;
              }
            }
            if ((int)uVar7 != 0) {
              return uVar7;
            }
          }
          else {
LAB_82c5f43c:
            pcVar23[1] = '\0';
            *pcVar23 = '\0';
            lVar11 = (unsigned int)(iStack_c0 - iVar12) + uVar26;
            (**(int (***)())(param_1 + 0xc54))
                      (uVar22,uVar26,lVar21 + uVar26,lVar6 + (unsigned __int64)uStack_c4,lVar11,
                       lVar11 + (unsigned __int64)(unsigned int)(iStack_bc - iStack_c0),
                       *(unsigned int *)(param_1 + 0xcc),*(unsigned int *)(param_1 + 0xd0));
          }
          if ((*puVar24 & 0x20000) == 0x20000) {
            puVar19[0x50] = 0;
            puVar19[0x40] = 0;
            *puVar19 = 0;
          }
          uVar20 = uVar20 + 1;
          puVar24 = puVar24 + 6;
          puVar25 = puVar25 + 0x18;
          pcVar23 = pcVar23 + 2;
          uVar22 = uVar22 + 0x10;
          uVar26 = uVar26 + 8;
          puVar19 = puVar19 + 0x60;
          uVar18 = uVar18 + 0x90;
          lVar6 = lVar6 + 0x10;
          lVar17 = lVar17 + 0x20;
        } while ((uVar20 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x88));
        uVar22 = (unsigned __int64)uStack_b0;
        uVar26 = (unsigned __int64)uStack_b8;
      }
      uVar5 = *(unsigned int *)(param_1 + 0xe8);
      uVar26 = uVar26 + 1;
      uVar14 = uVar5 + uVar14;
      uVar22 = *(unsigned int *)(param_1 + 0xe4) + uVar22;
      uStack_c8 = uVar5 + uStack_c8;
      uStack_c4 = *(unsigned int *)(param_1 + 0xe4) + uStack_c4;
      iStack_c0 = uVar5 + iStack_c0;
      iStack_bc = uVar5 + iStack_bc;
      uStack_b8 = (unsigned int)uVar26;
      uStack_b4 = (unsigned int)uVar14;
      lVar16 = lVar16 + 0x20;
      uStack_b0 = (unsigned int)uVar22;
    } while ((uVar26 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x8c));
  }
  if (*(int *)(param_1 + 0xf6c) != 0) {
    fn_82C9D0C8(param_1,(unsigned __int64)*(unsigned int *)(param_1 + 0xdc) +
                            (unsigned __int64)*(unsigned int *)(param_1 + 0xec0),
                    (unsigned __int64)*(unsigned int *)(param_1 + 0xec4) + (unsigned __int64)*(unsigned int *)(param_1 + 0xe0),
                    (unsigned __int64)*(unsigned int *)(param_1 + 0xe0) + (unsigned __int64)*(unsigned int *)(param_1 + 0xec8),0,0
                    ,1,*(unsigned int *)(param_1 + 0x88));
  }
  return 0;
}

