typedef unsigned char bool;
#define false 0
extern unsigned int *auStack_c0;
extern int fn_82C4E3B0();
extern int fn_82C4E3B0();
extern int fn_82C7AA08();
extern int fn_82C93B58();
extern int fn_82C948D8();
extern int fn_82C948D8();
extern int fn_82CB2190();
extern int fn_82F691F0();
extern unsigned int iStack_dc;
extern unsigned int lbl_820FDC70;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;


unsigned __int64
fn_82C98378(int param_1,unsigned int *param_2,__int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             unsigned int param_6,unsigned __int64 param_7)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  short sVar7;
  int *piVar8;
  unsigned __int64 *puVar9;
  unsigned char *pbVar10;
  unsigned int *puVar11;
  int iVar13;
  unsigned __int64 uVar12;
  int iVar14;
  int iVar15;
  int iVar16;
  __int64 lVar17;
  unsigned short *puVar18;
  unsigned short *puVar19;
  int iVar22;
  unsigned __int64 uVar20;
  unsigned int *puVar23;
  unsigned __int64 uVar21;
  unsigned int uVar24;
  int iVar25;
  unsigned int uVar26;
  unsigned int uVar27;
  unsigned char *puVar28;
  int iVar30;
  unsigned __int64 uVar29;
  bool bVar31;
  unsigned int *puStack0000001c;
  unsigned int uStack0000002c;
  unsigned int uStack00000034;
  unsigned int uStack0000003c;
  unsigned int uStack00000044;
  int iStack_dc;
  struct { unsigned int first; unsigned int second; } stack_pair_d8;

  struct { unsigned int first; unsigned int second; } stack_pair_d0;

  unsigned char *puStack_c8;
  unsigned char auStack_c0 [48];

  uStack00000044 = (unsigned int)param_7;
  uStack0000002c = (unsigned int)param_4;
  uStack00000034 = (unsigned int)param_5;
  bVar31 = *(int *)(param_1 + 0x14c) != 0;
  iVar22 = (unsigned int)*(unsigned char *)(param_2 + 1) * 0x14 + *(int *)(param_1 + 0x19d0);
  uVar24 = *(unsigned int *)(param_1 + 0x154);
  iVar15 = *(int *)(param_1 + 0x6ec);
  if (*(int *)(param_1 + 0x14c) != 0) {
    uVar24 = *param_2 >> 0x18 & 7;
  }
  if (*(int *)(param_1 + 0x18c) == 0) {
    iStack_dc = param_1 + 0xb64;
    iVar16 = param_1 + 0xb70;
  }
  else {
    uVar27 = *param_2 >> 0x16 & 3;
    iStack_dc = (uVar27 + 0x2df) * 4 + param_1;
    iVar16 = (uVar27 + 0x2e2) * 4 + param_1;
  }
  stack_pair_d0.second = **(unsigned int **)(param_1 + 0x164) >> 2 & 1;
  if (((param_6 == 0) && (uStack00000044 == 0)) && (stack_pair_d0.second == 0)) {
    stack_pair_d8.first = 1;
  }
  else {
    stack_pair_d8.first = 0;
  }
  puStack0000001c = param_2;
  uStack0000003c = param_6;
  fn_82C93B58(param_1,param_3,param_4,param_5,param_6,param_7);
  iVar25 = param_6 * 2;
  uVar29 = param_7 & 0x7fffffff;
  puStack_c8 = &lbl_820FDC70;
  uVar27 = 0;
  do {
    uVar26 = uVar27;
    bVar6 = *(unsigned char *)((int)param_2 + uVar26 + 0xe);
    iVar14 = iVar25 + (uVar26 & 1);
    stack_pair_d8.first = (unsigned int)LZCOUNT((unsigned int)bVar6) >> 5 & stack_pair_d8.first;
    lVar17 = ((unsigned __int64)(unsigned int)((int)uVar26 >> 1) & 1) + uVar29 * 2;
    if (stack_pair_d0.second == 0) {
      if (bVar6 == 0) {
        *(unsigned char *)((int)puStack0000001c + uVar26 + 8) = 0;
      }
      else {
        if (((*puStack0000001c & 0x10000000) != 0) && (!bVar31)) {
          piVar8 = *(int **)(param_1 + 0xa00);
          puVar9 = *(unsigned __int64 **)(param_1 + 0x54);
          if (piVar8 == (int *)0x0) {
            uVar21 = 0;
            *(unsigned int *)((int)puVar9 + 0x14) = 3;
          }
          else {
            iVar14 = *piVar8;
            sVar7 = *(short *)((int)((*puVar9 >> (0x40 - (unsigned __int64)*(unsigned char *)(piVar8 + 2) & 0x7f) &
                                     0xffffffff) << 1) + iVar14);
            uVar21 = (unsigned __int64)sVar7;
            if (sVar7 < 0) {
              fn_82C4E3B0(puVar9);
              do {
                uVar20 = *puVar9;
                fn_82C4E3B0(puVar9,1);
                sVar7 = *(short *)((int)(((uVar21 - ((__int64)uVar20 >> 0x3f)) + 0x8000 &
                                         0xffffffff) << 1) + iVar14);
                uVar21 = (unsigned __int64)sVar7;
              } while (sVar7 < 0);
            }
            else {
              iVar14 = *(int *)(puVar9 + 1);
              iVar13 = (int)(uVar21 & 0xf);
              *puVar9 = *puVar9 << (uVar21 & 0xf);
              *(int *)(puVar9 + 1) = iVar14 - iVar13;
              if (iVar14 < iVar13) {
                do {
                  pbVar10 = *(unsigned char **)((int)puVar9 + 0xc);
                  if (pbVar10 < (unsigned char *)(*(int *)(puVar9 + 2) - 4U)) {
                    bVar6 = *pbVar10;
                    bVar1 = pbVar10[1];
                    bVar2 = pbVar10[2];
                    bVar3 = pbVar10[3];
                    bVar4 = pbVar10[4];
                    bVar5 = pbVar10[5];
                    iVar14 = *(int *)(puVar9 + 1);
                    *(unsigned char **)((int)puVar9 + 0xc) = pbVar10 + 6;
                    *(int *)(puVar9 + 1) = iVar14 + 0x30;
                    *puVar9 = ((((((unsigned __int64)bVar6 * 0x100 + (unsigned __int64)bVar1) * 0x100 +
                                 (unsigned __int64)bVar2) * 0x100 + (unsigned __int64)bVar3) * 0x100 +
                               (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar5 <<
                              ((__int64)-iVar14 & 0x7fU)) + *puVar9;
                    goto LAB_82c9888c;
                  }
                  iVar14 = fn_82C4E3B0(puVar9);
                } while (iVar14 == 1);
                uVar21 = (unsigned __int64)((int)sVar7 >> 4);
              }
              else {
LAB_82c9888c:
                uVar21 = (unsigned __int64)((int)sVar7 >> 4);
              }
            }
          }
          if ((*(int *)(*(int *)(param_1 + 0x54) + 0x14) != 0) || (7 < (uVar21 & 0xffffffff)))
          goto LAB_82c992e0;
          uVar24 = *(unsigned int *)(puStack_c8 + (int)((uVar21 & 0xffffffff) << 2) + -0x20);
        }
        *(char *)((int)puStack0000001c + uVar26 + 8) = (char)uVar24;
        if (uVar24 == 0) {
          iVar15 = *(int *)(param_1 + 0x6ec);
          uVar12 = (**(int (***)())(param_1 + 0xc78))
                             (param_1,iStack_dc,*(unsigned int *)(param_1 + 0x72c),0,iVar22);
          if ((int)uVar12 != 0) {
            return uVar12;
          }
          (**(int (***)())(param_1 + 0xc80))(iVar15,iVar15,8,*(unsigned int *)(param_1 + 0x798));
        }
        else {
          if (uVar24 == 1) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(*(unsigned int *)(param_1 + 0x6e8),0,0x100);
          }
          if (uVar24 == 2) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(*(unsigned int *)(param_1 + 0x6e8),0,0x100);
          }
          if (uVar24 == 4) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(*(unsigned int *)(param_1 + 0x6e8),0,0x100);
          }
        }
        if (*(int (***)())(param_1 + 0xc80) == fn_82C7AA08) {
          puVar19 = (unsigned short *)(iVar15 + -2);
          puVar23 = (unsigned int *)(iVar15 + -4);
          lVar17 = 0x40;
          do {
            puVar23 = puVar23 + 1;
            puVar19 = puVar19 + 1;
            *puVar19 = (short)*puVar23;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        (**(int (***)())(param_1 + 0xc70))
                  (param_3,param_3,iVar15,*(unsigned int *)(param_1 + 0xcc),
                   *(unsigned int *)(param_1 + 0x108));
        bVar31 = false;
        param_7 = (unsigned __int64)uStack00000044;
        param_6 = uStack0000003c;
      }
    }
    else {
      iVar15 = *(int *)(param_1 + 0x6ec);
      iVar30 = (*(int *)(param_1 + 0x88) * (int)lVar17 * 2 + iVar14) * 0x20 +
               *(int *)(param_1 + 0x1d0);
      puVar28 = (unsigned char *)0x0;
      iVar13 = fn_82C948D8(param_1,puStack0000001c,iVar30,uVar26,iVar14,lVar17,&stack_pair_d8.second,
                             &stack_pair_d0.first);
      if (iVar13 != 0) {
        puVar28 = auStack_c0;
      }
      uVar12 = fn_82CB2190(param_1,iVar16,uVar26,bVar6,puVar28,stack_pair_d0.first,stack_pair_d8.second,iVar30);
      if ((int)uVar12 != 0) {
        return uVar12;
      }
      if ((*(unsigned int *)(param_1 + 0xbbc) & 1) != 0) {
        uVar27 = *(unsigned int *)(param_1 + 0x88);
        lVar17 = 8;
        iVar30 = ((uVar26 & 2) + 0x2f2) * 4;
        iVar13 = iVar14 * 8;
        puVar19 = (unsigned short *)(iVar15 + -2);
        puVar18 = (unsigned short *)(iVar14 * 0x10 + *(int *)(iVar30 + param_1) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 8;
        puVar19 = (unsigned short *)(iVar15 + 0xe);
        puVar18 = (unsigned short *)((iVar13 + uVar27 * 0x10) * 2 + *(int *)(iVar30 + param_1) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 8;
        puVar19 = (unsigned short *)(iVar15 + 0x1e);
        puVar18 = (unsigned short *)((uVar27 * 0x20 + iVar13) * 2 + *(int *)(iVar30 + param_1) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 8;
        puVar19 = (unsigned short *)(iVar15 + 0x2e);
        puVar18 = (unsigned short *)((uVar27 * 0x30 + iVar13) * 2 + *(int *)(iVar30 + param_1) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 8;
        puVar19 = (unsigned short *)(iVar15 + 0x3e);
        puVar18 = (unsigned short *)((uVar27 * 0x40 + iVar13) * 2 + *(int *)(iVar30 + param_1) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 8;
        puVar19 = (unsigned short *)(iVar15 + 0x4e);
        puVar18 = (unsigned short *)((uVar27 * 0x50 + iVar13) * 2 + *(int *)(iVar30 + param_1) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 8;
        puVar19 = (unsigned short *)(iVar15 + 0x5e);
        puVar18 = (unsigned short *)((uVar27 * 0x60 + iVar13) * 2 + *(int *)(iVar30 + param_1) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 8;
        puVar19 = (unsigned short *)(iVar15 + 0x6e);
        puVar18 = (unsigned short *)
                  ((uVar27 * 0x80 + (uVar27 & 0xfffffff) * -0x10 + iVar13) * 2 +
                   *(int *)(iVar30 + param_1) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      (**(int (***)())(param_1 + 0xc70))
                (param_3,param_3,iVar15,*(unsigned int *)(param_1 + 0xcc),
                 *(unsigned int *)(param_1 + 0x108));
      param_7 = (unsigned __int64)uStack00000044;
      *(unsigned char *)((int)puStack0000001c + uVar26 + 8) = 0;
      param_6 = uStack0000003c;
    }
    puVar11 = puStack0000001c;
    if ((uVar26 & 1) == 0) {
      uVar21 = 8;
    }
    else {
      uVar21 = (unsigned __int64)*(unsigned int *)(param_1 + 0xec);
    }
    uVar27 = uVar26 + 1;
    param_3 = uVar21 + param_3;
  } while ((int)uVar27 < 4);
  if (stack_pair_d0.second == 0) {
    if (*(char *)((int)param_2 + 0x12) == '\0') {
      *(unsigned char *)(puStack0000001c + 3) = 0;
      goto LAB_82c99bcc;
    }
    uVar29 = 0;
    stack_pair_d8.first = 0;
    if (((*puStack0000001c & 0x10000000) == 0) || (bVar31)) {
LAB_82c9948c:
      *(char *)(puStack0000001c + 3) = (char)uVar24;
      if (uVar24 == 0) {
        iVar15 = *(int *)(param_1 + 0x6ec);
        uVar12 = (**(int (***)())(param_1 + 0xc78))
                           (param_1,iStack_dc,*(unsigned int *)(param_1 + 0x72c),0,iVar22);
        if ((int)uVar12 != 0) {
          return uVar12;
        }
        (**(int (***)())(param_1 + 0xc80))(iVar15,iVar15,8,*(unsigned int *)(param_1 + 0x798));
      }
      else {
        if (uVar24 == 1) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(*(unsigned int *)(param_1 + 0x6e8),0,0x100);
        }
        if (uVar24 == 2) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(*(unsigned int *)(param_1 + 0x6e8),0,0x100);
        }
        if (uVar24 == 4) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(*(unsigned int *)(param_1 + 0x6e8),0,0x100);
        }
      }
      if (*(int (***)())(param_1 + 0xc80) == fn_82C7AA08) {
        puVar19 = (unsigned short *)(iVar15 + -2);
        puVar23 = (unsigned int *)(iVar15 + -4);
        lVar17 = 0x40;
        do {
          puVar23 = puVar23 + 1;
          puVar19 = puVar19 + 1;
          *puVar19 = (short)*puVar23;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      (**(int (***)())(param_1 + 0xc70))
                (uStack0000002c,uStack0000002c,iVar15,*(unsigned int *)(param_1 + 0xd0),
                 *(unsigned int *)(param_1 + 0x108));
      bVar31 = false;
      goto LAB_82c99bcc;
    }
    piVar8 = *(int **)(param_1 + 0xa00);
    puVar9 = *(unsigned __int64 **)(param_1 + 0x54);
    if (piVar8 == (int *)0x0) {
      *(unsigned int *)((int)puVar9 + 0x14) = 3;
    }
    else {
      iVar16 = *piVar8;
      sVar7 = *(short *)((int)((*puVar9 >> (0x40 - (unsigned __int64)*(unsigned char *)(piVar8 + 2) & 0x7f) &
                               0xffffffff) << 1) + iVar16);
      uVar29 = (unsigned __int64)sVar7;
      if (sVar7 < 0) {
        fn_82C4E3B0(puVar9);
        do {
          uVar21 = *puVar9;
          fn_82C4E3B0(puVar9,1);
          sVar7 = *(short *)((int)(((uVar29 - ((__int64)uVar21 >> 0x3f)) + 0x8000 & 0xffffffff) <<
                                  1) + iVar16);
          uVar29 = (unsigned __int64)sVar7;
        } while (sVar7 < 0);
      }
      else {
        iVar16 = *(int *)(puVar9 + 1);
        iVar25 = (int)(uVar29 & 0xf);
        *puVar9 = *puVar9 << (uVar29 & 0xf);
        *(int *)(puVar9 + 1) = iVar16 - iVar25;
        if (iVar16 < iVar25) {
          do {
            pbVar10 = *(unsigned char **)((int)puVar9 + 0xc);
            if (pbVar10 < (unsigned char *)(*(int *)(puVar9 + 2) - 4U)) {
              bVar6 = *pbVar10;
              bVar1 = pbVar10[1];
              bVar2 = pbVar10[2];
              bVar3 = pbVar10[3];
              bVar4 = pbVar10[4];
              bVar5 = pbVar10[5];
              iVar16 = *(int *)(puVar9 + 1);
              *(unsigned char **)((int)puVar9 + 0xc) = pbVar10 + 6;
              *(int *)(puVar9 + 1) = iVar16 + 0x30;
              *puVar9 = ((((((unsigned __int64)bVar1 + (unsigned __int64)bVar6 * 0x100) * 0x100 + (unsigned __int64)bVar2
                           ) * 0x100 + (unsigned __int64)bVar3) * 0x100 + (unsigned __int64)bVar4) * 0x100 +
                         (unsigned __int64)bVar5 << ((__int64)-iVar16 & 0x7fU)) + *puVar9;
              goto LAB_82c9941c;
            }
            iVar16 = fn_82C4E3B0(puVar9);
          } while (iVar16 == 1);
          uVar29 = (unsigned __int64)((int)sVar7 >> 4);
        }
        else {
LAB_82c9941c:
          uVar29 = (unsigned __int64)((int)sVar7 >> 4);
        }
      }
    }
    if ((*(int *)(*(int *)(param_1 + 0x54) + 0x14) == 0) && ((uVar29 & 0xffffffff) < 8)) {
      uVar24 = *(unsigned int *)(puStack_c8 + (int)((uVar29 & 0xffffffff) << 2) + -0x20);
      goto LAB_82c9948c;
    }
LAB_82c992e0:
    uVar12 = 1;
  }
  else {
    iVar16 = (*(int *)(param_1 + 0x88) * (int)param_7 + param_6) * 0x20 + *(int *)(param_1 + 0x1d4);
    puVar28 = (unsigned char *)0x0;
    iVar15 = fn_82C948D8(param_1,puStack0000001c,iVar16,param_6,param_7,&stack_pair_d8.second,&stack_pair_d0.first,
                           auStack_c0);
    if (iVar15 != 0) {
      puVar28 = auStack_c0;
    }
    iVar15 = *(int *)(param_1 + 0x6ec);
    stack_pair_d8.first = 0;
    uVar12 = fn_82CB2190(param_1,iStack_dc,uVar27,*(unsigned char *)((int)param_2 + 0x12),puVar28
                               ,stack_pair_d0.first,stack_pair_d8.second,iVar16);
    if ((int)uVar12 != 0) {
      return uVar12;
    }
    if ((*(unsigned int *)(param_1 + 0xbbc) & 1) != 0) {
      uVar27 = *(unsigned int *)(param_1 + 0x88);
      lVar17 = 8;
      puVar19 = (unsigned short *)(iVar15 + -2);
      iVar16 = param_6 * 8;
      puVar18 = (unsigned short *)(param_6 * 0x10 + *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar19 = puVar19 + 1;
        puVar18 = puVar18 + 1;
        *puVar18 = *puVar19;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 8;
      puVar19 = (unsigned short *)(iVar15 + 0xe);
      puVar18 = (unsigned short *)((iVar16 + uVar27 * 8) * 2 + *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar19 = puVar19 + 1;
        puVar18 = puVar18 + 1;
        *puVar18 = *puVar19;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 8;
      puVar19 = (unsigned short *)(iVar15 + 0x1e);
      puVar18 = (unsigned short *)((uVar27 * 0x10 + iVar16) * 2 + *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar19 = puVar19 + 1;
        puVar18 = puVar18 + 1;
        *puVar18 = *puVar19;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 8;
      puVar19 = (unsigned short *)(iVar15 + 0x2e);
      puVar18 = (unsigned short *)((uVar27 * 0x18 + iVar16) * 2 + *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar19 = puVar19 + 1;
        puVar18 = puVar18 + 1;
        *puVar18 = *puVar19;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 8;
      puVar19 = (unsigned short *)(iVar15 + 0x3e);
      puVar18 = (unsigned short *)((uVar27 * 0x20 + iVar16) * 2 + *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar19 = puVar19 + 1;
        puVar18 = puVar18 + 1;
        *puVar18 = *puVar19;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 8;
      puVar19 = (unsigned short *)(iVar15 + 0x4e);
      puVar18 = (unsigned short *)((uVar27 * 0x28 + iVar16) * 2 + *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar19 = puVar19 + 1;
        puVar18 = puVar18 + 1;
        *puVar18 = *puVar19;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 8;
      puVar19 = (unsigned short *)(iVar15 + 0x5e);
      puVar18 = (unsigned short *)((uVar27 * 0x30 + iVar16) * 2 + *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar19 = puVar19 + 1;
        puVar18 = puVar18 + 1;
        *puVar18 = *puVar19;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 8;
      puVar19 = (unsigned short *)(iVar15 + 0x6e);
      puVar18 = (unsigned short *)
                ((uVar27 * 0x40 + (uVar27 & 0x1fffffff) * -8 + iVar16) * 2 +
                 *(int *)(param_1 + 0xbd4) + -2);
      do {
        puVar19 = puVar19 + 1;
        puVar18 = puVar18 + 1;
        *puVar18 = *puVar19;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    (**(int (***)())(param_1 + 0xc70))
              (uStack0000002c,uStack0000002c,iVar15,*(unsigned int *)(param_1 + 0xd0),
               *(unsigned int *)(param_1 + 0x108));
    *(unsigned char *)(puVar11 + 3) = 0;
LAB_82c99bcc:
    uVar27 = uStack0000003c;
    puVar11 = puStack0000001c;
    if (stack_pair_d0.second == 0) {
      if (*(char *)((int)param_2 + 0x13) == '\0') {
        *(unsigned char *)((int)puStack0000001c + 0xd) = 0;
      }
      else {
        uVar29 = 0;
        stack_pair_d8.first = 0;
        if (((*puStack0000001c & 0x10000000) != 0) && (!bVar31)) {
          piVar8 = *(int **)(param_1 + 0xa00);
          puVar9 = *(unsigned __int64 **)(param_1 + 0x54);
          if (piVar8 == (int *)0x0) {
            *(unsigned int *)((int)puVar9 + 0x14) = 3;
          }
          else {
            iVar16 = *piVar8;
            sVar7 = *(short *)((int)((*puVar9 >> (0x40 - (unsigned __int64)*(unsigned char *)(piVar8 + 2) & 0x7f) &
                                     0xffffffff) << 1) + iVar16);
            uVar29 = (unsigned __int64)sVar7;
            if (sVar7 < 0) {
              fn_82C4E3B0(puVar9);
              do {
                uVar21 = *puVar9;
                fn_82C4E3B0(puVar9,1);
                sVar7 = *(short *)((int)(((uVar29 - ((__int64)uVar21 >> 0x3f)) + 0x8000 &
                                         0xffffffff) << 1) + iVar16);
                uVar29 = (unsigned __int64)sVar7;
              } while (sVar7 < 0);
            }
            else {
              iVar16 = *(int *)(puVar9 + 1);
              iVar25 = (int)(uVar29 & 0xf);
              *puVar9 = *puVar9 << (uVar29 & 0xf);
              *(int *)(puVar9 + 1) = iVar16 - iVar25;
              if (iVar16 < iVar25) {
                do {
                  pbVar10 = *(unsigned char **)((int)puVar9 + 0xc);
                  if (pbVar10 < (unsigned char *)(*(int *)(puVar9 + 2) - 4U)) {
                    bVar6 = *pbVar10;
                    bVar1 = pbVar10[1];
                    bVar2 = pbVar10[2];
                    bVar3 = pbVar10[3];
                    bVar4 = pbVar10[4];
                    bVar5 = pbVar10[5];
                    iVar16 = *(int *)(puVar9 + 1);
                    *(unsigned char **)((int)puVar9 + 0xc) = pbVar10 + 6;
                    *(int *)(puVar9 + 1) = iVar16 + 0x30;
                    *puVar9 = ((((((unsigned __int64)bVar1 + (unsigned __int64)bVar6 * 0x100) * 0x100 +
                                 (unsigned __int64)bVar2) * 0x100 + (unsigned __int64)bVar3) * 0x100 +
                               (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar5 <<
                              ((__int64)-iVar16 & 0x7fU)) + *puVar9;
                    goto LAB_82c99f78;
                  }
                  iVar16 = fn_82C4E3B0(puVar9);
                } while (iVar16 == 1);
                uVar29 = (unsigned __int64)((int)sVar7 >> 4);
              }
              else {
LAB_82c99f78:
                uVar29 = (unsigned __int64)((int)sVar7 >> 4);
              }
            }
          }
          if ((*(int *)(*(int *)(param_1 + 0x54) + 0x14) != 0) || (7 < (uVar29 & 0xffffffff)))
          goto LAB_82c992e0;
          uVar24 = *(unsigned int *)(puStack_c8 + (int)((uVar29 & 0xffffffff) << 2) + -0x20);
        }
        *(char *)((int)puStack0000001c + 0xd) = (char)uVar24;
        if (uVar24 == 0) {
          iVar15 = *(int *)(param_1 + 0x6ec);
          uVar12 = (**(int (***)())(param_1 + 0xc78))
                             (param_1,iStack_dc,*(unsigned int *)(param_1 + 0x72c),0,iVar22);
          if ((int)uVar12 != 0) {
            return uVar12;
          }
          (**(int (***)())(param_1 + 0xc80))(iVar15,iVar15,8,*(unsigned int *)(param_1 + 0x798));
        }
        else {
          if (uVar24 == 1) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(*(unsigned int *)(param_1 + 0x6e8),0,0x100);
          }
          if (uVar24 == 2) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(*(unsigned int *)(param_1 + 0x6e8),0,0x100);
          }
          if (uVar24 == 4) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(*(unsigned int *)(param_1 + 0x6e8),0,0x100);
          }
        }
        if (*(int (***)())(param_1 + 0xc80) == fn_82C7AA08) {
          puVar19 = (unsigned short *)(iVar15 + -2);
          puVar23 = (unsigned int *)(iVar15 + -4);
          lVar17 = 0x40;
          do {
            puVar23 = puVar23 + 1;
            puVar19 = puVar19 + 1;
            *puVar19 = (short)*puVar23;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        (**(int (***)())(param_1 + 0xc70))
                  (uStack00000034,uStack00000034,iVar15,*(unsigned int *)(param_1 + 0xd0),
                   *(unsigned int *)(param_1 + 0x108));
      }
    }
    else {
      lVar17 = ((__int64)*(int *)(param_1 + 0x88) * (__int64)(int)uStack00000044 +
                (unsigned __int64)uStack0000003c & 0x7ffffff) * 0x20 +
               (unsigned __int64)*(unsigned int *)(param_1 + 0x1d8);
      puVar28 = (unsigned char *)0x0;
      iVar15 = fn_82C948D8(param_1,puStack0000001c,lVar17,(unsigned __int64)uStack0000003c,uStack00000044
                             ,&stack_pair_d8.second,&stack_pair_d0.first,auStack_c0);
      if (iVar15 != 0) {
        puVar28 = auStack_c0;
      }
      iVar15 = *(int *)(param_1 + 0x6ec);
      stack_pair_d8.first = 0;
      uVar12 = fn_82CB2190(param_1,iStack_dc,uVar26 + 2,*(unsigned char *)((int)param_2 + 0x13),
                                 puVar28,stack_pair_d0.first,stack_pair_d8.second,lVar17);
      if ((int)uVar12 != 0) {
        return uVar12;
      }
      if ((*(unsigned int *)(param_1 + 0xbbc) & 1) != 0) {
        uVar24 = *(unsigned int *)(param_1 + 0x88);
        lVar17 = 8;
        puVar19 = (unsigned short *)(iVar15 + -2);
        iVar22 = uVar27 * 8;
        puVar18 = (unsigned short *)(uVar27 * 0x10 + *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 8;
        puVar19 = (unsigned short *)(iVar15 + 0xe);
        puVar18 = (unsigned short *)((iVar22 + uVar24 * 8) * 2 + *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 8;
        puVar19 = (unsigned short *)(iVar15 + 0x1e);
        puVar18 = (unsigned short *)((uVar24 * 0x10 + iVar22) * 2 + *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 8;
        puVar19 = (unsigned short *)(iVar15 + 0x2e);
        puVar18 = (unsigned short *)((uVar24 * 0x18 + iVar22) * 2 + *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 8;
        puVar19 = (unsigned short *)(iVar15 + 0x3e);
        puVar18 = (unsigned short *)((uVar24 * 0x20 + iVar22) * 2 + *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 8;
        puVar19 = (unsigned short *)(iVar15 + 0x4e);
        puVar18 = (unsigned short *)((uVar24 * 0x28 + iVar22) * 2 + *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 8;
        puVar19 = (unsigned short *)(iVar15 + 0x5e);
        puVar18 = (unsigned short *)((uVar24 * 0x30 + iVar22) * 2 + *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 8;
        puVar19 = (unsigned short *)(iVar15 + 0x6e);
        puVar18 = (unsigned short *)
                  ((uVar24 * 0x40 + (uVar24 & 0x1fffffff) * -8 + iVar22) * 2 +
                   *(int *)(param_1 + 0xbdc) + -2);
        do {
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      (**(int (***)())(param_1 + 0xc70))
                (uStack00000034,uStack00000034,iVar15,*(unsigned int *)(param_1 + 0xd0),
                 *(unsigned int *)(param_1 + 0x108));
      *(unsigned char *)((int)puVar11 + 0xd) = 0;
    }
    uVar12 = 0;
    *puStack0000001c = stack_pair_d8.first << 0x1f | *puStack0000001c & 0x7fffffff;
  }
  return uVar12;
}
