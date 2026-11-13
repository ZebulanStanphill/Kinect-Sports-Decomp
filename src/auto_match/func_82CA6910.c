typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_ac;
extern unsigned int *auStack_b0;
extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern int fn_82C7D7D8();
extern int fn_82C93630();
extern int fn_82C94F68();
extern int fn_82C94FF8();
extern int fn_82CA6780();
extern int fn_82CBC490();
extern int fn_82CBCA98();
extern unsigned int lbl_820FDEF0;
extern unsigned int lbl_820FDF30;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack_a4;


unsigned __int64 fn_82CA6910(int param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned short uVar7;
  unsigned short uVar8;
  short sVar9;
  unsigned __int64 *puVar10;
  unsigned int *puVar11;
  int *piVar12;
  unsigned char *pbVar13;
  bool bVar14;
  bool bVar15;
  unsigned int uVar16;
  int iVar17;
  int iVar18;
  unsigned int uVar19;
  int iVar20;
  int iVar21;
  unsigned __int64 uVar22;
  unsigned __int64 uVar23;
  unsigned __int64 uVar24;
  unsigned __int64 uVar25;
  unsigned short *puVar26;
  unsigned int uVar27;
  unsigned short *puVar28;
  unsigned int uVar29;
  unsigned int *puVar30;
  unsigned int uVar31;
  __int64 lVar32;
  __int64 lVar33;
  __int64 lVar34;
  unsigned int uVar35;
  unsigned __int64 uVar36;
  unsigned int *puVar37;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  unsigned char auStack_b0 [4];
  unsigned char auStack_ac [4];
  unsigned int *puStack_a8;
  unsigned int uStack_a4;
  
  uVar36 = 0;
  puVar30 = *(unsigned int **)(param_1 + 0x164);
  puVar10 = *(unsigned __int64 **)(param_1 + 0x54);
  uStack00000024 = (unsigned int)param_3;
  uStack0000002c = (unsigned int)param_4;
  uVar27 = *(int *)(param_1 + 0xf8) * 2 + *(int *)(param_1 + 0xfc) + 0xff;
  uVar29 = uVar27 & 0xff;
  uVar19 = 0;
  iVar17 = 0;
  *(char *)(param_2 + 1) = (char)uVar27;
  bVar15 = false;
  if (uVar29 == 0) {
    return 1;
  }
  if (0x3e < uVar29) {
    return 1;
  }
  *param_2 = *param_2 & 0xef3fffff | 0x20000;
  puStack_a8 = puVar30;
  if (*(int *)(param_1 + 0x160) == 0) {
    uVar22 = *puVar10;
    uVar29 = *(unsigned int *)(puVar10 + 1);
    *puVar10 = uVar22 << 1;
    *(int *)(puVar10 + 1) = (int)((unsigned __int64)uVar29 - 1);
    if ((__int64)((unsigned __int64)uVar29 - 1) < 0) {
      fn_82C4E5E8(puVar10);
    }
    *param_2 = (unsigned int)((__int64)uVar22 < 0) << 8 | *param_2 & 0xfffff8ff;
  }
  uVar29 = *param_2 >> 8 & 7;
  uStack_a4 = uVar29;
  if (*(int *)(param_1 + 0x15c) == 0) {
    uVar22 = *puVar10;
    uVar27 = *(unsigned int *)(puVar10 + 1);
    *puVar10 = uVar22 << 1;
    *(int *)(puVar10 + 1) = (int)((unsigned __int64)uVar27 - 1);
    if ((__int64)((unsigned __int64)uVar27 - 1) < 0) {
      fn_82C4E5E8(puVar10);
    }
    *param_2 = (unsigned int)((uVar22 >> 0x3f) << 0x1f) | *param_2 & 0x7fffffff;
  }
  if ((*(int *)(param_1 + 0x5744) != 0) && ((*param_2 & 0x700) == 0x100)) {
    uVar22 = *puVar10;
    uVar27 = *(unsigned int *)(puVar10 + 1);
    *puVar10 = uVar22 << 1;
    *(int *)(puVar10 + 1) = (int)((unsigned __int64)uVar27 - 1);
    if ((__int64)((unsigned __int64)uVar27 - 1) < 0) {
      fn_82C4E5E8(puVar10);
    }
    if (-1 < (__int64)uVar22) {
      uVar22 = *puVar10;
      uVar27 = *(unsigned int *)(puVar10 + 1);
      *puVar10 = uVar22 << 1;
      *(int *)(puVar10 + 1) = (int)((unsigned __int64)uVar27 - 1);
      if ((__int64)((unsigned __int64)uVar27 - 1) < 0) {
        fn_82C4E5E8(puVar10);
      }
      if ((__int64)uVar22 < 0) {
        uVar27 = *param_2 & 0xfffff8ff | 0x500;
      }
      else {
        uVar27 = *param_2 & 0xfffff8ff | 0x600;
      }
      *param_2 = uVar27;
    }
    if (*(int *)((int)puVar10 + 0x14) != 0) {
      return 1;
    }
  }
  if ((*param_2 & 0x80000000) == 0) {
    if (uVar29 == 0) {
      if (*(int *)(param_1 + 0x5720) == 0) {
        fn_82CBC490(param_1,*(unsigned int *)(param_1 + 0x94c),8,puVar30);
      }
      else {
        fn_82C7D7D8(param_1,*(unsigned int *)(param_1 + 0x94c),*(unsigned int *)(param_1 + 0x164))
        ;
        if (*(int *)((int)puVar10 + 0x14) != 0) {
          return 1;
        }
      }
      *puVar30 = *puVar30 & 0xfffffffc;
      iVar17 = fn_82CBCA98(param_1,(param_3 & 0x7fffffff) << 1,(param_4 & 0x7fffffff) << 1,1,
                               auStack_ac,auStack_b0);
      if ((iVar17 != 0) && ((*puVar30 & 4) == 0)) {
        uVar36 = *puVar10;
        uVar27 = *(unsigned int *)(puVar10 + 1);
        *puVar10 = uVar36 << 1;
        *(int *)(puVar10 + 1) = (int)((unsigned __int64)uVar27 - 1);
        if ((__int64)((unsigned __int64)uVar27 - 1) < 0) {
          fn_82C4E5E8(puVar10);
        }
        *puVar30 = *puVar30 & 0xfffffffc | (int)(char)(unsigned char)(uVar36 >> 0x3f) + 1U;
      }
      uVar27 = *puVar30;
      if ((uVar27 & 8) != 0) {
        iVar17 = *(int *)(param_1 + 0x18c);
        if ((*(int *)(param_1 + 0x14c) == 0) || (bVar15 = true, (uVar27 & 4) != 0)) {
          bVar15 = false;
        }
        if ((uVar27 & 4) != 0) {
          uVar36 = *puVar10;
          uVar19 = *(unsigned int *)(puVar10 + 1);
          *puVar10 = uVar36 << 1;
          *(int *)(puVar10 + 1) = (int)((unsigned __int64)uVar19 - 1);
          if ((__int64)((unsigned __int64)uVar19 - 1) < 0) {
            fn_82C4E5E8(puVar10);
          }
          *param_2 = (unsigned int)((uVar36 >> 0x3f) << 3) | *param_2 & 0xffffffe7;
        }
        goto LAB_82ca7008;
      }
      *param_2 = *param_2 | 0x40000000;
      if (((*(int *)(param_1 + 0x11c) != 0) && ((*puVar30 & 4) != 0)) &&
         (iVar17 = fn_82CA6780(param_1,param_2), iVar17 != 0)) {
        return 1;
      }
      if ((*puVar30 & 4) != 0) {
        uVar36 = *puVar10;
        uVar27 = *(unsigned int *)(puVar10 + 1);
        *puVar10 = uVar36 << 1;
        *(int *)(puVar10 + 1) = (int)((unsigned __int64)uVar27 - 1);
        if ((__int64)((unsigned __int64)uVar27 - 1) < 0) {
          fn_82C4E5E8(puVar10);
        }
        *param_2 = (unsigned int)((uVar36 >> 0x3f) << 3) | *param_2 & 0xffffffe7;
      }
    }
    else {
LAB_82ca7008:
      piVar12 = *(int **)(param_1 + 0x860);
      if (piVar12 == (int *)0x0) {
        uVar36 = 0;
        *(unsigned int *)((int)puVar10 + 0x14) = 3;
      }
      else {
        iVar18 = *piVar12;
        sVar9 = *(short *)((int)((*puVar10 >> (0x40 - (unsigned __int64)*(unsigned char *)(piVar12 + 2) & 0x7f) &
                                 0xffffffff) << 1) + iVar18);
        uVar36 = (unsigned __int64)sVar9;
        if (sVar9 < 0) {
          fn_82C4E470(puVar10);
          do {
            uVar22 = *puVar10;
            fn_82C4E470(puVar10,1);
            sVar9 = *(short *)((int)(((uVar36 - ((__int64)uVar22 >> 0x3f)) + 0x8000 & 0xffffffff)
                                    << 1) + iVar18);
            uVar36 = (unsigned __int64)sVar9;
          } while (sVar9 < 0);
        }
        else {
          iVar18 = *(int *)(puVar10 + 1);
          iVar21 = (int)(uVar36 & 0xf);
          *puVar10 = *puVar10 << (uVar36 & 0xf);
          *(int *)(puVar10 + 1) = iVar18 - iVar21;
          if (iVar18 < iVar21) {
            do {
              pbVar13 = *(unsigned char **)((int)puVar10 + 0xc);
              if (pbVar13 < (unsigned char *)(*(int *)(puVar10 + 2) - 4U)) {
                bVar1 = *pbVar13;
                bVar2 = pbVar13[1];
                bVar3 = pbVar13[2];
                bVar4 = pbVar13[3];
                bVar5 = pbVar13[4];
                bVar6 = pbVar13[5];
                iVar18 = *(int *)(puVar10 + 1);
                *(unsigned char **)((int)puVar10 + 0xc) = pbVar13 + 6;
                *(int *)(puVar10 + 1) = iVar18 + 0x30;
                *puVar10 = ((((((unsigned __int64)bVar2 + (unsigned __int64)bVar1 * 0x100) * 0x100 +
                              (unsigned __int64)bVar3) * 0x100 + (unsigned __int64)bVar4) * 0x100 +
                            (unsigned __int64)bVar5) * 0x100 + (unsigned __int64)bVar6 <<
                           ((__int64)-iVar18 & 0x7fU)) + *puVar10;
                goto LAB_82ca710c;
              }
              iVar18 = fn_82C4E3B0(puVar10);
            } while (iVar18 == 1);
            uVar36 = (unsigned __int64)((int)sVar9 >> 4);
          }
          else {
LAB_82ca710c:
            uVar36 = (unsigned __int64)((int)sVar9 >> 4);
          }
        }
      }
      uVar27 = (unsigned int)uVar36;
      if (*(int *)((int)puVar10 + 0x14) != 0) {
        return 1;
      }
      if (((*(int *)(param_1 + 0x11c) != 0) && (uVar29 == 0)) &&
         (iVar18 = fn_82CA6780(param_1,param_2), iVar18 != 0)) {
        return 1;
      }
      uVar16 = uStack00000024;
      uVar31 = *param_2;
      *param_2 = uVar31 & 0xbfffffff;
      if (uVar29 == 1) {
        uVar36 = uVar36 & 0x30;
        uVar31 = 0;
        lVar32 = 0;
        uVar29 = 0;
        uVar35 = 0;
        lVar33 = 0;
        puVar30 = puStack_a8;
        do {
          if ((1 << (uVar35 & 0x3f) & uVar27) == 0) {
            *puVar30 = 0;
          }
          else if (*(int *)(param_1 + 0x5720) == 0) {
            fn_82CBC490(param_1,*(unsigned int *)(param_1 + 0x94c),8,puVar30);
          }
          else {
            fn_82C7D7D8(param_1,*(unsigned int *)(param_1 + 0x94c),
                              lVar33 + (unsigned __int64)*(unsigned int *)(param_1 + 0x164));
            if (*(int *)((int)puVar10 + 0x14) != 0) {
              return 1;
            }
          }
          *puVar30 = *puVar30 & 0xfffffffc;
          lVar34 = (__int64)((int)uVar35 >> 1) + ((unsigned __int64)uStack0000002c & 0x7fffffff) * 2;
          iVar18 = (uVar35 & 1) + uVar16 * 2;
          iVar17 = fn_82CBCA98(param_1,iVar18,lVar34,0,auStack_ac,auStack_b0);
          if ((iVar17 != 0) && ((*puVar30 & 4) == 0)) {
            uVar22 = *puVar10;
            uVar19 = *(unsigned int *)(puVar10 + 1);
            *puVar10 = uVar22 << 1;
            *(int *)(puVar10 + 1) = (int)((unsigned __int64)uVar19 - 1);
            if ((__int64)((unsigned __int64)uVar19 - 1) < 0) {
              fn_82C4E5E8(puVar10);
            }
            *puVar30 = *puVar30 & 0xfffffffc | (int)(char)(unsigned char)(uVar22 >> 0x3f) + 1U;
          }
          lVar34 = fn_82C93630(param_1,iVar18,lVar34,puVar30,0);
          if ((int)lVar34 != 0) {
            uVar19 = fn_82C94F68(param_1,iVar18);
            uVar29 = uVar19 | uVar29;
          }
          lVar33 = lVar33 + 4;
          lVar32 = lVar34 + lVar32;
          uVar31 = (int)lVar34 << (uVar35 & 0x3f) | uVar31;
          uVar36 = (*puVar30 >> 3 & 1) << (uVar35 & 0x3f) | uVar36;
          uVar19 = (unsigned int)uVar36;
          uVar35 = uVar35 + 1;
          puVar30 = puVar30 + 1;
        } while ((int)lVar33 < 0x10);
        if ((*(int *)(param_1 + 0x18c) == 0) || (iVar17 = 1, uVar19 == 0)) {
          iVar17 = 0;
        }
        if ((*(int *)(param_1 + 0x14c) == 0) ||
           (bVar15 = true,
           (uVar19 & ~(-(unsigned int)(lVar32 - 3U < 0xffffffff7ffffffd) & 0x30 | uVar31)) == 0)) {
          bVar15 = false;
        }
        if ((uVar19 != 0) || (bVar14 = false, (int)lVar32 != 0)) {
          bVar14 = true;
        }
        if (2 < (int)lVar32) {
          uVar27 = fn_82C94FF8(param_1,uVar16,uStack0000002c,lVar32 + 0x80000000);
          uVar29 = uVar27 | uVar29;
        }
        if (((*(int *)(param_1 + 0x11c) != 0) && (bVar14)) &&
           (iVar18 = fn_82CA6780(param_1,param_2), iVar18 != 0)) {
          return 1;
        }
        if (uVar29 != 0) {
          uVar36 = *puVar10;
          uVar29 = *(unsigned int *)(puVar10 + 1);
          *puVar10 = uVar36 << 1;
          *(int *)(puVar10 + 1) = (int)((unsigned __int64)uVar29 - 1);
          if ((__int64)((unsigned __int64)uVar29 - 1) < 0) {
            fn_82C4E5E8(puVar10);
          }
          *param_2 = (unsigned int)((uVar36 >> 0x3f) << 3) | *param_2 & 0xffffffe7;
        }
LAB_82ca7408:
        if (iVar17 != 0) {
          uVar36 = *puVar10;
          uVar29 = *(unsigned int *)(puVar10 + 1);
          lVar32 = -((__int64)uVar36 >> 0x3f);
          *puVar10 = uVar36 << 1;
          *(int *)(puVar10 + 1) = (int)((unsigned __int64)uVar29 - 1);
          if ((__int64)((unsigned __int64)uVar29 - 1) < 0) {
            fn_82C4E5E8(puVar10);
          }
          if ((__int64)uVar36 < 0) {
            uVar36 = *puVar10;
            uVar29 = *(unsigned int *)(puVar10 + 1);
            *puVar10 = uVar36 << 1;
            *(int *)(puVar10 + 1) = (int)((unsigned __int64)uVar29 - 1);
            if ((__int64)((unsigned __int64)uVar29 - 1) < 0) {
              fn_82C4E5E8(puVar10);
            }
            lVar32 = lVar32 - ((__int64)uVar36 >> 0x3f);
          }
          *param_2 = (unsigned int)(lVar32 << 0x16) | *param_2 & 0xff3fffff;
        }
      }
      else {
        if ((uVar31 & 0x700) == 0x500) {
          puVar11 = *(unsigned int **)(param_1 + 0x164);
          uVar29 = 0;
          uVar36 = uVar36 & 0x3a;
          uVar31 = 0;
          iVar17 = uStack00000024 * 2;
          *puVar11 = 0;
          uVar22 = (unsigned __int64)uStack0000002c;
          puVar11[1] = 0;
          iVar18 = 0;
          puVar11[2] = 0;
          puVar11[3] = 0;
          do {
            iVar21 = *(int *)(param_1 + 0x88);
            lVar32 = (__int64)((int)uVar31 >> 1) + (uVar22 & 0x7fffffff) * 2;
            if ((1 << (uVar31 & 0x3f) & uVar27) != 0) {
              if (*(int *)(param_1 + 0x5720) == 0) {
                fn_82CBC490(param_1,*(unsigned int *)(param_1 + 0x94c),8,
                                iVar18 + *(int *)(param_1 + 0x164));
              }
              else {
                fn_82C7D7D8(param_1,*(unsigned int *)(param_1 + 0x94c),
                                  iVar18 + *(int *)(param_1 + 0x164));
              }
              if (*(int *)((int)puVar10 + 0x14) != 0) {
                return 1;
              }
            }
            iVar20 = fn_82CBCA98(param_1,iVar17,lVar32,0,auStack_ac,auStack_b0);
            if ((iVar20 != 0) && ((*(unsigned int *)(iVar18 + *(int *)(param_1 + 0x164)) & 4) == 0)) {
              uVar23 = *puVar10;
              uVar19 = *(unsigned int *)(puVar10 + 1);
              *puVar10 = uVar23 << 1;
              *(int *)(puVar10 + 1) = (int)((unsigned __int64)uVar19 - 1);
              if ((__int64)((unsigned __int64)uVar19 - 1) < 0) {
                fn_82C4E5E8(puVar10);
              }
              *(unsigned int *)(iVar18 + *(int *)(param_1 + 0x164)) =
                   *(unsigned int *)(iVar18 + *(int *)(param_1 + 0x164)) & 0xfffffffc |
                   (int)(char)(unsigned char)(uVar23 >> 0x3f) + 1U;
            }
            iVar20 = fn_82C93630(param_1,iVar17,lVar32,iVar18 + *(int *)(param_1 + 0x164),0);
            iVar21 = ((int)lVar32 * iVar21 * 2 + iVar17) * 2;
            puVar28 = (unsigned short *)(*(int *)(param_1 + 0x6f0) + iVar21);
            puVar28[1] = *puVar28;
            puVar28 = (unsigned short *)(*(int *)(param_1 + 0x6f4) + iVar21);
            puVar28[1] = *puVar28;
            if (iVar20 != 0) {
              iVar21 = iVar18 + *(int *)(param_1 + 0x164);
              uVar29 = 3 << (uVar31 & 0x3f) | uVar29;
              *(unsigned int *)(iVar21 + 4) = *(unsigned int *)(iVar21 + 4) | 4;
            }
            puVar30 = (unsigned int *)(iVar18 + *(int *)(param_1 + 0x164));
            iVar18 = iVar18 + 8;
            uVar36 = (*puVar30 >> 3 & 1) << (uVar31 & 0x3f) | uVar36;
            uVar19 = (unsigned int)uVar36;
            uVar31 = uVar31 + 2;
          } while (iVar18 < 0x10);
          if (uVar29 == 0xf) {
            uVar29 = 0x3f;
          }
          if ((*(int *)(param_1 + 0x14c) == 0) || (bVar15 = true, (uVar19 & ~uVar29) == 0)) {
            bVar15 = false;
          }
          if ((uVar19 != 0) || (bVar14 = false, uVar29 != 0)) {
            bVar14 = true;
          }
          if (((*(int *)(param_1 + 0x11c) != 0) && (bVar14)) &&
             (iVar17 = fn_82CA6780(param_1,param_2), iVar17 != 0)) {
            return 0xffffffffffffff9c;
          }
        }
        else {
          uVar19 = uVar27;
          if ((uVar31 & 0x700) != 0x600) goto LAB_82ca7408;
          puVar11 = *(unsigned int **)(param_1 + 0x164);
          uVar36 = uVar36 & 0x3c;
          uVar29 = 0;
          uVar31 = 0;
          uVar22 = (unsigned __int64)uStack00000024;
          uVar23 = (unsigned __int64)uStack0000002c;
          *puVar11 = 0;
          iVar17 = 0;
          puVar11[1] = 0;
          puVar11[2] = 0;
          puVar11[3] = 0;
          do {
            lVar33 = (__int64)((int)uVar31 >> 1) + (uVar23 & 0x7fffffff) * 2;
            lVar32 = ((unsigned __int64)uVar31 & 1) + (uVar22 & 0x7fffffff) * 2;
            uVar24 = ((__int64)(int)lVar33 * (__int64)*(int *)(param_1 + 0x88) & 0x7fffffffU) * 2
                     + lVar32;
            if ((1 << (uVar31 & 0x3f) & uVar27) != 0) {
              if (*(int *)(param_1 + 0x5720) == 0) {
                fn_82CBC490(param_1,*(unsigned int *)(param_1 + 0x94c),8,
                                iVar17 + *(int *)(param_1 + 0x164));
              }
              else {
                fn_82C7D7D8(param_1,*(unsigned int *)(param_1 + 0x94c),
                                  iVar17 + *(int *)(param_1 + 0x164));
              }
              if (*(int *)((int)puVar10 + 0x14) != 0) {
                return 1;
              }
            }
            iVar18 = fn_82CBCA98(param_1,lVar32,lVar33,0,auStack_ac,auStack_b0);
            if ((iVar18 != 0) && ((*(unsigned int *)(iVar17 + *(int *)(param_1 + 0x164)) & 4) == 0)) {
              uVar25 = *puVar10;
              uVar19 = *(unsigned int *)(puVar10 + 1);
              *puVar10 = uVar25 << 1;
              *(int *)(puVar10 + 1) = (int)((unsigned __int64)uVar19 - 1);
              if ((__int64)((unsigned __int64)uVar19 - 1) < 0) {
                fn_82C4E5E8(puVar10);
              }
              *(unsigned int *)(iVar17 + *(int *)(param_1 + 0x164)) =
                   *(unsigned int *)(iVar17 + *(int *)(param_1 + 0x164)) & 0xfffffffc |
                   (int)(char)(unsigned char)(uVar25 >> 0x3f) + 1U;
            }
            iVar21 = fn_82C93630(param_1,lVar32,lVar33,iVar17 + *(int *)(param_1 + 0x164),0);
            iVar18 = (int)((uVar24 & 0xffffffff) << 1);
            *(unsigned short *)
             ((int)((((unsigned __int64)*(unsigned int *)(param_1 + 0x88) & 0x7fffffff) * 2 + uVar24 & 0xffffffff)
                   << 1) + *(int *)(param_1 + 0x6f0)) =
                 *(unsigned short *)(*(int *)(param_1 + 0x6f0) + iVar18);
            *(unsigned short *)
             ((int)((((unsigned __int64)*(unsigned int *)(param_1 + 0x88) & 0x7fffffff) * 2 + uVar24 & 0xffffffff)
                   << 1) + *(int *)(param_1 + 0x6f4)) =
                 *(unsigned short *)(*(int *)(param_1 + 0x6f4) + iVar18);
            if (iVar21 != 0) {
              iVar18 = iVar17 + *(int *)(param_1 + 0x164);
              uVar29 = 5 << (uVar31 & 0x3f) | uVar29;
              *(unsigned int *)(iVar18 + 8) = *(unsigned int *)(iVar18 + 8) | 4;
            }
            puVar30 = (unsigned int *)(iVar17 + *(int *)(param_1 + 0x164));
            iVar17 = iVar17 + 4;
            uVar36 = (*puVar30 >> 3 & 1) << (uVar31 & 0x3f) | uVar36;
            uVar19 = (unsigned int)uVar36;
            uVar31 = uVar31 + 1;
          } while (iVar17 < 8);
          if (uVar29 == 0xf) {
            uVar29 = 0x3f;
          }
          if ((*(int *)(param_1 + 0x14c) == 0) || (bVar15 = true, (uVar19 & ~uVar29) == 0)) {
            bVar15 = false;
          }
          if ((uVar19 != 0) || (bVar14 = false, uVar29 != 0)) {
            bVar14 = true;
          }
          if (((*(int *)(param_1 + 0x11c) != 0) && (bVar14)) &&
             (iVar17 = fn_82CA6780(param_1,param_2), iVar17 != 0)) {
            return 0xffffffffffffff9c;
          }
        }
        if (uVar29 != 0) {
          uVar36 = *puVar10;
          uVar29 = *(unsigned int *)(puVar10 + 1);
          *puVar10 = uVar36 << 1;
          *(int *)(puVar10 + 1) = (int)((unsigned __int64)uVar29 - 1);
          if ((__int64)((unsigned __int64)uVar29 - 1) < 0) {
            fn_82C4E5E8(puVar10);
          }
          *param_2 = (unsigned int)((uVar36 >> 0x3f) << 3) | *param_2 & 0xffffffe7;
        }
      }
      if (bVar15) {
        piVar12 = *(int **)(param_1 + 0x9d8);
        if (piVar12 == (int *)0x0) {
          uVar36 = 0;
          *(unsigned int *)((int)puVar10 + 0x14) = 3;
        }
        else {
          iVar17 = *piVar12;
          sVar9 = *(short *)((int)((*puVar10 >> (0x40 - (unsigned __int64)*(unsigned char *)(piVar12 + 2) & 0x7f) &
                                   0xffffffff) << 1) + iVar17);
          uVar36 = (unsigned __int64)sVar9;
          if (sVar9 < 0) {
            fn_82C4E470(puVar10);
            do {
              uVar22 = *puVar10;
              fn_82C4E470(puVar10,1);
              sVar9 = *(short *)((int)(((uVar36 - ((__int64)uVar22 >> 0x3f)) + 0x8000 & 0xffffffff)
                                      << 1) + iVar17);
              uVar36 = (unsigned __int64)sVar9;
            } while (sVar9 < 0);
          }
          else {
            iVar17 = *(int *)(puVar10 + 1);
            iVar18 = (int)(uVar36 & 0xf);
            *puVar10 = *puVar10 << (uVar36 & 0xf);
            *(int *)(puVar10 + 1) = iVar17 - iVar18;
            if (iVar17 < iVar18) {
              do {
                pbVar13 = *(unsigned char **)((int)puVar10 + 0xc);
                if (pbVar13 < (unsigned char *)(*(int *)(puVar10 + 2) - 4U)) {
                  bVar1 = *pbVar13;
                  bVar2 = pbVar13[1];
                  bVar3 = pbVar13[2];
                  bVar4 = pbVar13[3];
                  bVar5 = pbVar13[4];
                  bVar6 = pbVar13[5];
                  iVar17 = *(int *)(puVar10 + 1);
                  *(unsigned char **)((int)puVar10 + 0xc) = pbVar13 + 6;
                  *(int *)(puVar10 + 1) = iVar17 + 0x30;
                  *puVar10 = ((((((unsigned __int64)bVar2 + (unsigned __int64)bVar1 * 0x100) * 0x100 +
                                (unsigned __int64)bVar3) * 0x100 + (unsigned __int64)bVar4) * 0x100 +
                              (unsigned __int64)bVar5) * 0x100 + (unsigned __int64)bVar6 <<
                             ((__int64)-iVar17 & 0x7fU)) + *puVar10;
                  goto LAB_82ca7a40;
                }
                iVar17 = fn_82C4E3B0(puVar10);
              } while (iVar17 == 1);
              uVar36 = (unsigned __int64)((int)sVar9 >> 4);
            }
            else {
LAB_82ca7a40:
              uVar36 = (unsigned __int64)((int)sVar9 >> 4);
            }
          }
        }
        if ((*(int *)((int)puVar10 + 0x14) != 0) || (0xf < (uVar36 & 0xffffffff))) {
          return 1;
        }
        uVar29 = *param_2;
        iVar17 = (int)((uVar36 & 0xffffffff) << 2);
        uVar27 = (unsigned int)((((~uVar36 & 0xffffffff) >> 0x1f) + (unsigned __int64)(7 < uVar36) & 1) << 0x1c);
        *param_2 = uVar27 | uVar29 & 0xefffffff;
        uVar31 = (*(unsigned int *)(&lbl_820FDEF0 + iVar17) & 7) << 0x18;
        *param_2 = uVar31 | uVar27 | uVar29 & 0xe8ffffff;
        *param_2 = (*(unsigned int *)(&lbl_820FDF30 + iVar17) & 3) << 0x14 |
                   uVar31 | uVar27 | uVar29 & 0xe0cfffff;
      }
      param_3 = (unsigned __int64)uStack00000024;
      param_4 = (unsigned __int64)uStack0000002c;
      puVar30 = puStack_a8;
      uVar29 = uStack_a4;
    }
    *(unsigned char *)((int)param_2 + 0xe) = (unsigned char)uVar19 & 1;
    *(unsigned char *)((int)param_2 + 0xf) = (unsigned char)((int)uVar19 >> 1) & 1;
    *(unsigned char *)(param_2 + 4) = (unsigned char)((int)uVar19 >> 2) & 1;
    *(unsigned char *)((int)param_2 + 0x11) = (unsigned char)((int)uVar19 >> 3) & 1;
    *(unsigned char *)((int)param_2 + 0x12) = (unsigned char)((int)uVar19 >> 4) & 1;
    *(unsigned char *)((int)param_2 + 0x13) = (unsigned char)((int)uVar19 >> 5) & 1;
LAB_82ca7b40:
    if (uVar29 != 0) goto LAB_82ca7ba8;
  }
  else {
    *(unsigned short *)((int)param_2 + 0xe) = 0;
    *(unsigned short *)(param_2 + 4) = 0;
    *(unsigned short *)((int)param_2 + 0x12) = 0;
    if (uVar29 != 0) {
      lVar32 = (param_3 & 0x7fffffff) * 2;
      uVar22 = 0;
      uVar19 = *param_2 >> 8 & 7;
      if (uVar19 == 5) {
        puVar11 = *(unsigned int **)(param_1 + 0x164);
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11[2] = 0;
        puVar11[3] = 0;
        do {
          iVar17 = *(int *)(param_1 + 0x88);
          lVar33 = (__int64)((int)uVar36 >> 1) + (param_4 & 0x7fffffff) * 2;
          iVar18 = fn_82CBCA98(param_1,lVar32,lVar33,0,auStack_ac,auStack_b0);
          if (iVar18 != 0) {
            uVar23 = *puVar10;
            uVar19 = *(unsigned int *)(puVar10 + 1);
            *puVar10 = uVar23 << 1;
            *(int *)(puVar10 + 1) = (int)((unsigned __int64)uVar19 - 1);
            if ((__int64)((unsigned __int64)uVar19 - 1) < 0) {
              fn_82C4E5E8(puVar10);
            }
            *(unsigned int *)((int)uVar22 + *(int *)(param_1 + 0x164)) =
                 *(unsigned int *)((int)uVar22 + *(int *)(param_1 + 0x164)) & 0xfffffffc |
                 (int)(char)(unsigned char)(uVar23 >> 0x3f) + 1U;
          }
          fn_82C93630(param_1,lVar32,lVar33,uVar22 + *(unsigned int *)(param_1 + 0x164),0);
          uVar22 = uVar22 + 8;
          iVar17 = (int)((((__int64)iVar17 * (__int64)(int)lVar33 & 0x7fffffffU) * 2 + lVar32 &
                         0x7fffffff) << 1);
          puVar28 = (unsigned short *)(iVar17 + *(int *)(param_1 + 0x6f0));
          uVar36 = uVar36 + 2;
          puVar28[1] = *puVar28;
          puVar28 = (unsigned short *)(iVar17 + *(int *)(param_1 + 0x6f4));
          puVar28[1] = *puVar28;
        } while ((int)uVar22 < 0x10);
      }
      else if (uVar19 == 6) {
        puVar11 = *(unsigned int **)(param_1 + 0x164);
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11[2] = 0;
        puVar11[3] = 0;
        do {
          lVar34 = (__int64)((int)uVar36 >> 1) + (param_4 & 0x7fffffff) * 2;
          lVar33 = (uVar36 & 1) + lVar32;
          uVar23 = ((__int64)*(int *)(param_1 + 0x88) * (__int64)(int)lVar34 & 0x7fffffffU) * 2 +
                   lVar33;
          iVar17 = fn_82CBCA98(param_1,lVar33,lVar34,0,auStack_ac,auStack_b0);
          if (iVar17 != 0) {
            uVar24 = *puVar10;
            uVar19 = *(unsigned int *)(puVar10 + 1);
            *puVar10 = uVar24 << 1;
            *(int *)(puVar10 + 1) = (int)((unsigned __int64)uVar19 - 1);
            if ((__int64)((unsigned __int64)uVar19 - 1) < 0) {
              fn_82C4E5E8(puVar10);
            }
            *(unsigned int *)((int)uVar22 + *(int *)(param_1 + 0x164)) =
                 *(unsigned int *)((int)uVar22 + *(int *)(param_1 + 0x164)) & 0xfffffffc |
                 (int)(char)(unsigned char)(uVar24 >> 0x3f) + 1U;
          }
          fn_82C93630(param_1,lVar33,lVar34,uVar22 + *(unsigned int *)(param_1 + 0x164),0);
          iVar17 = (int)((uVar23 & 0xffffffff) << 1);
          uVar22 = uVar22 + 4;
          uVar36 = uVar36 + 1;
          *(unsigned short *)
           ((int)((((unsigned __int64)*(unsigned int *)(param_1 + 0x88) & 0x7fffffff) * 2 + uVar23 & 0xffffffff) <<
                 1) + *(int *)(param_1 + 0x6f0)) =
               *(unsigned short *)(*(int *)(param_1 + 0x6f0) + iVar17);
          *(unsigned short *)
           ((int)((((unsigned __int64)*(unsigned int *)(param_1 + 0x88) & 0x7fffffff) * 2 + uVar23 & 0xffffffff) <<
                 1) + *(int *)(param_1 + 0x6f4)) =
               *(unsigned short *)(*(int *)(param_1 + 0x6f4) + iVar17);
        } while ((int)uVar22 < 8);
      }
      else {
        *puVar30 = 0;
        puVar30[1] = 0;
        puVar30[2] = 0;
        puVar30[3] = 0;
        puVar37 = puVar30;
        do {
          lVar34 = (__int64)((int)uVar22 >> 1) + (param_4 & 0x7fffffff) * 2;
          lVar33 = (uVar22 & 1) + lVar32;
          iVar17 = fn_82CBCA98(param_1,lVar33,lVar34,0,auStack_ac,auStack_b0);
          if (iVar17 == 0) {
            *puVar37 = *puVar37 & 0xfffffffc;
          }
          else {
            uVar36 = *puVar10;
            uVar19 = *(unsigned int *)(puVar10 + 1);
            *puVar10 = uVar36 << 1;
            *(int *)(puVar10 + 1) = (int)((unsigned __int64)uVar19 - 1);
            if ((__int64)((unsigned __int64)uVar19 - 1) < 0) {
              fn_82C4E5E8(puVar10);
            }
            *puVar37 = *puVar37 & 0xfffffffc | (int)(char)(unsigned char)(uVar36 >> 0x3f) + 1U;
          }
          fn_82C93630(param_1,lVar33,lVar34,puVar37,0);
          uVar22 = uVar22 + 1;
          puVar37 = puVar37 + 1;
        } while ((int)uVar22 < 4);
      }
      goto LAB_82ca7b40;
    }
    *puVar30 = 0;
    iVar17 = fn_82CBCA98(param_1,(param_3 & 0x7fffffff) << 1,(param_4 & 0x7fffffff) << 1,1,
                             auStack_ac,auStack_b0);
    if (iVar17 == 0) {
      *puVar30 = *puVar30 & 0xfffffffc;
    }
    else {
      uVar36 = *puVar10;
      uVar29 = *(unsigned int *)(puVar10 + 1);
      *puVar10 = uVar36 << 1;
      *(int *)(puVar10 + 1) = (int)((unsigned __int64)uVar29 - 1);
      if ((__int64)((unsigned __int64)uVar29 - 1) < 0) {
        fn_82C4E5E8(puVar10);
      }
      *puVar30 = *puVar30 & 0xfffffffc | (int)(char)(unsigned char)(uVar36 >> 0x3f) + 1U;
    }
  }
  fn_82C93630(param_1,(param_3 & 0x7fffffff) << 1,(param_4 & 0x7fffffff) << 1,puVar30,1);
  uVar29 = *(unsigned int *)(param_1 + 0x88);
  iVar17 = ((int)(((unsigned __int64)uVar29 & 0x7fffffff) << 1) * (int)param_4 + (int)param_3) * 4;
  puVar28 = (unsigned short *)(*(int *)(param_1 + 0x6f0) + iVar17);
  puVar26 = (unsigned short *)(*(int *)(param_1 + 0x6f4) + iVar17);
  uVar7 = *puVar28;
  uVar8 = *puVar26;
  puVar28 = puVar28 + 1;
  *puVar28 = uVar7;
  puVar26 = puVar26 + 1;
  *puVar26 = uVar8;
  iVar17 = (int)(((unsigned __int64)uVar29 & 0x3fffffff) << 2);
  puVar28 = (unsigned short *)((int)puVar28 + iVar17);
  *puVar28 = uVar7;
  puVar26 = (unsigned short *)((int)puVar26 + iVar17);
  *puVar26 = uVar8;
  puVar28[-1] = uVar7;
  puVar26[-1] = uVar8;
LAB_82ca7ba8:
  return (unsigned __int64)(*(int *)((int)puVar10 + 0x14) != 0);
}

