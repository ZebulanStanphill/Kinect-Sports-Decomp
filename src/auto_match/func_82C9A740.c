typedef unsigned char bool;
extern unsigned int *auStack_150;
extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern int fn_82C565B0();
extern int fn_82C93060();
extern int fn_82C93B58();
extern int fn_82C952C0();
extern int fn_82C95388();
extern int fn_82C95540();
extern int fn_82C98378();
extern int fn_82CA1EF8();
extern int fn_82CA5860();
extern int fn_82CA5C50();
extern int fn_82CA6910();
extern int fn_82CAD120();
extern int fn_82CB9AB8();
extern int fn_82CBB638();
extern unsigned int iStack_114;
extern unsigned int iStack_128;
extern unsigned int iStack_13c;
extern unsigned int iStack_168;
extern unsigned int iStack_d8;
extern unsigned int iStack_ec;
extern unsigned int uStack_100;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_120;
extern unsigned int uStack_124;
extern unsigned int uStack_134;
extern unsigned int uStack_138;
extern unsigned int uStack_154;
extern unsigned int uStack_158;
extern unsigned int uStack_15c;
extern unsigned int uStack_160;
extern unsigned int uStack_164;
extern unsigned int uStack_16c;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


unsigned __int64 fn_82C9A740(int param_1)

{
  __int64 *plVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  int iVar8;
  int iVar9;
  unsigned int *puVar10;
  int iVar13;
  unsigned __int64 uVar11;
  __int64 lVar12;
  unsigned int uVar17;
  int iVar18;
  unsigned __int64 uVar14;
  __int64 lVar15;
  __int64 lVar16;
  unsigned __int64 uVar19;
  unsigned __int64 uVar20;
  unsigned int uVar21;
  unsigned __int64 uVar22;
  unsigned __int64 uVar23;
  __int64 lVar24;
  unsigned __int64 uVar25;
  unsigned __int64 uVar26;
  unsigned __int64 uVar27;
  unsigned __int64 uVar28;
  unsigned __int64 uVar29;
  unsigned __int64 uVar30;
  unsigned int *puStack_170;
  unsigned int uStack_16c;
  int iStack_168;
  unsigned int uStack_164;
  unsigned int uStack_160;
  unsigned int uStack_15c;
  unsigned int uStack_158;
  unsigned int uStack_154;
  unsigned int auStack_150 [4];
  unsigned int *puStack_140;
  int iStack_13c;
  unsigned int uStack_138;
  unsigned int uStack_134;
  unsigned int *puStack_12c;
  int iStack_128;
  unsigned int uStack_124;
  unsigned int uStack_120;
  unsigned int *puStack_118;
  int iStack_114;
  unsigned int uStack_110;
  unsigned int uStack_10c;
  unsigned int *puStack_104;
  unsigned int uStack_100;
  unsigned int uStack_fc;
  unsigned int uStack_f8;
  unsigned int *puStack_f0;
  int iStack_ec;
  unsigned int uStack_e8;
  unsigned int uStack_e4;
  unsigned int *puStack_dc;
  int iStack_d8;
  unsigned int uStack_d4;
  unsigned int uStack_d0;
  unsigned int **ppuStack_c8;
  unsigned int uStack_c4;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned __int64 uStack_a8;
  
  uStack_134 = *(unsigned int *)(param_1 + 0xe4);
  puStack_140 = &uStack_164;
  iStack_d8 = *(int *)(param_1 + 0xe0);
  iStack_13c = *(int *)(param_1 + 0xdc) + *(int *)(param_1 + 0xec0);
  uStack_120 = *(unsigned int *)(param_1 + 0xe8);
  puStack_12c = &uStack_160;
  iStack_114 = iStack_d8 + *(int *)(param_1 + 0xec8);
  iStack_128 = *(int *)(param_1 + 0xec4) + iStack_d8;
  uStack_138 = 0;
  puStack_118 = &uStack_15c;
  puStack_104 = &uStack_158;
  iStack_ec = *(int *)(param_1 + 0xed0) + iStack_d8;
  uStack_124 = 0;
  puStack_f0 = auStack_150;
  uStack_100 = *(unsigned int *)(param_1 + 0xee4);
  puStack_dc = &uStack_154;
  ppuStack_c8 = &puStack_170;
  uStack_110 = 0;
  iStack_d8 = *(int *)(param_1 + 0xed4) + iStack_d8;
  uStack_fc = 0;
  uStack_c4 = *(unsigned int *)(param_1 + 0x110);
  uStack_e8 = 0;
  uStack_d4 = 0;
  *(unsigned int *)(param_1 + 0xb64) =
       *(unsigned int *)((*(int *)(param_1 + 0xb94) + 0x2df) * 4 + param_1);
  *(unsigned int *)(param_1 + 0xb70) =
       *(unsigned int *)((*(int *)(param_1 + 0xb94) + 0x2e2) * 4 + param_1);
  uVar20 = 1;
  *(unsigned int *)(param_1 + 0x830) =
       *(unsigned int *)((*(int *)(param_1 + 0x82c) + 0x107) * 8 + param_1);
  iVar8 = 1;
  uStack_c0 = 0x18;
  uVar19 = 0;
  uStack_bc = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  *(unsigned int *)(param_1 + 0x834) =
       *(unsigned int *)(*(int *)(param_1 + 0x82c) * 8 + param_1 + 0x83c);
  if (*(int *)(param_1 + 0xfb0) == 3) {
    *(unsigned int *)(param_1 + 0x1cc) = 0;
  }
  else {
    *(unsigned int *)(param_1 + 0x1cc) = 1;
  }
  uStack_10c = uStack_120;
  uStack_f8 = uStack_134;
  uStack_e4 = uStack_120;
  uStack_d0 = uStack_120;
  fn_82C565B0(param_1,*(unsigned int *)(param_1 + 0xf8));
  if ((*(int *)(param_1 + 0xfb0) == 2) || (uVar17 = 0, *(int *)(param_1 + 0xfb0) == 3)) {
    uVar17 = 1;
  }
  *(unsigned int *)(*(int *)(param_1 + 0x7b8) + 0x4c) = uVar17;
  fn_82CAD120(*(unsigned int *)(param_1 + 0x7b8),*(unsigned int *)(param_1 + 0xf8),1);
  if (*(int *)(param_1 + 0xf8) < 5) {
    iVar18 = param_1 + 0x9a4;
    iVar13 = param_1 + 0x9b4;
    iVar9 = param_1 + 0x9dc;
  }
  else if (*(int *)(param_1 + 0xf8) < 0xd) {
    iVar18 = param_1 + 0x998;
    iVar13 = param_1 + 0x9c0;
    iVar9 = param_1 + 0x9e8;
  }
  else {
    iVar18 = param_1 + 0x98c;
    iVar13 = param_1 + 0x9cc;
    iVar9 = param_1 + 0x9f4;
  }
  *(int *)(param_1 + 0x9d8) = iVar13;
  uVar29 = 0;
  *(int *)(param_1 + 0xa00) = iVar9;
  *(int *)(param_1 + 0x9b0) = iVar18;
  iVar9 = *(int *)(param_1 + 0xe0);
  uStack_164 = *(int *)(param_1 + 0xdc) + *(int *)(param_1 + 0xec0);
  uStack_15c = iVar9 + *(int *)(param_1 + 0xec8);
  uStack_160 = *(int *)(param_1 + 0xec4) + iVar9;
  auStack_150[0] = *(int *)(param_1 + 0xed0) + iVar9;
  uStack_158 = *(unsigned int *)(param_1 + 0xee4);
  uStack_154 = *(int *)(param_1 + 0xed4) + iVar9;
  puStack_170 = *(unsigned int **)(param_1 + 0x110);
  uStack_16c = 0;
  iStack_168 = 0;
  *(unsigned int *)(param_1 + 0x158) = *(unsigned int *)(param_1 + 0x88);
  if (*(int *)(param_1 + 0x8c) != 0) {
    do {
      iVar13 = iStack_168;
      uVar30 = 1;
      uVar25 = (unsigned __int64)uStack_164;
      iVar9 = (int)uVar29;
      uVar26 = (unsigned __int64)uStack_160;
      uVar28 = (unsigned __int64)uStack_15c;
      uVar27 = (unsigned __int64)uStack_158;
      uVar23 = (unsigned __int64)auStack_150[0];
      uVar22 = (unsigned __int64)uStack_154;
      uVar21 = (unsigned int)LZCOUNT((*(int *)(param_1 + 0x8c) + -1) - iVar9) >> 5;
      *(int *)(param_1 + 0x158) = -*(int *)(param_1 + 0x158);
      iVar18 = (int)uVar19;
      if (*(int *)(param_1 + 0x55b4) == 0) {
LAB_82c9abac:
        if ((*(int *)(param_1 + 0xf94) != 0) &&
           (uVar5 = fn_82CA5C50(param_1,uVar29), (int)uVar5 != 0)) {
          return uVar5;
        }
        uVar30 = 0;
        uVar11 = 0;
        if (*(int *)(param_1 + 0x88) != 0) {
          lVar24 = uVar23 - uVar28;
          do {
            iVar2 = *(int *)(param_1 + 0xcc);
            dataCacheBlockTouch(((__int64)(int)((unsigned int)uVar11 & 7) * (__int64)iVar2 + 0x20U &
                                0x3fffffff) * 4 + uVar27);
            lVar15 = (uVar11 & 7) * 4;
            iVar3 = (int)lVar15;
            dataCacheBlockTouch((__int64)(iVar3 + 1) * (__int64)iVar2 + 0x80 + uVar27);
            lVar7 = (__int64)(iVar3 + 2) * (__int64)iVar2 + 0x80;
            dataCacheBlockTouch(lVar7 + uVar27);
            lVar15 = lVar15 + 3;
            dataCacheBlockTouch((__int64)(int)lVar15 * (__int64)iVar2 + 0x80 + uVar27);
            lVar12 = lVar24 + uVar28;
            lVar16 = (__int64)(int)((unsigned int)uVar11 & 0xf) * (__int64)*(int *)(param_1 + 0xd0) + 0x80
            ;
            dataCacheBlockTouch(lVar16 + lVar12);
            dataCacheBlockTouch(lVar16 + uVar22);
            *(unsigned int *)(param_1 + 0x148) = 0;
            uVar5 = fn_82CA6910(param_1,puStack_170,uVar11,uVar29,lVar15,lVar7,iVar2,lVar12);
            if ((int)uVar5 != 0) {
              uVar6 = 0xffffffffffffffff;
LAB_82c9af1c:
              iVar9 = fn_82C93060(param_1,uVar5,uVar6,uVar11,&uStack_16c,&iStack_168,0,
                                    &puStack_140);
              if (iVar9 != 0) {
                return uVar5;
              }
              if ((iVar18 == 0) || (iVar18 == 1)) {
                uVar19 = uVar5;
              }
              uVar29 = (unsigned __int64)uStack_16c;
              iVar13 = iStack_168;
              break;
            }
            bVar4 = (*puStack_170 & 0x700) == 0;
            fn_82CB9AB8(param_1,uVar11,uVar29,bVar4);
            if (bVar4) {
              if (((*puStack_170 & 0x40000000) != 0x40000000) ||
                 (*(short *)((int)(((__int64)*(int *)(param_1 + 0x88) * (__int64)iVar9 + uVar11 &
                                   0xffffffff) << 1) + *(int *)(param_1 + 0x6f8)) == 0x4000)) {
                uVar5 = fn_82C98378(param_1,puStack_170,uVar25,uVar26,uVar28,uVar11,uVar29,
                                      (uVar30 & 0x7fffffff) << 1);
                goto LAB_82c9aec8;
              }
              *(unsigned short *)((int)puStack_170 + 0xe) = 0;
              *(unsigned short *)(puStack_170 + 4) = 0;
              *(unsigned short *)((int)puStack_170 + 0x12) = 0;
              *(unsigned char *)(puStack_170 + 2) = 0;
              *(unsigned char *)((int)puStack_170 + 9) = 0;
              *(unsigned char *)((int)puStack_170 + 10) = 0;
              *(unsigned char *)((int)puStack_170 + 0xb) = 0;
              *(unsigned char *)(puStack_170 + 3) = 0;
              *(unsigned char *)((int)puStack_170 + 0xd) = 0;
              iVar2 = (int)((((__int64)*(int *)(param_1 + 0x88) * (__int64)iVar9 & 0x7fffffffU) *
                             2 + uVar11 & 0xffffffff) << 2);
              lVar15 = (__int64)(int)((iVar13 >> 1) + *(unsigned int *)(param_1 + 0x4fb4)) *
                       (__int64)*(int *)(param_1 + 0xd0) + (__int64)((int)uVar30 >> 1) +
                       (unsigned __int64)*(unsigned int *)(param_1 + 0x4fb4);
              if ((*(short *)(*(int *)(param_1 + 0x6f0) + iVar2) == 0) &&
                 (*(short *)(*(int *)(param_1 + 0x6f4) + iVar2) == 0)) {
                (**(int (***)())(param_1 + 0xc54))
                          (uVar25,uVar26,uVar28,
                           (__int64)*(int *)(param_1 + 0xcc) * (__int64)iVar13 + uVar30 +
                           (unsigned __int64)*(unsigned int *)(param_1 + 0xee4),
                           (unsigned __int64)*(unsigned int *)(param_1 + 0xed0) + lVar15,
                           (unsigned __int64)*(unsigned int *)(param_1 + 0xed4) + lVar15,*(int *)(param_1 + 0xcc));
                *puStack_170 = *puStack_170 | 0x80000000;
                *puStack_170 = *puStack_170 | 0x20000;
              }
              else {
                fn_82C93B58(param_1,uVar25,uVar26,uVar28,uVar11,uVar29);
                *puStack_170 = *puStack_170 & 0x7fffffff;
              }
            }
            else {
              uVar5 = fn_82C95540(param_1,puStack_170,uVar25,uVar26,uVar28,uVar11,uVar29,
                                    (uVar30 & 0x7fffffff) << 1);
LAB_82c9aec8:
              if ((int)uVar5 != 0) {
                uVar6 = 0xfffffffffffffffe;
                goto LAB_82c9af1c;
              }
            }
            uVar11 = uVar11 + 1;
            uVar25 = uVar25 + 0x10;
            puStack_170 = puStack_170 + 6;
            uVar27 = uVar27 + 0x10;
            uVar28 = uVar28 + 8;
            uVar22 = uVar22 + 8;
            uVar26 = uVar26 + 8;
            uVar30 = uVar30 + 0x10;
          } while ((uVar11 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x88));
        }
        if ((*(unsigned int *)(param_1 + 0xbbc) & 1) != 0) {
          fn_82CBB638(param_1,uVar29,uStack_164,uStack_160,uStack_15c,uVar20,0);
        }
        uVar20 = 0;
        if (((uVar29 & 0xffffffff) < (unsigned __int64)(*(int *)(param_1 + 0x8c) - 1)) &&
           (*(int *)((int)((uVar29 + 1 & 0xffffffff) << 2) + *(int *)(param_1 + 0x55d0)) != 0)) {
          uVar21 = 1;
        }
        iVar9 = *(int *)(param_1 + 0xe8);
        uStack_160 = iVar9 + uStack_160;
        uStack_164 = *(int *)(param_1 + 0xe4) + uStack_164;
        uStack_158 = uStack_158 + *(int *)(param_1 + 0xe4);
        auStack_150[0] = auStack_150[0] + iVar9;
        uStack_15c = iVar9 + uStack_15c;
        uStack_154 = uStack_154 + iVar9;
        if ((uVar21 != 0) && ((*(unsigned int *)(param_1 + 0xbbc) & 1) != 0)) {
          fn_82CBB638(param_1,uVar29);
        }
      }
      else {
        iVar2 = (int)((uVar29 & 0xffffffff) << 2);
        if (*(int *)(*(int *)(param_1 + 0x55d0) + iVar2) == 0) {
LAB_82c9ab98:
          if (*(int *)(*(int *)(param_1 + 0x55d0) + iVar2) != 0) {
            uVar20 = 1;
          }
          goto LAB_82c9abac;
        }
        plVar1 = *(__int64 **)(param_1 + 0x54);
        *(int *)(param_1 + 0x55d8) = *(int *)(param_1 + 0x55d8) + 1;
        if (*(int *)((int)plVar1 + 0x1c) != 0) {
          uVar11 = (unsigned __int64)*(unsigned int *)(plVar1 + 1);
          uVar14 = uVar11 + 0x10;
          if ((uVar14 & 0xffffffff) == 0) {
            do {
              if ((uVar14 & 0xffffffff) == 0) break;
              uVar30 = uVar30 - uVar14;
              *plVar1 = *plVar1 << (uVar14 & 0x7f);
              *(int *)(plVar1 + 1) = (int)(uVar11 - uVar14);
              if ((__int64)(uVar11 - uVar14) < 0) {
                fn_82C4E5E8(plVar1);
              }
              uVar11 = (unsigned __int64)*(unsigned int *)(plVar1 + 1);
              uVar14 = uVar11 + 0x10;
            } while ((uVar14 & 0xffffffff) < (uVar30 & 0xffffffff));
          }
          *plVar1 = *plVar1 << (uVar30 & 0x7f);
          *(int *)(plVar1 + 1) = (int)(uVar11 - uVar30);
          if ((__int64)(uVar11 - uVar30) < 0) {
            fn_82C4E5E8(plVar1);
          }
        }
        fn_82C4E470(plVar1,*(unsigned int *)(plVar1 + 1) & 7);
        uVar5 = fn_82CA5860(param_1,uVar29);
        *(unsigned int *)(param_1 + 0x79c) = 1;
        if ((int)uVar5 == 0) {
          if (((*(int *)(param_1 + 0x50c8) == 0) && (*(int *)(param_1 + 0x50cc) == 0)) &&
             (*(int *)(param_1 + 0x120) == 1)) {
            iVar8 = 1;
            goto LAB_82c9ab98;
          }
          *(unsigned int *)(param_1 + 0x50c8) = 0;
          *(unsigned int *)(param_1 + 0x50cc) = 0;
          *(unsigned int *)(param_1 + 0x120) = 1;
          iVar9 = fn_82C93060(param_1,1,iVar8,0,&uStack_16c,&iStack_168,0,&puStack_140);
          if (iVar9 != 0) {
            return 1;
          }
          if (iVar18 == 0) {
            uVar19 = 1;
          }
          if (iVar8 == 0) break;
          iVar8 = 0;
          uVar29 = (unsigned __int64)uStack_16c;
          *(int *)(param_1 + 0x55d8) = *(int *)(param_1 + 0x55d8) + -1;
          iVar13 = iStack_168;
        }
        else {
          *(unsigned int *)(param_1 + 0x50c8) = 0;
          *(unsigned int *)(param_1 + 0x50cc) = 0;
          *(unsigned int *)(param_1 + 0x120) = 1;
          iVar9 = fn_82C93060(param_1,uVar5,iVar8,0,&uStack_16c,&iStack_168,0,&puStack_140);
          if (iVar9 != 0) {
            return uVar5;
          }
          if ((iVar18 == 0) || (iVar18 == 1)) {
            uVar19 = uVar5;
          }
          if (iVar8 == 0) break;
          iVar8 = 0;
          uVar29 = (unsigned __int64)uStack_16c;
          *(int *)(param_1 + 0x55d8) = *(int *)(param_1 + 0x55d8) + -1;
          iVar13 = iStack_168;
        }
      }
      uVar29 = uVar29 + 1;
      iStack_168 = iVar13 + 0x10;
      uStack_16c = (unsigned int)uVar29;
    } while ((uVar29 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x8c));
  }
  if (*(int *)(param_1 + 0xf6c) != 0) {
    if (*(int *)(param_1 + 0x3cb0) == 7) {
      fn_82C95388();
    }
    else {
      fn_82C952C0(param_1);
    }
    fn_82CA1EF8(param_1,(unsigned __int64)*(unsigned int *)(param_1 + 0xdc) +
                              (unsigned __int64)*(unsigned int *)(param_1 + 0xec0),
                      (unsigned __int64)*(unsigned int *)(param_1 + 0xec4) + (unsigned __int64)*(unsigned int *)(param_1 + 0xe0),
                      (unsigned __int64)*(unsigned int *)(param_1 + 0xe0) + (unsigned __int64)*(unsigned int *)(param_1 + 0xec8),
                      *(unsigned int *)(param_1 + 0x3d78),*(unsigned int *)(param_1 + 0x3d88),
                      *(unsigned int *)(param_1 + 0x3d98),*(unsigned int *)(param_1 + 0x3d80));
  }
  if (*(int *)(param_1 + 0x3a04) != 0) {
    iVar8 = 0;
    puVar10 = *(unsigned int **)(param_1 + 0x118);
    if (0 < *(int *)(param_1 + 0x8c)) {
      do {
        iVar9 = 0;
        if (0 < *(int *)(param_1 + 0x88)) {
          do {
            uVar21 = *puVar10 & 0xfffdffff;
            if (*(short *)((*(int *)(param_1 + 0x88) * iVar8 + iVar9) * 2 +
                          *(int *)(param_1 + 0x6f8)) != 0x4000) {
              uVar21 = *puVar10 | 0x20000;
            }
            iVar9 = iVar9 + 1;
            *puVar10 = uVar21;
            puVar10 = puVar10 + 6;
          } while (iVar9 < *(int *)(param_1 + 0x88));
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(param_1 + 0x8c));
    }
  }
  if (((*(int *)(param_1 + 0xf6c) != 0) || (*(int *)(param_1 + 0x3a28) != 0)) ||
     (uVar17 = 0, *(int *)(param_1 + 0x3b9c) != -1)) {
    uVar17 = 1;
  }
  *(unsigned int *)(param_1 + 0x3d08) = uVar17;
  *(unsigned int *)(param_1 + 0x3d0c) = 0;
  *(unsigned int *)(param_1 + 0x3cf0) = 1;
  return uVar19;
}

