typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern int fn_82C75C10();
extern int fn_82C9B9E0();
extern int fn_82CA5860();
extern int fn_82CAD120();
extern int fn_830D8E88();
extern int fn_830D9228();
extern unsigned int iStack00000014;
extern unsigned int iStack_d4;
extern unsigned int iStack_d8;
extern unsigned int iStack_ec;
extern unsigned int lbl_820FDCA8;
extern unsigned int lbl_820FDCE8;
extern unsigned int lbl_820FDD78;
extern unsigned int uStack_c8;
extern unsigned int uStack_f0;
extern unsigned int uStack_f8;


unsigned __int64 fn_830B62A0(int param_1,int *param_2,int *param_3)

{
  char cVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned char bVar7;
  unsigned char bVar8;
  unsigned short uVar9;
  short sVar10;
  unsigned __int64 *puVar11;
  __int64 *plVar12;
  unsigned int uVar13;
  int iVar14;
  unsigned char *pbVar15;
  unsigned short uVar16;
  bool bVar17;
  bool bVar18;
  unsigned __int64 uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  unsigned int uVar24;
  int iVar25;
  int iVar26;
  unsigned int uVar27;
  short sVar28;
  unsigned __int64 uVar29;
  short sVar31;
  unsigned int uVar30;
  unsigned __int64 uVar32;
  short *psVar33;
  unsigned int uVar37;
  int iVar38;
  unsigned __int64 uVar34;
  unsigned int uVar39;
  unsigned __int64 uVar35;
  __int64 lVar36;
  short *psVar40;
  unsigned int *puVar41;
  unsigned char uVar42;
  __int64 lVar43;
  int *piVar44;
  unsigned int uVar45;
  short *psVar46;
  int *piVar47;
  __int64 lVar48;
  __int64 lVar49;
  short *psVar50;
  unsigned __int64 uVar51;
  unsigned __int64 uVar52;
  short sVar53;
  int iStack00000014;
  int *piStack00000024;
  unsigned char bStack_100;
  unsigned int uStack_f8;
  unsigned int *puStack_f4;
  struct { unsigned int first; int second; } stack_pair_f0;

  int *piStack_e8;
  int *piStack_e4;
  int iStack_d8;
  int iStack_d4;
  unsigned int uStack_c8;
  short sStack_c2;
  short asStack_c0 [8];
  short asStack_b0 [88];
  
  iVar20 = *(int *)(param_1 + 0xfb0);
  *(unsigned int *)(param_1 + 0xb64) =
       *(unsigned int *)((*(int *)(param_1 + 0xb94) + 0x2df) * 4 + param_1);
  *(unsigned int *)(param_1 + 0xb70) =
       *(unsigned int *)((*(int *)(param_1 + 0xb94) + 0x2e2) * 4 + param_1);
  *(unsigned int *)(param_1 + 0x830) =
       *(unsigned int *)((*(int *)(param_1 + 0x82c) + 0x107) * 8 + param_1);
  *(unsigned int *)(param_1 + 0x834) =
       *(unsigned int *)(*(int *)(param_1 + 0x82c) * 8 + param_1 + 0x83c);
  if (iVar20 == 3) {
    *(unsigned int *)(param_1 + 0x1cc) = 0;
  }
  else {
    *(unsigned int *)(param_1 + 0x1cc) = 1;
  }
  if ((*(int *)(param_1 + 0x39f8) * *(int *)(param_1 + 0xd64) & 0xffffff80U) == 0) {
    *(unsigned int *)(param_1 + 0x39fc) = 4;
    *(unsigned int *)(param_1 + 0x3a00) = 3;
  }
  else {
    *(unsigned int *)(param_1 + 0x3a00) = 4;
    *(unsigned int *)(param_1 + 0x39fc) = 3;
  }
  if ((iVar20 == 2) || (uVar37 = 0, iVar20 == 3)) {
    uVar37 = 1;
  }
  *(unsigned int *)(*(int *)(param_1 + 0x7b8) + 0x4c) = uVar37;
  iStack00000014 = param_1;
  piStack00000024 = param_3;
  fn_82CAD120(*(unsigned int *)(param_1 + 0x7b8),*(unsigned int *)(param_1 + 0xf8),1);
  if (*(int *)(param_1 + 0xf8) < 5) {
    iVar38 = param_1 + 0x9a4;
    iVar23 = param_1 + 0x9b4;
    iVar20 = param_1 + 0x9dc;
  }
  else if (*(int *)(param_1 + 0xf8) < 0xd) {
    iVar38 = param_1 + 0x998;
    iVar23 = param_1 + 0x9c0;
    iVar20 = param_1 + 0x9e8;
  }
  else {
    iVar38 = param_1 + 0x98c;
    iVar23 = param_1 + 0x9cc;
    iVar20 = param_1 + 0x9f4;
  }
  *(int *)(param_1 + 0x9b0) = iVar38;
  *(int *)(param_1 + 0x9d8) = iVar23;
  *(int *)(param_1 + 0xa00) = iVar20;
  puVar41 = *(unsigned int **)(param_1 + 0x110);
  fn_82C75C10(param_1);
  fn_82C9B9E0(param_1,param_2);
  uVar9 = *(unsigned short *)(param_2 + 0xd);
  uVar13 = (unsigned int)(*(unsigned short *)((int)param_2 + 0x32) >> 1);
  stack_pair_f0.second = 0;
  uVar24 = (unsigned int)(uVar9 >> 1);
  iStack_d8 = 0;
  param_3[5] = *(int *)(param_1 + 0x56f8);
  uStack_c8 = (unsigned int)(uVar9 >> 1);
  param_3[6] = *(int *)(param_1 + 0x5704);
  param_3[7] = *(int *)(param_1 + 0x56fc);
  iStack_d4 = 0;
  stack_pair_f0.first = 0;
  param_3[8] = *(int *)(param_1 + 0x5708);
  *param_3 = 0;
  param_3[1] = 0;
  *(unsigned short *)(param_3 + 4) = 0;
  *(unsigned short *)((int)param_3 + 0x12) = 0;
  puStack_f4 = puVar41;
  if (uStack_c8 != 0) {
    do {
      param_3[2] = iStack_d8;
      *(unsigned short *)((int)param_3 + 0x12) = 0;
      param_3[3] = iStack_d4;
      if ((*(int *)(param_1 + 0x55b4) != 0) && (*(int *)(param_2[0x146] + stack_pair_f0.first * 4) != 0)) {
        **(unsigned __int64 **)(param_1 + 0x54) = *(unsigned __int64 *)(param_2 + 0x1a);
        *(int *)(*(int *)(param_1 + 0x54) + 8) = param_2[0x1c];
        *(int *)(*(int *)(param_1 + 0x54) + 0xc) = param_2[0x1d];
        *(int *)(*(int *)(param_1 + 0x54) + 0x10) = param_2[0x1e];
        *(int *)(*(int *)(param_1 + 0x54) + 0x14) = param_2[0x1f];
        *(int *)(*(int *)(param_1 + 0x54) + 0x18) = param_2[0x20];
        *(int *)(*(int *)(param_1 + 0x54) + 0x1c) = param_2[0x21];
        *(int *)(*(int *)(param_1 + 0x54) + 0x20) = param_2[0x22];
        *(int *)(*(int *)(param_1 + 0x54) + 0x24) = param_2[0x23];
        *(int *)(*(int *)(param_1 + 0x54) + 0x28) = param_2[0x24];
        *(int *)(*(int *)(param_1 + 0x54) + 0x2c) = param_2[0x25];
        *(int *)(*(int *)(param_1 + 0x54) + 0x30) = param_2[0x26];
        puVar11 = *(unsigned __int64 **)(param_1 + 0x54);
        if (*(int *)((int)puVar11 + 0x1c) != 0) {
          uVar32 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
          uVar51 = 1;
          uVar34 = uVar32 + 0x10;
          if ((uVar34 & 0xffffffff) == 0) {
            do {
              if ((uVar34 & 0xffffffff) == 0) break;
              uVar29 = *puVar11;
              uVar51 = uVar51 - uVar34;
              *(int *)(puVar11 + 1) = (int)(uVar32 - uVar34);
              *puVar11 = uVar29 << (uVar34 & 0x7f);
              if ((__int64)(uVar32 - uVar34) < 0) {
                fn_82C4E5E8(puVar11,uVar29 >> (0x40 - uVar34 & 0x7f) & 0xffffffff);
              }
              uVar32 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
              uVar34 = uVar32 + 0x10;
            } while ((uVar34 & 0xffffffff) < (uVar51 & 0xffffffff));
          }
          *puVar11 = *puVar11 << (uVar51 & 0x7f);
          *(int *)(puVar11 + 1) = (int)(uVar32 - uVar51);
          if ((__int64)(uVar32 - uVar51) < 0) {
            fn_82C4E5E8(puVar11);
          }
        }
        fn_82C4E470(puVar11,*(unsigned int *)(puVar11 + 1) & 7);
        uVar19 = fn_82CA5860(param_1,stack_pair_f0.first);
        *(unsigned __int64 *)(param_2 + 0x1a) = **(unsigned __int64 **)(param_1 + 0x54);
        param_2[0x1c] = *(int *)(*(int *)(param_1 + 0x54) + 8);
        param_2[0x1d] = *(int *)(*(int *)(param_1 + 0x54) + 0xc);
        param_2[0x1e] = *(int *)(*(int *)(param_1 + 0x54) + 0x10);
        param_2[0x1f] = *(int *)(*(int *)(param_1 + 0x54) + 0x14);
        param_2[0x20] = *(int *)(*(int *)(param_1 + 0x54) + 0x18);
        param_2[0x21] = *(int *)(*(int *)(param_1 + 0x54) + 0x1c);
        param_2[0x22] = *(int *)(*(int *)(param_1 + 0x54) + 0x20);
        param_2[0x23] = *(int *)(*(int *)(param_1 + 0x54) + 0x24);
        param_2[0x24] = *(int *)(*(int *)(param_1 + 0x54) + 0x28);
        param_2[0x25] = *(int *)(*(int *)(param_1 + 0x54) + 0x2c);
        param_2[0x26] = *(int *)(*(int *)(param_1 + 0x54) + 0x30);
        *(unsigned char *)((int)param_2 + 0x4e3) = 1;
        if ((int)uVar19 != 0) {
          return uVar19;
        }
      }
      uStack_f8 = 0;
      if (uVar13 != 0) {
        do {
          dataCacheBlockTouch((unsigned __int64)*(unsigned int *)(*param_2 + 0xc) + 0x80);
          uVar42 = 0;
          bVar17 = false;
          uVar24 = 0;
          *puVar41 = *puVar41 & 0xef3ff8ff;
          uVar32 = 0;
          uVar34 = 0;
          *(unsigned char *)(puVar41 + 1) = *(unsigned char *)(param_2 + 6);
          if (param_2[0x1a8] == 0) {
            puVar11 = (unsigned __int64 *)*param_2;
            uVar51 = *puVar11;
            uVar39 = *(unsigned int *)(puVar11 + 1);
            *puVar11 = uVar51 << 1;
            *(int *)(puVar11 + 1) = (int)((unsigned __int64)uVar39 - 1);
            if ((__int64)((unsigned __int64)uVar39 - 1) < 0) {
              fn_82C4E5E8();
            }
            *puVar41 = (unsigned int)((uVar51 >> 0x3f) << 5) | *puVar41 & 0xffffff1f;
          }
          if (*(char *)((int)param_2 + 0x1a) == '\0') {
            puVar11 = (unsigned __int64 *)*param_2;
            uVar51 = *puVar11;
            uVar39 = *(unsigned int *)(puVar11 + 1);
            *puVar11 = uVar51 << 1;
            *(int *)(puVar11 + 1) = (int)((unsigned __int64)uVar39 - 1);
            if ((__int64)((unsigned __int64)uVar39 - 1) < 0) {
              fn_82C4E5E8();
            }
            *puVar41 = (unsigned int)((uVar51 >> 0x3f) << 0x1f) | *puVar41 & 0x7fffffff;
          }
          if ((*puVar41 & 0xe0) == 0x20) {
            uVar24 = 1;
            bVar17 = false;
          }
          else {
            if ((*puVar41 & 0x80000000) == 0) {
              puVar11 = (unsigned __int64 *)*param_2;
              iVar20 = *(int *)param_2[0x54];
              sVar28 = *(short *)((int)((*puVar11 >> 0x36) << 1) + iVar20);
              uVar51 = (unsigned __int64)sVar28;
              if (sVar28 < 0) {
                fn_82C4E470(puVar11,10);
                do {
                  uVar32 = *puVar11;
                  fn_82C4E470(puVar11,1);
                  sVar28 = *(short *)((int)(((uVar51 - ((__int64)uVar32 >> 0x3f)) + 0x8000 &
                                            0xffffffff) << 1) + iVar20);
                  uVar51 = (unsigned __int64)sVar28;
                } while (sVar28 < 0);
              }
              else {
                iVar20 = *(int *)(puVar11 + 1);
                iVar23 = (int)(uVar51 & 0xf);
                *puVar11 = *puVar11 << (uVar51 & 0xf);
                *(int *)(puVar11 + 1) = iVar20 - iVar23;
                if (iVar20 < iVar23) {
                  do {
                    pbVar15 = *(unsigned char **)((int)puVar11 + 0xc);
                    if (pbVar15 < (unsigned char *)(*(int *)(puVar11 + 2) - 4U)) {
                      bVar2 = *pbVar15;
                      bVar8 = pbVar15[1];
                      bVar3 = pbVar15[2];
                      bVar4 = pbVar15[4];
                      bVar5 = pbVar15[3];
                      bVar6 = pbVar15[5];
                      iVar20 = *(int *)(puVar11 + 1);
                      *(unsigned char **)((int)puVar11 + 0xc) = pbVar15 + 6;
                      *(int *)(puVar11 + 1) = iVar20 + 0x30;
                      *puVar11 = ((((((unsigned __int64)bVar2 * 0x100 + (unsigned __int64)bVar8) * 0x100 +
                                    (unsigned __int64)bVar3) * 0x100 + (unsigned __int64)bVar5) * 0x100 +
                                  (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar6 <<
                                 ((__int64)-iVar20 & 0x7fU)) + *puVar11;
                      goto LAB_830b6874;
                    }
                    iVar20 = fn_82C4E3B0(puVar11);
                  } while (iVar20 == 1);
                  uVar51 = (unsigned __int64)((int)sVar28 >> 4);
                }
                else {
LAB_830b6874:
                  uVar51 = (unsigned __int64)((int)sVar28 >> 4);
                }
              }
              uVar32 = uVar51 + 1;
              lVar43 = (__int64)((int)uVar32 >> 0x1f) + (unsigned __int64)(0x24 < uVar32);
              if (lVar43 != 0) {
                uVar32 = uVar51 - 0x24;
              }
              bVar17 = false;
              iVar20 = (int)uVar32;
              if (iVar20 != 0) {
                if (iVar20 < 0x23) {
                  uVar24 = *(unsigned int *)((int)((uVar32 & 0xffffffff) << 2) + param_2[3]);
                  uVar32 = (unsigned __int64)(unsigned int)((int)uVar24 >> 4) & 0xf;
                  uVar51 = uVar32 + ((unsigned __int64)uVar24 & 0xf);
                  if (uVar51 == 0) {
LAB_830b69e4:
                    uVar52 = 0;
                  }
                  else {
                    uVar29 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
                    lVar36 = 0;
                    uVar52 = uVar29 + 0x10;
                    if ((0x20 < uVar51) || (uVar51 == 0)) goto LAB_830b69e4;
                    if ((uVar52 & 0xffffffff) < uVar51) {
                      do {
                        if ((uVar52 & 0xffffffff) == 0) break;
                        uVar51 = uVar51 - uVar52;
                        *(int *)(puVar11 + 1) = (int)(uVar29 - uVar52);
                        lVar36 = (unsigned __int64)
                                 (unsigned int)((int)(*puVar11 >> (0x40 - uVar52 & 0x7f)) <<
                                       ((unsigned int)uVar51 & 0x3f)) + lVar36;
                        *puVar11 = *puVar11 << (uVar52 & 0x7f);
                        if ((__int64)(uVar29 - uVar52) < 0) {
                          fn_82C4E5E8(puVar11);
                        }
                        uVar29 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
                        uVar52 = uVar29 + 0x10;
                      } while ((uVar52 & 0xffffffff) < (uVar51 & 0xffffffff));
                    }
                    *(int *)(puVar11 + 1) = (int)(uVar29 - uVar51);
                    uVar52 = (*puVar11 >> (0x40 - uVar51 & 0x7f) & 0xffffffff) + lVar36;
                    *puVar11 = *puVar11 << (uVar51 & 0x7f);
                    if ((__int64)(uVar29 - uVar51) < 0) {
                      fn_82C4E5E8(puVar11);
                    }
                  }
                  uVar39 = (int)uVar52 >> (int)uVar32;
                  uVar52 = uVar52 & (unsigned __int64)(unsigned int)((int)uVar24 >> 0x18) & 0xff;
                  uVar32 = (unsigned __int64)uVar39 & 1;
                  uVar51 = uVar52 & 1;
                  uVar32 = (((__int64)((int)uVar52 >> 1) +
                             ((unsigned __int64)(unsigned int)((int)uVar24 >> 0x10) & 0xff) ^ -uVar51) + uVar51 &
                           0xffff) << 0x10 |
                           ((__int64)((int)uVar39 >> 1) +
                            ((unsigned __int64)(unsigned int)((int)uVar24 >> 8) & 0xff) ^ -uVar32) + uVar32 &
                           0xffffffff0000ffff;
                }
                else if (iVar20 == 0x24) {
                  bVar17 = true;
                  uVar32 = 0;
                }
                else {
                  lVar48 = 0;
                  lVar36 = (unsigned __int64)*(unsigned short *)((int)param_2 + 0x46) -
                           (unsigned __int64)*(unsigned char *)((int)param_2 + 0x1e);
                  uVar32 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
                  lVar49 = (unsigned __int64)*(unsigned short *)(param_2 + 0x12) -
                           (unsigned __int64)*(unsigned char *)((int)param_2 + 0x1e);
                  uVar51 = uVar32 + 0x10;
                  uVar29 = lVar49 + lVar36;
                  if ((uVar29 & 0xffffffff) < 0x21) {
                    if ((uVar29 & 0xffffffff) == 0) {
                      uVar51 = 0;
                    }
                    else {
                      if ((uVar51 & 0xffffffff) < (uVar29 & 0xffffffff)) {
                        do {
                          if ((uVar51 & 0xffffffff) == 0) break;
                          uVar29 = uVar29 - uVar51;
                          *(int *)(puVar11 + 1) = (int)(uVar32 - uVar51);
                          lVar48 = (unsigned __int64)
                                   (unsigned int)((int)(*puVar11 >> (0x40 - uVar51 & 0x7f)) <<
                                         ((unsigned int)uVar29 & 0x3f)) + lVar48;
                          *puVar11 = *puVar11 << (uVar51 & 0x7f);
                          if ((__int64)(uVar32 - uVar51) < 0) {
                            fn_82C4E5E8(puVar11);
                          }
                          uVar32 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
                          uVar51 = uVar32 + 0x10;
                        } while ((uVar51 & 0xffffffff) < (uVar29 & 0xffffffff));
                      }
                      *(int *)(puVar11 + 1) = (int)(uVar32 - uVar29);
                      uVar51 = (*puVar11 >> (0x40 - uVar29 & 0x7f) & 0xffffffff) + lVar48;
                      *puVar11 = *puVar11 << (uVar29 & 0x7f);
                      if ((__int64)(uVar32 - uVar29) < 0) {
                        fn_82C4E5E8(puVar11);
                      }
                    }
                  }
                  else {
                    uVar51 = 0;
                  }
                  uVar24 = (unsigned int)lVar49;
                  uVar32 = ((unsigned __int64)(unsigned int)(1 << (uVar24 & 0x3f)) - 1 & uVar51 & 0xffff) << 0x10 |
                           (unsigned __int64)(unsigned int)(1 << ((unsigned int)lVar36 & 0x3f)) - 1 &
                           (__int64)((int)uVar51 >> (uVar24 & 0x3f)) & 0xffffffff0000ffff;
                }
              }
              uVar32 = uVar32 & 0xffffffff;
              uVar24 = (unsigned int)lVar43 & 1;
            }
            if ((*puVar41 & 0xe0) == 0) {
              if (bVar17) {
                uVar39 = *puVar41 & 0xffffff1f | 0x60;
LAB_830b6c20:
                *puVar41 = uVar39;
              }
              else {
                plVar12 = (__int64 *)*param_2;
                lVar43 = *plVar12;
                uVar39 = *(unsigned int *)(plVar12 + 1);
                *plVar12 = lVar43 << 1;
                *(int *)(plVar12 + 1) = (int)((unsigned __int64)uVar39 - 1);
                if ((__int64)((unsigned __int64)uVar39 - 1) < 0) {
                  fn_82C4E5E8();
                }
                if (lVar43 < 0) {
                  plVar12 = (__int64 *)*param_2;
                  lVar43 = *plVar12;
                  uVar39 = *(unsigned int *)(plVar12 + 1);
                  *plVar12 = lVar43 << 1;
                  *(int *)(plVar12 + 1) = (int)((unsigned __int64)uVar39 - 1);
                  if ((__int64)((unsigned __int64)uVar39 - 1) < 0) {
                    fn_82C4E5E8();
                  }
                  if (lVar43 < 0) {
                    uVar39 = *puVar41 & 0xffffff1f | 0x40;
                    goto LAB_830b6c20;
                  }
                  *puVar41 = (param_2[0x1aa] & 7U) << 5 | *puVar41 & 0xffffff1f;
                }
                else {
                  *puVar41 = (param_2[0x1a9] & 7U) << 5 | *puVar41 & 0xffffff1f;
                }
              }
            }
          }
          uVar39 = *puVar41;
          if ((uVar39 & 0x80000000) == 0) {
            if (uVar24 == 0) {
              *puVar41 = uVar39 | 0x40000000;
              if (*(char *)((int)param_2 + 0x1b) == '\0') {
LAB_830b6f20:
                if (bVar17) {
                  puVar11 = (unsigned __int64 *)*param_2;
                  uVar51 = *puVar11;
                  uVar24 = *(unsigned int *)(puVar11 + 1);
                  *puVar11 = uVar51 << 1;
                  *(int *)(puVar11 + 1) = (int)((unsigned __int64)uVar24 - 1);
                  if ((__int64)((unsigned __int64)uVar24 - 1) < 0) {
                    fn_82C4E5E8();
                  }
                  *puVar41 = (unsigned int)((uVar51 >> 0x3f) << 3) | *puVar41 & 0xffffffe7;
                }
              }
              else if (bVar17) {
                if (*(unsigned char *)((int)param_2 + 0x4dd) == 0) {
                  puVar11 = (unsigned __int64 *)*param_2;
                  lVar43 = 0;
                  uVar51 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
                  uVar29 = uVar51 + 0x10;
                  if (*(char *)((int)param_2 + 0x4e2) == '\0') {
                    uVar52 = 3;
                    if ((uVar29 & 0xffffffff) < 3) {
                      do {
                        if ((uVar29 & 0xffffffff) == 0) break;
                        uVar52 = uVar52 - uVar29;
                        *(int *)(puVar11 + 1) = (int)(uVar51 - uVar29);
                        lVar43 = (unsigned __int64)
                                 (unsigned int)((int)(*puVar11 >> (0x40 - uVar29 & 0x7f)) <<
                                       ((unsigned int)uVar52 & 0x3f)) + lVar43;
                        *puVar11 = *puVar11 << (uVar29 & 0x7f);
                        if ((__int64)(uVar51 - uVar29) < 0) {
                          fn_82C4E5E8(puVar11);
                        }
                        uVar51 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
                        uVar29 = uVar51 + 0x10;
                      } while ((uVar29 & 0xffffffff) < (uVar52 & 0xffffffff));
                    }
                    *(int *)(puVar11 + 1) = (int)(uVar51 - uVar52);
                    lVar43 = (*puVar11 >> (0x40 - uVar52 & 0x7f) & 0xffffffff) + lVar43;
                    *puVar11 = *puVar11 << (uVar52 & 0x7f);
                    if ((__int64)(uVar51 - uVar52) < 0) {
                      fn_82C4E5E8(puVar11);
                    }
                    if ((int)lVar43 == 7) {
                      puVar11 = (unsigned __int64 *)*param_2;
                      uVar52 = 5;
                      lVar43 = 0;
                      uVar29 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
                      uVar51 = uVar29 + 0x10;
                      if ((uVar51 & 0xffffffff) < 5) {
                        do {
                          if ((uVar51 & 0xffffffff) == 0) break;
                          uVar52 = uVar52 - uVar51;
                          *(int *)(puVar11 + 1) = (int)(uVar29 - uVar51);
                          lVar43 = (unsigned __int64)
                                   (unsigned int)((int)(*puVar11 >> (0x40 - uVar51 & 0x7f)) <<
                                         ((unsigned int)uVar52 & 0x3f)) + lVar43;
                          *puVar11 = *puVar11 << (uVar51 & 0x7f);
                          if ((__int64)(uVar29 - uVar51) < 0) {
                            fn_82C4E5E8(puVar11);
                          }
                          uVar29 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
                          uVar51 = uVar29 + 0x10;
                        } while ((uVar51 & 0xffffffff) < (uVar52 & 0xffffffff));
                      }
                      *(int *)(puVar11 + 1) = (int)(uVar29 - uVar52);
                      uVar51 = (*puVar11 >> (0x40 - uVar52 & 0x7f) & 0xffffffff) + lVar43;
                      *puVar11 = *puVar11 << (uVar52 & 0x7f);
                      if ((__int64)(uVar29 - uVar52) < 0) {
                        fn_82C4E5E8(puVar11);
                      }
                    }
                    else {
                      uVar51 = (unsigned __int64)*(unsigned char *)(param_2 + 0x137) + lVar43;
                    }
                    *(char *)(puVar41 + 1) = (char)((uVar51 & 0xffffffff) << 1) + -1;
                  }
                  else {
                    uVar52 = 1;
                    if ((uVar29 & 0xffffffff) == 0) {
                      do {
                        if ((uVar29 & 0xffffffff) == 0) break;
                        uVar52 = uVar52 - uVar29;
                        *(int *)(puVar11 + 1) = (int)(uVar51 - uVar29);
                        lVar43 = (unsigned __int64)
                                 (unsigned int)((int)(*puVar11 >> (0x40 - uVar29 & 0x7f)) <<
                                       ((unsigned int)uVar52 & 0x3f)) + lVar43;
                        *puVar11 = *puVar11 << (uVar29 & 0x7f);
                        if ((__int64)(uVar51 - uVar29) < 0) {
                          fn_82C4E5E8(puVar11);
                        }
                        uVar51 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
                        uVar29 = uVar51 + 0x10;
                      } while ((uVar29 & 0xffffffff) < (uVar52 & 0xffffffff));
                    }
                    uVar29 = *puVar11;
                    *(int *)(puVar11 + 1) = (int)(uVar51 - uVar52);
                    *puVar11 = uVar29 << (uVar52 & 0x7f);
                    if ((__int64)(uVar51 - uVar52) < 0) {
                      fn_82C4E5E8(puVar11);
                    }
                    if (((uVar29 >> (0x40 - uVar52 & 0x7f) & 0xffffffff) + lVar43 & 0xffffffff) == 0
                       ) {
                      *(char *)(puVar41 + 1) =
                           *(char *)(param_2 + 0x137) * '\x02' + *(char *)((int)param_2 + 0x4e1) +
                           -1;
                    }
                    else {
                      *(char *)(puVar41 + 1) = *(char *)((int)param_2 + 0x4de) * '\x02' + -1;
                    }
                  }
                }
                else if ((uVar39 >> 0xc & 0xf & (unsigned int)*(unsigned char *)((int)param_2 + 0x4dd)) == 0) {
                  *(char *)(puVar41 + 1) =
                       *(char *)(param_2 + 0x137) * '\x02' + *(char *)((int)param_2 + 0x4e1) + -1;
                }
                else {
                  *(char *)(puVar41 + 1) = *(char *)((int)param_2 + 0x4de) * '\x02' + -1;
                }
                if ((*(unsigned char *)(puVar41 + 1) != 0) && (*(unsigned char *)(puVar41 + 1) < 0x3f))
                goto LAB_830b6f20;
                goto LAB_830b77d0;
              }
              goto LAB_830b79ec;
            }
            if ((uVar39 & 0xe0) == 0x40) {
              puVar11 = (unsigned __int64 *)*param_2;
              iVar20 = *(int *)param_2[0x54];
              sVar28 = *(short *)((int)((*puVar11 >> 0x36) << 1) + iVar20);
              uVar51 = (unsigned __int64)sVar28;
              if (sVar28 < 0) {
                fn_82C4E470(puVar11,10);
                do {
                  uVar34 = *puVar11;
                  fn_82C4E470(puVar11,1);
                  sVar28 = *(short *)((int)(((uVar51 - ((__int64)uVar34 >> 0x3f)) + 0x8000 &
                                            0xffffffff) << 1) + iVar20);
                  uVar51 = (unsigned __int64)sVar28;
                } while (sVar28 < 0);
              }
              else {
                iVar20 = *(int *)(puVar11 + 1);
                iVar23 = (int)(uVar51 & 0xf);
                *puVar11 = *puVar11 << (uVar51 & 0xf);
                *(int *)(puVar11 + 1) = iVar20 - iVar23;
                if (iVar20 < iVar23) {
                  do {
                    pbVar15 = *(unsigned char **)((int)puVar11 + 0xc);
                    if (pbVar15 < (unsigned char *)(*(int *)(puVar11 + 2) - 4U)) {
                      bVar2 = *pbVar15;
                      bVar8 = pbVar15[1];
                      bVar3 = pbVar15[2];
                      bVar4 = pbVar15[4];
                      bVar5 = pbVar15[3];
                      bVar6 = pbVar15[5];
                      iVar20 = *(int *)(puVar11 + 1);
                      *(unsigned char **)((int)puVar11 + 0xc) = pbVar15 + 6;
                      *(int *)(puVar11 + 1) = iVar20 + 0x30;
                      *puVar11 = ((((((unsigned __int64)bVar2 * 0x100 + (unsigned __int64)bVar8) * 0x100 +
                                    (unsigned __int64)bVar3) * 0x100 + (unsigned __int64)bVar5) * 0x100 +
                                  (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar6 <<
                                 ((__int64)-iVar20 & 0x7fU)) + *puVar11;
                      goto LAB_830b7050;
                    }
                    iVar20 = fn_82C4E3B0(puVar11);
                  } while (iVar20 == 1);
                  uVar51 = (unsigned __int64)((int)sVar28 >> 4);
                }
                else {
LAB_830b7050:
                  uVar51 = (unsigned __int64)((int)sVar28 >> 4);
                }
              }
              uVar34 = uVar51 + 1;
              uVar29 = (__int64)((int)uVar34 >> 0x1f) + (unsigned __int64)(0x24 < uVar34);
              if (uVar29 != 0) {
                uVar34 = uVar51 - 0x24;
              }
              bVar18 = false;
              iVar20 = (int)uVar34;
              if (iVar20 != 0) {
                if (iVar20 < 0x23) {
                  uVar24 = *(unsigned int *)((int)((uVar34 & 0xffffffff) << 2) + param_2[3]);
                  uVar34 = (unsigned __int64)(unsigned int)((int)uVar24 >> 4) & 0xf;
                  uVar51 = uVar34 + ((unsigned __int64)uVar24 & 0xf);
                  if (uVar51 == 0) {
LAB_830b71c0:
                    uVar35 = 0;
                  }
                  else {
                    uVar52 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
                    lVar43 = 0;
                    uVar35 = uVar52 + 0x10;
                    if ((0x20 < uVar51) || (uVar51 == 0)) goto LAB_830b71c0;
                    if ((uVar35 & 0xffffffff) < uVar51) {
                      do {
                        if ((uVar35 & 0xffffffff) == 0) break;
                        uVar51 = uVar51 - uVar35;
                        *(int *)(puVar11 + 1) = (int)(uVar52 - uVar35);
                        lVar43 = (unsigned __int64)
                                 (unsigned int)((int)(*puVar11 >> (0x40 - uVar35 & 0x7f)) <<
                                       ((unsigned int)uVar51 & 0x3f)) + lVar43;
                        *puVar11 = *puVar11 << (uVar35 & 0x7f);
                        if ((__int64)(uVar52 - uVar35) < 0) {
                          fn_82C4E5E8(puVar11);
                        }
                        uVar52 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
                        uVar35 = uVar52 + 0x10;
                      } while ((uVar35 & 0xffffffff) < (uVar51 & 0xffffffff));
                    }
                    *(int *)(puVar11 + 1) = (int)(uVar52 - uVar51);
                    uVar35 = (*puVar11 >> (0x40 - uVar51 & 0x7f) & 0xffffffff) + lVar43;
                    *puVar11 = *puVar11 << (uVar51 & 0x7f);
                    if ((__int64)(uVar52 - uVar51) < 0) {
                      fn_82C4E5E8(puVar11);
                    }
                  }
                  uVar39 = (int)uVar35 >> (int)uVar34;
                  uVar35 = uVar35 & (unsigned __int64)(unsigned int)((int)uVar24 >> 0x18) & 0xff;
                  uVar34 = (unsigned __int64)uVar39 & 1;
                  uVar51 = uVar35 & 1;
                  uVar34 = (((__int64)((int)uVar35 >> 1) +
                             ((unsigned __int64)(unsigned int)((int)uVar24 >> 0x10) & 0xff) ^ -uVar51) + uVar51 &
                           0xffff) << 0x10 |
                           ((__int64)((int)uVar39 >> 1) +
                            ((unsigned __int64)(unsigned int)((int)uVar24 >> 8) & 0xff) ^ -uVar34) + uVar34 &
                           0xffffffff0000ffff;
                }
                else if (iVar20 == 0x24) {
                  bVar18 = true;
                  uVar34 = 0;
                }
                else {
                  lVar49 = 0;
                  lVar43 = (unsigned __int64)*(unsigned short *)((int)param_2 + 0x46) -
                           (unsigned __int64)*(unsigned char *)((int)param_2 + 0x1e);
                  uVar34 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
                  lVar36 = (unsigned __int64)*(unsigned short *)(param_2 + 0x12) -
                           (unsigned __int64)*(unsigned char *)((int)param_2 + 0x1e);
                  uVar51 = uVar34 + 0x10;
                  uVar52 = lVar36 + lVar43;
                  if ((uVar52 & 0xffffffff) < 0x21) {
                    if ((uVar52 & 0xffffffff) == 0) {
                      uVar51 = 0;
                    }
                    else {
                      if ((uVar51 & 0xffffffff) < (uVar52 & 0xffffffff)) {
                        do {
                          if ((uVar51 & 0xffffffff) == 0) break;
                          uVar52 = uVar52 - uVar51;
                          *(int *)(puVar11 + 1) = (int)(uVar34 - uVar51);
                          lVar49 = (unsigned __int64)
                                   (unsigned int)((int)(*puVar11 >> (0x40 - uVar51 & 0x7f)) <<
                                         ((unsigned int)uVar52 & 0x3f)) + lVar49;
                          *puVar11 = *puVar11 << (uVar51 & 0x7f);
                          if ((__int64)(uVar34 - uVar51) < 0) {
                            fn_82C4E5E8(puVar11);
                          }
                          uVar34 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
                          uVar51 = uVar34 + 0x10;
                        } while ((uVar51 & 0xffffffff) < (uVar52 & 0xffffffff));
                      }
                      *(int *)(puVar11 + 1) = (int)(uVar34 - uVar52);
                      uVar51 = (*puVar11 >> (0x40 - uVar52 & 0x7f) & 0xffffffff) + lVar49;
                      *puVar11 = *puVar11 << (uVar52 & 0x7f);
                      if ((__int64)(uVar34 - uVar52) < 0) {
                        fn_82C4E5E8(puVar11);
                      }
                    }
                  }
                  else {
                    uVar51 = 0;
                  }
                  uVar24 = (unsigned int)lVar36;
                  uVar34 = ((unsigned __int64)(unsigned int)(1 << (uVar24 & 0x3f)) - 1 & uVar51 & 0xffff) << 0x10 |
                           (__int64)((int)uVar51 >> (uVar24 & 0x3f)) &
                           (unsigned __int64)(unsigned int)(1 << ((unsigned int)lVar43 & 0x3f)) - 1 & 0xffffffff0000ffff;
                }
              }
              uVar34 = uVar34 & 0xffffffff;
              if (!bVar18 && !bVar17) {
                if ((uVar29 & 1) == 0) {
                  *puVar41 = *puVar41 | 0x40000000;
                  goto LAB_830b79ec;
                }
                goto LAB_830b736c;
              }
            }
            else {
LAB_830b736c:
              cVar1 = *(char *)(param_2 + 7);
              if ((*(char *)((int)param_2 + 0x1d) == '\0') || (bVar17)) {
                bVar18 = false;
                if (bVar17) {
                  puVar11 = (unsigned __int64 *)*param_2;
                  uVar51 = *puVar11;
                  uVar24 = *(unsigned int *)(puVar11 + 1);
                  *puVar11 = uVar51 << 1;
                  *(int *)(puVar11 + 1) = (int)((unsigned __int64)uVar24 - 1);
                  if ((__int64)((unsigned __int64)uVar24 - 1) < 0) {
                    fn_82C4E5E8();
                  }
                  *puVar41 = (unsigned int)((uVar51 >> 0x3f) << 3) | *puVar41 & 0xffffffe7;
                }
              }
              else {
                bVar18 = true;
              }
              puVar11 = (unsigned __int64 *)*param_2;
              iVar20 = *(int *)param_2[0x59];
              sVar28 = *(short *)((int)((*puVar11 >> 0x38) << 1) + iVar20);
              uVar51 = (unsigned __int64)sVar28;
              if (sVar28 < 0) {
                fn_82C4E470(puVar11,8);
                do {
                  uVar29 = *puVar11;
                  fn_82C4E470(puVar11,1);
                  sVar28 = *(short *)((int)(((uVar51 - ((__int64)uVar29 >> 0x3f)) + 0x8000 &
                                            0xffffffff) << 1) + iVar20);
                  uVar51 = (unsigned __int64)sVar28;
                } while (sVar28 < 0);
              }
              else {
                iVar20 = *(int *)(puVar11 + 1);
                iVar23 = (int)(uVar51 & 0xf);
                *puVar11 = *puVar11 << (uVar51 & 0xf);
                *(int *)(puVar11 + 1) = iVar20 - iVar23;
                if (iVar20 < iVar23) {
                  do {
                    pbVar15 = *(unsigned char **)((int)puVar11 + 0xc);
                    if (pbVar15 < (unsigned char *)(*(int *)(puVar11 + 2) - 4U)) {
                      bVar2 = *pbVar15;
                      bVar8 = pbVar15[1];
                      bVar3 = pbVar15[2];
                      bVar4 = pbVar15[4];
                      bVar5 = pbVar15[3];
                      bVar6 = pbVar15[5];
                      iVar20 = *(int *)(puVar11 + 1);
                      *(unsigned char **)((int)puVar11 + 0xc) = pbVar15 + 6;
                      *(int *)(puVar11 + 1) = iVar20 + 0x30;
                      *puVar11 = ((((((unsigned __int64)bVar8 + (unsigned __int64)bVar2 * 0x100) * 0x100 +
                                    (unsigned __int64)bVar3) * 0x100 + (unsigned __int64)bVar5) * 0x100 +
                                  (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar6 <<
                                 ((__int64)-iVar20 & 0x7fU)) + *puVar11;
                      goto LAB_830b74b0;
                    }
                    iVar20 = fn_82C4E3B0(puVar11);
                  } while (iVar20 == 1);
                  uVar51 = (unsigned __int64)((int)sVar28 >> 4);
                }
                else {
LAB_830b74b0:
                  uVar51 = (unsigned __int64)((int)sVar28 >> 4);
                }
              }
              puVar11 = (unsigned __int64 *)*param_2;
              uVar42 = (unsigned char)uVar51;
              if (*(int *)((int)puVar11 + 0x14) == 0) {
                if (*(char *)((int)param_2 + 0x1b) != '\0') {
                  if (*(unsigned char *)((int)param_2 + 0x4dd) == 0) {
                    lVar43 = 0;
                    uVar51 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
                    uVar29 = uVar51 + 0x10;
                    if (*(char *)((int)param_2 + 0x4e2) == '\0') {
                      uVar52 = 3;
                      if ((uVar29 & 0xffffffff) < 3) {
                        do {
                          if ((uVar29 & 0xffffffff) == 0) break;
                          uVar52 = uVar52 - uVar29;
                          *(int *)(puVar11 + 1) = (int)(uVar51 - uVar29);
                          lVar43 = (unsigned __int64)
                                   (unsigned int)((int)(*puVar11 >> (0x40 - uVar29 & 0x7f)) <<
                                         ((unsigned int)uVar52 & 0x3f)) + lVar43;
                          *puVar11 = *puVar11 << (uVar29 & 0x7f);
                          if ((__int64)(uVar51 - uVar29) < 0) {
                            fn_82C4E5E8(puVar11);
                          }
                          uVar51 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
                          uVar29 = uVar51 + 0x10;
                        } while ((uVar29 & 0xffffffff) < (uVar52 & 0xffffffff));
                      }
                      *(int *)(puVar11 + 1) = (int)(uVar51 - uVar52);
                      lVar43 = (*puVar11 >> (0x40 - uVar52 & 0x7f) & 0xffffffff) + lVar43;
                      *puVar11 = *puVar11 << (uVar52 & 0x7f);
                      if ((__int64)(uVar51 - uVar52) < 0) {
                        fn_82C4E5E8(puVar11);
                      }
                      if ((int)lVar43 == 7) {
                        puVar11 = (unsigned __int64 *)*param_2;
                        uVar52 = 5;
                        lVar43 = 0;
                        uVar29 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
                        uVar51 = uVar29 + 0x10;
                        if ((uVar51 & 0xffffffff) < 5) {
                          do {
                            if ((uVar51 & 0xffffffff) == 0) break;
                            uVar52 = uVar52 - uVar51;
                            *(int *)(puVar11 + 1) = (int)(uVar29 - uVar51);
                            lVar43 = (unsigned __int64)
                                     (unsigned int)((int)(*puVar11 >> (0x40 - uVar51 & 0x7f)) <<
                                           ((unsigned int)uVar52 & 0x3f)) + lVar43;
                            *puVar11 = *puVar11 << (uVar51 & 0x7f);
                            if ((__int64)(uVar29 - uVar51) < 0) {
                              fn_82C4E5E8(puVar11);
                            }
                            uVar29 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
                            uVar51 = uVar29 + 0x10;
                          } while ((uVar51 & 0xffffffff) < (uVar52 & 0xffffffff));
                        }
                        *(int *)(puVar11 + 1) = (int)(uVar29 - uVar52);
                        uVar51 = (*puVar11 >> (0x40 - uVar52 & 0x7f) & 0xffffffff) + lVar43;
                        *puVar11 = *puVar11 << (uVar52 & 0x7f);
                        if ((__int64)(uVar29 - uVar52) < 0) {
                          fn_82C4E5E8(puVar11);
                        }
                      }
                      else {
                        uVar51 = (unsigned __int64)*(unsigned char *)(param_2 + 0x137) + lVar43;
                      }
                      *(char *)(puVar41 + 1) = (char)((uVar51 & 0xffffffff) << 1) + -1;
                    }
                    else {
                      uVar52 = 1;
                      if ((uVar29 & 0xffffffff) == 0) {
                        do {
                          if ((uVar29 & 0xffffffff) == 0) break;
                          uVar52 = uVar52 - uVar29;
                          *(int *)(puVar11 + 1) = (int)(uVar51 - uVar29);
                          lVar43 = (unsigned __int64)
                                   (unsigned int)((int)(*puVar11 >> (0x40 - uVar29 & 0x7f)) <<
                                         ((unsigned int)uVar52 & 0x3f)) + lVar43;
                          *puVar11 = *puVar11 << (uVar29 & 0x7f);
                          if ((__int64)(uVar51 - uVar29) < 0) {
                            fn_82C4E5E8(puVar11);
                          }
                          uVar51 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
                          uVar29 = uVar51 + 0x10;
                        } while ((uVar29 & 0xffffffff) < (uVar52 & 0xffffffff));
                      }
                      uVar29 = *puVar11;
                      *(int *)(puVar11 + 1) = (int)(uVar51 - uVar52);
                      *puVar11 = uVar29 << (uVar52 & 0x7f);
                      if ((__int64)(uVar51 - uVar52) < 0) {
                        fn_82C4E5E8(puVar11);
                      }
                      if (((uVar29 >> (0x40 - uVar52 & 0x7f) & 0xffffffff) + lVar43 & 0xffffffff) ==
                          0) {
                        *(char *)(puVar41 + 1) =
                             *(char *)(param_2 + 0x137) * '\x02' + *(char *)((int)param_2 + 0x4e1) +
                             -1;
                      }
                      else {
                        *(char *)(puVar41 + 1) = *(char *)((int)param_2 + 0x4de) * '\x02' + -1;
                      }
                    }
                  }
                  else if ((*puVar41 >> 0xc & 0xf & (unsigned int)*(unsigned char *)((int)param_2 + 0x4dd)) == 0) {
                    *(char *)(puVar41 + 1) =
                         *(char *)(param_2 + 0x137) * '\x02' + *(char *)((int)param_2 + 0x4e1) + -1;
                  }
                  else {
                    *(char *)(puVar41 + 1) = *(char *)((int)param_2 + 0x4de) * '\x02' + -1;
                  }
                  if ((*(unsigned char *)(puVar41 + 1) == 0) || (0x3e < *(unsigned char *)(puVar41 + 1)))
                  goto LAB_830b77d0;
                }
                *puVar41 = *puVar41 & 0xbfffffff;
                if (cVar1 != '\0') {
                  plVar12 = (__int64 *)*param_2;
                  lVar36 = *plVar12;
                  uVar24 = *(unsigned int *)(plVar12 + 1);
                  lVar43 = -(lVar36 >> 0x3f);
                  *plVar12 = lVar36 << 1;
                  *(int *)(plVar12 + 1) = (int)((unsigned __int64)uVar24 - 1);
                  if ((__int64)((unsigned __int64)uVar24 - 1) < 0) {
                    fn_82C4E5E8();
                  }
                  if (lVar36 < 0) {
                    plVar12 = (__int64 *)*param_2;
                    lVar36 = *plVar12;
                    uVar24 = *(unsigned int *)(plVar12 + 1);
                    *plVar12 = lVar36 << 1;
                    *(int *)(plVar12 + 1) = (int)((unsigned __int64)uVar24 - 1);
                    if ((__int64)((unsigned __int64)uVar24 - 1) < 0) {
                      fn_82C4E5E8();
                    }
                    lVar43 = lVar43 - (lVar36 >> 0x3f);
                  }
                  *puVar41 = (unsigned int)(lVar43 << 0x16) | *puVar41 & 0xff3fffff;
                }
                if (!bVar18) {
LAB_830b79ec:
                  *(unsigned char *)((int)puVar41 + 5) = uVar42;
                  goto LAB_830b79f0;
                }
                puVar11 = (unsigned __int64 *)*param_2;
                iVar20 = *(int *)param_2[0x5a];
                sVar28 = *(short *)((int)((*puVar11 >> 0x38) << 1) + iVar20);
                uVar51 = (unsigned __int64)sVar28;
                if (sVar28 < 0) {
                  fn_82C4E470(puVar11,8);
                  do {
                    uVar29 = *puVar11;
                    fn_82C4E470(puVar11,1);
                    sVar28 = *(short *)((int)(((uVar51 - ((__int64)uVar29 >> 0x3f)) + 0x8000 &
                                              0xffffffff) << 1) + iVar20);
                    uVar51 = (unsigned __int64)sVar28;
                  } while (sVar28 < 0);
                }
                else {
                  iVar20 = *(int *)(puVar11 + 1);
                  iVar23 = (int)(uVar51 & 0xf);
                  *puVar11 = *puVar11 << (uVar51 & 0xf);
                  *(int *)(puVar11 + 1) = iVar20 - iVar23;
                  if (iVar20 < iVar23) {
                    do {
                      pbVar15 = *(unsigned char **)((int)puVar11 + 0xc);
                      if (pbVar15 < (unsigned char *)(*(int *)(puVar11 + 2) - 4U)) {
                        bVar2 = *pbVar15;
                        bVar8 = pbVar15[1];
                        bVar3 = pbVar15[2];
                        bVar4 = pbVar15[4];
                        bVar5 = pbVar15[3];
                        bVar6 = pbVar15[5];
                        iVar20 = *(int *)(puVar11 + 1);
                        *(unsigned char **)((int)puVar11 + 0xc) = pbVar15 + 6;
                        *(int *)(puVar11 + 1) = iVar20 + 0x30;
                        *puVar11 = ((((((unsigned __int64)bVar8 + (unsigned __int64)bVar2 * 0x100) * 0x100 +
                                      (unsigned __int64)bVar3) * 0x100 + (unsigned __int64)bVar5) * 0x100 +
                                    (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar6 <<
                                   ((__int64)-iVar20 & 0x7fU)) + *puVar11;
                        goto LAB_830b7944;
                      }
                      iVar20 = fn_82C4E3B0(puVar11);
                    } while (iVar20 == 1);
                    uVar51 = (unsigned __int64)((int)sVar28 >> 4);
                  }
                  else {
LAB_830b7944:
                    uVar51 = (unsigned __int64)((int)sVar28 >> 4);
                  }
                }
                if (*(int *)(*param_2 + 0x14) == 0) {
                  uVar24 = *puVar41;
                  iVar20 = (int)((uVar51 & 0xffffffff) << 2);
                  uVar39 = (unsigned int)((((~uVar51 & 0xffffffff) >> 0x1f) + (unsigned __int64)(7 < uVar51) & 1)
                                 << 0x1c);
                  *puVar41 = uVar39 | uVar24 & 0xefffffff;
                  *puVar41 = (*(unsigned int *)(&lbl_820FDCA8 + iVar20) & 7) << 0x18 |
                             uVar39 | uVar24 & 0xe8ffffff;
                  *puVar41 = (*(unsigned int *)(&lbl_820FDCE8 + iVar20) & 3) << 0x14 | *puVar41 & 0xf7cfffff
                  ;
                  goto LAB_830b79ec;
                }
                uVar32 = 1;
                goto LAB_830b7a0c;
              }
            }
LAB_830b77d0:
            uVar32 = 0x8000000000000001;
          }
          else {
            *(unsigned char *)((int)puVar41 + 5) = 0;
LAB_830b79f0:
            if (bVar17) {
              uVar32 = 0x400000004000;
            }
            else {
              uVar32 = uVar34 << 0x20 | uVar32;
            }
          }
LAB_830b7a0c:
          if ((((*puVar41 & 0xe0) != 0x60) && (*(int *)(param_1 + 0xea8) == 0)) ||
             ((uVar32 & 0xc000000000000000) == 0x8000000000000000)) {
            return 1;
          }
          *(int *)(param_2[0x1be] + stack_pair_f0.second * 4) = (int)uVar32;
          *(int *)(param_2[0x1bf] + stack_pair_f0.second * 4) = (int)(uVar32 >> 0x20);
          if (uVar32 == 0x400000004000) {
            bVar2 = *(unsigned char *)(puVar41 + 1);
            bStack_100 = *(unsigned char *)((int)puVar41 + 5);
            iVar20 = param_2[0x61];
            uVar24 = -(stack_pair_f0.first & 1) & (unsigned int)*(unsigned short *)((int)param_2 + 0x32);
            iVar23 = piStack00000024[1] * 8 + param_2[0x148];
            if (*(char *)(param_2 + 7) == '\0') {
              piStack_e4 = param_2 + 0x65;
              piStack_e8 = param_2 + 0x68;
            }
            else {
              uVar39 = *puVar41 >> 0x14 & 0xc;
              piStack_e4 = (int *)(param_2[99] + uVar39);
              piStack_e8 = (int *)(param_2[100] + uVar39);
            }
            uVar39 = 0;
            *(unsigned int *)piStack00000024[8] = stack_pair_f0.first << 0x10 | uStack_f8;
            piStack00000024[8] = piStack00000024[8] + 4;
            uVar9 = *(unsigned short *)((int)param_2 + 0x32);
            iVar38 = *(int *)(param_2[0x146] + stack_pair_f0.first * 4);
            do {
              iVar26 = (int)uVar39 >> 2;
              if (iVar26 == 0) {
                iVar25 = param_2[0x57];
                piVar44 = (int *)param_2[0x132];
                sVar28 = *(short *)((((stack_pair_f0.first & 1) << 1 | (int)uVar39 >> 1) + 0xb8) * 2 +
                                   (int)param_2);
                psVar50 = (short *)(((unsigned int)*(unsigned short *)((uVar39 + 0x12) * 2 + (int)param_2) +
                                    (uVar24 + uStack_f8) * 2) * 0x20 + param_2[0x6c]);
                piVar47 = piStack_e8;
              }
              else {
                iVar25 = param_2[0x58];
                piVar44 = (int *)param_2[0x133];
                sVar28 = *(short *)(((stack_pair_f0.first & 1) + 0xb6) * 2 + (int)param_2);
                psVar50 = (short *)(param_2[uVar39 + 0x69] + (((int)uVar24 >> 1) + uStack_f8) * 0x20
                                   );
                piVar47 = piStack_e4;
              }
              iVar22 = *(int *)((unsigned int)bVar2 * 0x14 + iVar20 + 0x10);
              lVar43 = (unsigned __int64)(unsigned int)piStack00000024[7] - 0x80;
              piStack00000024[7] = (int)(short *)lVar43;
              dataCacheBlockClearToZero(lVar43);
              sVar31 = 0;
              puVar11 = (unsigned __int64 *)*param_2;
              if (piVar44 == (int *)0x0) {
                uVar32 = 0;
                *(unsigned int *)((int)puVar11 + 0x14) = 3;
              }
              else {
                iVar21 = *piVar44;
                sVar53 = *(short *)((int)((*puVar11 >>
                                           (0x40 - (unsigned __int64)*(unsigned char *)(piVar44 + 2) & 0x7f) &
                                          0xffffffff) << 1) + iVar21);
                uVar32 = (unsigned __int64)sVar53;
                if (sVar53 < 0) {
                  fn_82C4E470(puVar11);
                  do {
                    uVar34 = *puVar11;
                    fn_82C4E470(puVar11,1);
                    sVar53 = *(short *)((int)(((uVar32 - ((__int64)uVar34 >> 0x3f)) + 0x8000 &
                                              0xffffffff) << 1) + iVar21);
                    uVar32 = (unsigned __int64)sVar53;
                  } while (sVar53 < 0);
                }
                else {
                  iVar21 = *(int *)(puVar11 + 1);
                  iVar14 = (int)(uVar32 & 0xf);
                  *puVar11 = *puVar11 << (uVar32 & 0xf);
                  *(int *)(puVar11 + 1) = iVar21 - iVar14;
                  if (iVar21 < iVar14) {
                    do {
                      pbVar15 = *(unsigned char **)((int)puVar11 + 0xc);
                      if (pbVar15 < (unsigned char *)(*(int *)(puVar11 + 2) - 4U)) {
                        bVar8 = *pbVar15;
                        bVar3 = pbVar15[1];
                        bVar4 = pbVar15[2];
                        bVar5 = pbVar15[4];
                        bVar6 = pbVar15[3];
                        bVar7 = pbVar15[5];
                        iVar21 = *(int *)(puVar11 + 1);
                        *(unsigned char **)((int)puVar11 + 0xc) = pbVar15 + 6;
                        *(int *)(puVar11 + 1) = iVar21 + 0x30;
                        *puVar11 = ((((((unsigned __int64)bVar8 * 0x100 + (unsigned __int64)bVar3) * 0x100 +
                                      (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar6) * 0x100 +
                                    (unsigned __int64)bVar5) * 0x100 + (unsigned __int64)bVar7 <<
                                   ((__int64)-iVar21 & 0x7fU)) + *puVar11;
                        goto LAB_830b7d10;
                      }
                      iVar21 = fn_82C4E3B0(puVar11);
                    } while (iVar21 == 1);
                    uVar32 = (unsigned __int64)((int)sVar53 >> 4);
                  }
                  else {
LAB_830b7d10:
                    uVar32 = (unsigned __int64)((int)sVar53 >> 4);
                  }
                }
              }
              sVar53 = (short)uVar32;
              if ((int)(uVar32 & 0xffff) == 0x77) {
                if (iVar22 < 5) {
                  lVar36 = 3 - (__int64)(iVar22 >> 1);
                }
                else {
                  lVar36 = 0;
                }
                uVar32 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
                uVar51 = lVar36 + 8;
                iVar22 = 0;
                sVar53 = 0;
                uVar34 = uVar32 + 0x10;
                if ((uVar51 & 0xffffffff) < 0x21) {
                  if ((uVar51 & 0xffffffff) == 0) {
                    sVar53 = 0;
                  }
                  else {
                    if ((uVar34 & 0xffffffff) < (uVar51 & 0xffffffff)) {
                      do {
                        sVar53 = (short)iVar22;
                        if ((uVar34 & 0xffffffff) == 0) break;
                        uVar51 = uVar51 - uVar34;
                        *(int *)(puVar11 + 1) = (int)(uVar32 - uVar34);
                        iVar22 = ((int)(*puVar11 >> (0x40 - uVar34 & 0x7f)) << ((unsigned int)uVar51 & 0x3f)
                                 ) + iVar22;
                        sVar53 = (short)iVar22;
                        *puVar11 = *puVar11 << (uVar34 & 0x7f);
                        if ((__int64)(uVar32 - uVar34) < 0) {
                          fn_82C4E5E8(puVar11);
                        }
                        uVar32 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
                        uVar34 = uVar32 + 0x10;
                      } while ((uVar34 & 0xffffffff) < (uVar51 & 0xffffffff));
                    }
                    *(int *)(puVar11 + 1) = (int)(uVar32 - uVar51);
                    sVar53 = (short)(*puVar11 >> (0x40 - uVar51 & 0x7f)) + sVar53;
                    *puVar11 = *puVar11 << (uVar51 & 0x7f);
                    if ((__int64)(uVar32 - uVar51) < 0) {
                      fn_82C4E5E8(puVar11);
                    }
                  }
                }
                else {
                  sVar53 = 0;
                }
LAB_830b7f68:
                uVar32 = *puVar11;
                uVar27 = *(unsigned int *)(puVar11 + 1);
                *puVar11 = uVar32 << 1;
                *(int *)(puVar11 + 1) = (int)((unsigned __int64)uVar27 - 1);
                if ((__int64)((unsigned __int64)uVar27 - 1) < 0) {
                  fn_82C4E5E8(puVar11);
                }
                sVar31 = (1 - (short)((uVar32 >> 0x3f) << 1)) * sVar53;
              }
              else if ((uVar32 & 0xffff) != 0) {
                if (iVar22 == 4) {
                  uVar32 = *puVar11;
                  uVar27 = *(unsigned int *)(puVar11 + 1);
                  *puVar11 = uVar32 << 1;
                  *(int *)(puVar11 + 1) = (int)((unsigned __int64)uVar27 - 1);
                  if ((__int64)((unsigned __int64)uVar27 - 1) < 0) {
                    fn_82C4E5E8(puVar11);
                  }
                  sVar53 = (sVar53 * 2 - (short)((__int64)uVar32 >> 0x3f)) + -1;
                }
                else if (iVar22 == 2) {
                  uVar32 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
                  uVar51 = 2;
                  iVar22 = 0;
                  sVar31 = 0;
                  uVar34 = uVar32 + 0x10;
                  if ((uVar34 & 0xffffffff) < 2) {
                    do {
                      sVar31 = (short)iVar22;
                      if ((uVar34 & 0xffffffff) == 0) break;
                      uVar51 = uVar51 - uVar34;
                      *(int *)(puVar11 + 1) = (int)(uVar32 - uVar34);
                      iVar22 = ((int)(*puVar11 >> (0x40 - uVar34 & 0x7f)) << ((unsigned int)uVar51 & 0x3f))
                               + iVar22;
                      sVar31 = (short)iVar22;
                      *puVar11 = *puVar11 << (uVar34 & 0x7f);
                      if ((__int64)(uVar32 - uVar34) < 0) {
                        fn_82C4E5E8(puVar11);
                      }
                      uVar32 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
                      uVar34 = uVar32 + 0x10;
                    } while ((uVar34 & 0xffffffff) < (uVar51 & 0xffffffff));
                  }
                  uVar34 = *puVar11;
                  *(int *)(puVar11 + 1) = (int)(uVar32 - uVar51);
                  *puVar11 = uVar34 << (uVar51 & 0x7f);
                  if ((__int64)(uVar32 - uVar51) < 0) {
                    fn_82C4E5E8(puVar11);
                  }
                  sVar53 = sVar53 * 4 + (short)(uVar34 >> (0x40 - uVar51 & 0x7f)) + sVar31 + -3;
                }
                goto LAB_830b7f68;
              }
              *(short *)lVar43 = sVar31;
              if (*(int *)(*param_2 + 0x14) != 0) {
                return 1;
              }
              if (((bStack_100 & 1) != 0) &&
                 (iVar22 = fn_830D9228(param_2,*piVar47,lVar43,param_2[0x6f]), iVar22 < 0)) {
                return 1;
              }
              iVar25 = (((int)(uVar9 * stack_pair_f0.first) >> 1) + uStack_f8) * 4 + iVar25;
              uVar16 = *(unsigned short *)((int)param_2 + 0x32) >> 1;
              uVar27 = 1;
              bVar8 = *(unsigned char *)(puStack_f4 + 1);
              psVar40 = (short *)0x0;
              psVar46 = (short *)0x0;
              if (((uVar39 & 2) != 0) ||
                 (((iVar38 - 1U & stack_pair_f0.first) != 0 &&
                  (*(int *)(iVar25 + (unsigned int)uVar16 * -4) == 0x4000)))) {
                uVar27 = 8;
                psVar40 = psVar50 + ((int)sVar28 & 0x7ffffffU) * -0x10;
              }
              psVar33 = psVar40;
              if ((((unsigned int)LZCOUNT(iVar26) >> 5 & uVar39) == 0) &&
                 ((uStack_f8 == 0 || (*(int *)(iVar25 + -4) != 0x4000)))) {
LAB_830b82e4:
                if (psVar33 != (short *)0x0) {
                  uVar27 = -((unsigned int)LZCOUNT(*puStack_f4 & 0x18) >> 5) | uVar27;
                  if (*(char *)((int)param_2 + 0x1b) == '\0') {
                    if (psVar33 == psVar40) {
                      psVar33 = psVar33 + 8;
                    }
                  }
                  else if (psVar33 == psVar46) {
                    if ((((uVar39 == 0) || (uVar39 == 2)) || (uVar39 == 4)) || (uVar39 == 5)) {
                      uVar45 = *(unsigned char *)(iVar23 + -8) & 0x3f;
                      iVar26 = *(int *)(&lbl_820FDD78 + (bVar8 & 0x3f) * 4);
                      psVar46 = (short *)((int)&uStack_c8 + 2);
                      lVar43 = 3;
                      psVar40 = psVar33 + 3;
                      asStack_c0[0] =
                           (short)(*(int *)(&lbl_820FDD78 +
                                           (*(unsigned int *)((unsigned int)bVar8 * 0x14 + param_2[0x61] + 0x10) &
                                           0x3f) * 4) *
                                   *(int *)((uVar45 + (*(unsigned char *)(iVar23 + -8) & 0x3f) * 4) * 4 +
                                            param_2[0x61] + 0x10) * (int)*psVar33 + 0x20000 >> 0x12)
                      ;
                      do {
                        sVar28 = psVar40[-1];
                        sVar31 = *psVar40;
                        sVar53 = psVar40[1];
                        sVar10 = psVar40[2];
                        psVar46[4] = (short)((int)(psVar40[-2] * iVar26 * uVar45 + 0x20000) >> 0x12)
                        ;
                        psVar46 = psVar46 + 5;
                        *psVar46 = (short)((int)(sVar28 * iVar26 * uVar45 + 0x20000) >> 0x12);
                        *(short *)(((int)asStack_c0 - (int)psVar33) + (int)psVar40) =
                             (short)((int)(sVar31 * iVar26 * uVar45 + 0x20000) >> 0x12);
                        *(short *)((int)asStack_c0 + (2 - (int)psVar33) + (int)psVar40) =
                             (short)((int)(sVar53 * iVar26 * uVar45 + 0x20000) >> 0x12);
                        *(short *)((int)asStack_c0 + (4 - (int)psVar33) + (int)psVar40) =
                             (short)((int)(iVar26 * (int)sVar10 * uVar45 + 0x20000) >> 0x12);
                        psVar40 = psVar40 + 5;
                        lVar43 = lVar43 + -1;
                      } while (lVar43 != 0);
                      psVar33 = asStack_c0;
                      asStack_b0[0] = asStack_c0[0];
                    }
                    else {
                      psVar33 = psVar33 + -1;
                      psVar46 = &sStack_c2;
                      lVar43 = 0x10;
                      do {
                        psVar33 = psVar33 + 1;
                        psVar46 = psVar46 + 1;
                        *psVar46 = *psVar33;
                        lVar43 = lVar43 + -1;
                      } while (lVar43 != 0);
                      psVar33 = asStack_c0;
                    }
                  }
                  else if (((uVar39 == 0) || (uVar39 == 1)) || ((uVar39 == 4 || (uVar39 == 5)))) {
                    uVar30 = (unsigned int)*(unsigned char *)(iVar23 + (unsigned int)uVar16 * -8);
                    uVar45 = uVar30 & 0x3f;
                    lVar43 = 3;
                    iVar26 = *(int *)(&lbl_820FDD78 + (bVar8 & 0x3f) * 4);
                    psVar46 = (short *)((int)&uStack_c8 + 2);
                    psVar40 = psVar33 + 3;
                    asStack_c0[0] =
                         (short)(*(int *)(&lbl_820FDD78 +
                                         (*(unsigned int *)((unsigned int)bVar8 * 0x14 + param_2[0x61] + 0x10) &
                                         0x3f) * 4) *
                                 *(int *)((uVar45 + (uVar30 & 0x3f) * 4) * 4 + param_2[0x61] + 0x10)
                                 * (int)*psVar33 + 0x20000 >> 0x12);
                    do {
                      sVar28 = psVar40[-1];
                      sVar31 = *psVar40;
                      sVar53 = psVar40[1];
                      sVar10 = psVar40[2];
                      psVar46[4] = (short)((int)(psVar40[-2] * iVar26 * uVar45 + 0x20000) >> 0x12);
                      psVar46 = psVar46 + 5;
                      *psVar46 = (short)((int)(sVar28 * iVar26 * uVar45 + 0x20000) >> 0x12);
                      *(short *)((int)psVar40 + ((int)asStack_c0 - (int)psVar33)) =
                           (short)((int)(sVar31 * iVar26 * uVar45 + 0x20000) >> 0x12);
                      *(short *)((int)psVar40 + (int)asStack_c0 + (2 - (int)psVar33)) =
                           (short)((int)(sVar53 * iVar26 * uVar45 + 0x20000) >> 0x12);
                      *(short *)((int)psVar40 + (int)asStack_c0 + (4 - (int)psVar33)) =
                           (short)((int)(iVar26 * (int)sVar10 * uVar45 + 0x20000) >> 0x12);
                      psVar40 = psVar40 + 5;
                      lVar43 = lVar43 + -1;
                    } while (lVar43 != 0);
                    psVar33 = asStack_b0;
                    asStack_b0[0] = asStack_c0[0];
                  }
                  else {
                    psVar33 = psVar33 + -1;
                    psVar46 = &sStack_c2;
                    lVar43 = 0x10;
                    do {
                      psVar33 = psVar33 + 1;
                      psVar46 = psVar46 + 1;
                      *psVar46 = *psVar33;
                      lVar43 = lVar43 + -1;
                    } while (lVar43 != 0);
                    psVar33 = asStack_b0;
                  }
                }
              }
              else {
                psVar46 = psVar50 + -0x10;
                uVar27 = 1;
                psVar33 = psVar46;
                if (psVar46 != (short *)0x0) {
                  uVar27 = 1;
                  if (psVar40 != (short *)0x0) {
                    iVar22 = 0;
                    if ((((uVar39 & 3) != 0) && (iVar26 == 0)) ||
                       (*(int *)(iVar25 + (uVar16 + 1) * -4) == 0x4000)) {
                      iVar22 = (int)psVar40[-8];
                    }
                    sVar28 = psVar40[8];
                    sVar31 = *psVar46;
                    iVar26 = (int)sVar28;
                    iVar25 = (int)sVar31;
                    if (*(char *)((int)param_2 + 0x1b) != '\0') {
                      if (((uVar39 == 0) || (uVar39 == 4)) || (uVar39 == 5)) {
                        iVar25 = param_2[0x61];
                        pbVar15 = (unsigned char *)(iVar23 + (unsigned int)uVar16 * -8);
                        uVar45 = (unsigned int)pbVar15[-8];
                        uVar27 = (unsigned int)*pbVar15;
                        iVar21 = *(int *)(&lbl_820FDD78 +
                                         (*(unsigned int *)((unsigned int)bVar8 * 0x14 + iVar25 + 0x10) & 0x3f) * 4)
                        ;
                        iVar22 = iVar21 * *(int *)(((uVar45 & 0x3f) + (uVar45 & 0x3f) * 4) * 4 +
                                                   iVar25 + 0x10) * iVar22 + 0x20000 >> 0x12;
                        iVar26 = iVar21 * *(int *)(((uVar27 & 0x3f) + (uVar27 & 0x3f) * 4) * 4 +
                                                   iVar25 + 0x10) * (int)sVar28 + 0x20000 >> 0x12;
                        iVar25 = iVar21 * *(int *)(((*(unsigned char *)(iVar23 + -8) & 0x3f) +
                                                   (*(unsigned char *)(iVar23 + -8) & 0x3f) * 4) * 4 + iVar25
                                                  + 0x10) * (int)sVar31 + 0x20000 >> 0x12;
                      }
                      else if (uVar39 == 1) {
                        uVar27 = (unsigned int)*(unsigned char *)(iVar23 + (unsigned int)uVar16 * -8);
                        iVar26 = *(int *)(((uVar27 & 0x3f) + (uVar27 & 0x3f) * 4) * 4 +
                                          param_2[0x61] + 0x10);
                        iVar22 = *(int *)(&lbl_820FDD78 +
                                         (*(unsigned int *)((unsigned int)bVar8 * 0x14 + param_2[0x61] + 0x10) &
                                         0x3f) * 4) * iVar26 * iVar22 + 0x20000 >> 0x12;
                        iVar26 = *(int *)(&lbl_820FDD78 +
                                         (*(unsigned int *)((unsigned int)bVar8 * 0x14 + param_2[0x61] + 0x10) &
                                         0x3f) * 4) * iVar26 * sVar28 + 0x20000 >> 0x12;
                      }
                      else if (uVar39 == 2) {
                        iVar25 = *(int *)(((*(unsigned char *)(iVar23 + -8) & 0x3f) +
                                          (*(unsigned char *)(iVar23 + -8) & 0x3f) * 4) * 4 + param_2[0x61] +
                                         0x10);
                        iVar22 = *(int *)(&lbl_820FDD78 +
                                         (*(unsigned int *)((unsigned int)bVar8 * 0x14 + param_2[0x61] + 0x10) &
                                         0x3f) * 4) * iVar25 * iVar22 + 0x20000 >> 0x12;
                        iVar25 = *(int *)(&lbl_820FDD78 +
                                         (*(unsigned int *)((unsigned int)bVar8 * 0x14 + param_2[0x61] + 0x10) &
                                         0x3f) * 4) * iVar25 * sVar31 + 0x20000 >> 0x12;
                      }
                    }
                    uVar45 = iVar22 - iVar26 >> 0x1f;
                    uVar30 = iVar22 - iVar25 >> 0x1f;
                    uVar27 = 1;
                    if ((int)((iVar22 - iVar25 ^ uVar30) - uVar30) <
                        (int)((iVar22 - iVar26 ^ uVar45) - uVar45)) {
                      uVar27 = 8;
                      psVar33 = psVar40;
                    }
                  }
                  goto LAB_830b82e4;
                }
              }
              psVar46 = (short *)piStack00000024[7];
              if (psVar33 == (short *)0x0) {
                sVar28 = *psVar46;
                *psVar50 = sVar28;
                psVar50[8] = sVar28;
LAB_830b87f8:
                psVar50[1] = psVar46[1];
                *(unsigned int *)(psVar50 + 2) = *(unsigned int *)(psVar46 + 2);
                *(unsigned __int64 *)(psVar50 + 4) = *(unsigned __int64 *)(psVar46 + 4);
                psVar50[9] = psVar46[8];
                psVar50[10] = psVar46[0x10];
                psVar50[0xb] = psVar46[0x18];
                psVar50[0xc] = psVar46[0x20];
                psVar50[0xd] = psVar46[0x28];
                psVar50[0xe] = psVar46[0x30];
                psVar50[0xf] = psVar46[0x38];
              }
              else {
                sVar28 = *psVar46 + *psVar33;
                *psVar46 = sVar28;
                *psVar50 = sVar28;
                psVar50[8] = sVar28;
                if (uVar27 == 1) {
                  sVar28 = psVar33[1];
                  sVar31 = psVar46[1];
                  psVar46[1] = sVar28 + sVar31;
                  psVar50[1] = sVar28 + sVar31;
                  sVar28 = psVar33[2];
                  sVar31 = psVar46[2];
                  psVar46[2] = sVar28 + sVar31;
                  psVar50[2] = sVar28 + sVar31;
                  sVar28 = psVar33[3];
                  sVar31 = psVar46[3];
                  psVar46[3] = sVar28 + sVar31;
                  psVar50[3] = sVar28 + sVar31;
                  sVar28 = psVar33[4];
                  sVar31 = psVar46[4];
                  psVar46[4] = sVar28 + sVar31;
                  psVar50[4] = sVar28 + sVar31;
                  sVar28 = psVar33[5];
                  sVar31 = psVar46[5];
                  psVar46[5] = sVar28 + sVar31;
                  psVar50[5] = sVar28 + sVar31;
                  sVar28 = psVar46[6];
                  sVar31 = psVar33[6];
                  psVar46[6] = sVar31 + sVar28;
                  psVar50[6] = sVar31 + sVar28;
                  sVar28 = psVar46[7];
                  sVar31 = psVar33[7];
                  psVar46[7] = sVar31 + sVar28;
                  psVar50[7] = sVar31 + sVar28;
                  psVar50[9] = psVar46[8];
                  psVar50[10] = psVar46[0x10];
                  psVar50[0xb] = psVar46[0x18];
                  psVar50[0xc] = psVar46[0x20];
                  psVar50[0xd] = psVar46[0x28];
                  psVar50[0xe] = psVar46[0x30];
                  psVar50[0xf] = psVar46[0x38];
                }
                else {
                  if (uVar27 != 8) goto LAB_830b87f8;
                  psVar50[1] = psVar46[1];
                  *(unsigned int *)(psVar50 + 2) = *(unsigned int *)(psVar46 + 2);
                  *(unsigned __int64 *)(psVar50 + 4) = *(unsigned __int64 *)(psVar46 + 4);
                  sVar28 = psVar46[8];
                  sVar31 = psVar33[1];
                  psVar46[8] = sVar31 + sVar28;
                  psVar50[9] = sVar31 + sVar28;
                  sVar28 = psVar46[0x10];
                  sVar31 = psVar33[2];
                  psVar46[0x10] = sVar31 + sVar28;
                  psVar50[10] = sVar31 + sVar28;
                  sVar28 = psVar33[3];
                  sVar31 = psVar46[0x18];
                  psVar46[0x18] = sVar28 + sVar31;
                  psVar50[0xb] = sVar28 + sVar31;
                  sVar28 = psVar33[4];
                  sVar31 = psVar46[0x20];
                  psVar46[0x20] = sVar28 + sVar31;
                  psVar50[0xc] = sVar28 + sVar31;
                  sVar28 = psVar33[5];
                  sVar31 = psVar46[0x28];
                  psVar46[0x28] = sVar28 + sVar31;
                  psVar50[0xd] = sVar28 + sVar31;
                  sVar28 = psVar46[0x30];
                  sVar31 = psVar33[6];
                  psVar46[0x30] = sVar31 + sVar28;
                  psVar50[0xe] = sVar31 + sVar28;
                  sVar28 = psVar33[7];
                  sVar31 = psVar46[0x38];
                  psVar46[0x38] = sVar28 + sVar31;
                  psVar50[0xf] = sVar28 + sVar31;
                }
              }
              uVar39 = uVar39 + 1;
              bStack_100 = bStack_100 >> 1;
            } while ((int)uVar39 < 6);
            *puStack_f4 = *puStack_f4 & 0x7fffffff;
            *(unsigned __int64 *)(piStack00000024[1] * 8 + param_2[0x148]) =
                 (unsigned __int64)*(unsigned short *)(puStack_f4 + 1) << 0x30;
          }
          else {
            uVar27 = (unsigned int)*(unsigned char *)((int)param_2 + 0x1d);
            uVar24 = *puVar41;
            uVar30 = (unsigned int)*(unsigned char *)((int)param_2 + 0x22);
            uVar32 = (unsigned __int64)*(unsigned char *)((int)puVar41 + 5);
            uVar45 = uVar24 >> 0x14 & 3;
            uVar39 = uVar24 >> 0x1c & 1;
            if (uVar27 != 0) {
              uVar30 = uVar24 >> 0x18 & 7;
            }
            if (*(char *)(param_2 + 7) == '\0') {
              piVar44 = param_2 + 0x65;
            }
            else {
              piVar44 = (int *)((uVar24 >> 0x14 & 0xc) + param_2[99]);
            }
            iVar20 = 0;
            uVar34 = 0;
            piVar47 = piStack00000024;
            do {
              uVar51 = uVar34;
              if ((uVar32 & 1) != 0) {
                if ((uVar39 & uVar27 - 1) != 0) {
                  puVar11 = (unsigned __int64 *)*param_2;
                  iVar23 = *(int *)param_2[0x98];
                  sVar28 = *(short *)((int)((*puVar11 >> 0x3a) << 1) + iVar23);
                  uVar34 = (unsigned __int64)sVar28;
                  if (sVar28 < 0) {
                    fn_82C4E470(puVar11,6);
                    do {
                      uVar29 = *puVar11;
                      fn_82C4E470(puVar11,1);
                      sVar28 = *(short *)((int)(((uVar34 - ((__int64)uVar29 >> 0x3f)) + 0x8000 &
                                                0xffffffff) << 1) + iVar23);
                      uVar34 = (unsigned __int64)sVar28;
                      iVar38 = (int)sVar28;
                    } while (sVar28 < 0);
                  }
                  else {
                    iVar23 = *(int *)(puVar11 + 1);
                    iVar38 = (int)(uVar34 & 0xf);
                    *puVar11 = *puVar11 << (uVar34 & 0xf);
                    *(int *)(puVar11 + 1) = iVar23 - iVar38;
                    if (iVar23 < iVar38) {
                      do {
                        pbVar15 = *(unsigned char **)((int)puVar11 + 0xc);
                        if (pbVar15 < (unsigned char *)(*(int *)(puVar11 + 2) - 4U)) {
                          bVar2 = *pbVar15;
                          bVar8 = pbVar15[1];
                          bVar3 = pbVar15[2];
                          bVar4 = pbVar15[3];
                          bVar5 = pbVar15[4];
                          bVar6 = pbVar15[5];
                          iVar23 = *(int *)(puVar11 + 1);
                          *(unsigned char **)((int)puVar11 + 0xc) = pbVar15 + 6;
                          *(int *)(puVar11 + 1) = iVar23 + 0x30;
                          *puVar11 = ((((((unsigned __int64)bVar2 * 0x100 + (unsigned __int64)bVar8) * 0x100 +
                                        (unsigned __int64)bVar3) * 0x100 + (unsigned __int64)bVar4) * 0x100 +
                                      (unsigned __int64)bVar5) * 0x100 + (unsigned __int64)bVar6 <<
                                     ((__int64)-iVar23 & 0x7fU)) + *puVar11;
                          goto LAB_830b89e8;
                        }
                        iVar23 = fn_82C4E3B0(puVar11);
                      } while (iVar23 == 1);
                      iVar38 = (int)sVar28 >> 4;
                    }
                    else {
LAB_830b89e8:
                      iVar38 = (int)sVar28 >> 4;
                    }
                  }
                  if (*(int *)(*param_2 + 0x14) != 0) {
                    return 1;
                  }
                  uVar30 = (unsigned int)*(unsigned char *)((int)param_2 + iVar38 + 0x2ac);
                  uVar45 = (unsigned int)*(unsigned char *)((int)param_2 + iVar38 + 0x2b4);
                }
                if (uVar30 == 0) {
                  iVar23 = piVar47[5];
                  uVar24 = fn_830D8E88(param_2,*piVar44,*(unsigned char *)(param_2 + 0x28),iVar23);
                  if (uVar24 == 0xffffffff) {
                    *(unsigned char *)piVar47[6] = 0;
                    return 0xffffffffffffffff;
                  }
                  uVar51 = uVar51 | 1;
                  piVar47[5] = (uVar24 & 0x7f) * 2 + iVar23;
                  *(char *)piVar47[6] = (char)uVar24;
                  piVar47[6] = piVar47[6] + 1;
                }
                else {
                  if (uVar30 < 3) {
                    uVar24 = uVar45;
                    if (uVar39 == 0 && uVar27 == 0) {
                      plVar12 = (__int64 *)*param_2;
                      lVar43 = *plVar12;
                      uVar24 = *(unsigned int *)(plVar12 + 1);
                      *plVar12 = lVar43 << 1;
                      *(int *)(plVar12 + 1) = (int)((unsigned __int64)uVar24 - 1);
                      if ((__int64)((unsigned __int64)uVar24 - 1) < 0) {
                        fn_82C4E5E8();
                      }
                      if (lVar43 < 0) {
                        plVar12 = (__int64 *)*param_2;
                        lVar43 = *plVar12;
                        uVar24 = *(unsigned int *)(plVar12 + 1);
                        *plVar12 = lVar43 << 1;
                        *(int *)(plVar12 + 1) = (int)((unsigned __int64)uVar24 - 1);
                        if ((__int64)((unsigned __int64)uVar24 - 1) < 0) {
                          fn_82C4E5E8();
                        }
                        uVar24 = 1 - (int)(lVar43 >> 0x3f);
                      }
                      else {
                        uVar24 = 3;
                      }
                    }
                  }
                  else {
                    puVar11 = (unsigned __int64 *)*param_2;
                    iVar23 = *(int *)param_2[0x99];
                    sVar28 = *(short *)((int)((*puVar11 >> 0x3a) << 1) + iVar23);
                    uVar34 = (unsigned __int64)sVar28;
                    if (sVar28 < 0) {
                      fn_82C4E470(puVar11,6);
                      do {
                        uVar29 = *puVar11;
                        fn_82C4E470(puVar11,1);
                        sVar28 = *(short *)((int)(((uVar34 - ((__int64)uVar29 >> 0x3f)) + 0x8000 &
                                                  0xffffffff) << 1) + iVar23);
                        uVar34 = (unsigned __int64)sVar28;
                        iVar38 = (int)sVar28;
                      } while (sVar28 < 0);
                    }
                    else {
                      iVar23 = *(int *)(puVar11 + 1);
                      iVar38 = (int)(uVar34 & 0xf);
                      *puVar11 = *puVar11 << (uVar34 & 0xf);
                      *(int *)(puVar11 + 1) = iVar23 - iVar38;
                      if (iVar23 < iVar38) {
                        do {
                          pbVar15 = *(unsigned char **)((int)puVar11 + 0xc);
                          if (pbVar15 < (unsigned char *)(*(int *)(puVar11 + 2) - 4U)) {
                            bVar2 = *pbVar15;
                            bVar8 = pbVar15[1];
                            bVar3 = pbVar15[2];
                            bVar4 = pbVar15[3];
                            bVar5 = pbVar15[4];
                            bVar6 = pbVar15[5];
                            iVar23 = *(int *)(puVar11 + 1);
                            *(unsigned char **)((int)puVar11 + 0xc) = pbVar15 + 6;
                            *(int *)(puVar11 + 1) = iVar23 + 0x30;
                            *puVar11 = ((((((unsigned __int64)bVar2 * 0x100 + (unsigned __int64)bVar8) * 0x100 +
                                          (unsigned __int64)bVar3) * 0x100 + (unsigned __int64)bVar4) * 0x100 +
                                        (unsigned __int64)bVar5) * 0x100 + (unsigned __int64)bVar6 <<
                                       ((__int64)-iVar23 & 0x7fU)) + *puVar11;
                            goto LAB_830b8c00;
                          }
                          iVar23 = fn_82C4E3B0(puVar11);
                        } while (iVar23 == 1);
                        iVar38 = (int)sVar28 >> 4;
                      }
                      else {
LAB_830b8c00:
                        iVar38 = (int)sVar28 >> 4;
                      }
                    }
                    uVar24 = iVar38 + 1;
                    if (*(int *)(*param_2 + 0x14) != 0) {
                      return 1;
                    }
                  }
                  piVar47 = piStack00000024;
                  bVar2 = *(unsigned char *)((int)param_2 + uVar24 + 0x140);
                  uVar51 = (__int64)(int)(uVar30 << 4 | uVar24) | uVar51;
                  if (bVar2 == 0) {
                    return 1;
                  }
                  iVar23 = *piVar44;
                  iVar26 = 0;
                  iVar38 = piStack00000024[6];
                  uVar34 = (unsigned __int64)(unsigned int)piStack00000024[5];
                  uVar42 = *(unsigned char *)((int)param_2 + uVar30 + 0xa0);
                  if (bVar2 != 0) {
                    do {
                      uVar29 = fn_830D8E88(param_2,iVar23,uVar42,uVar34);
                      if ((int)uVar29 == -1) {
                        *(unsigned char *)(iVar26 + iVar38) = 0;
                      }
                      else {
                        *(char *)(iVar26 + iVar38) = (char)uVar29;
                        uVar34 = (uVar29 & 0x7f) * 2 + uVar34;
                      }
                      iVar26 = iVar26 + 1;
                    } while (iVar26 < (int)(unsigned int)bVar2);
                  }
                  if ((int)uVar34 == -1) {
                    return 1;
                  }
                  piVar47[5] = (int)uVar34;
                  piVar47[6] = (unsigned int)bVar2 + piVar47[6];
                  piVar47 = piStack00000024;
                }
                uVar27 = 0;
              }
              iVar20 = iVar20 + 1;
              uVar32 = uVar32 >> 1;
              uVar34 = uVar51 << 8;
            } while (iVar20 < 6);
            uVar24 = *puVar41;
            *(unsigned __int64 *)(piVar47[1] * 8 + param_2[0x148]) =
                 ((((unsigned __int64)uVar24 & 0x80 | (unsigned __int64)*(unsigned char *)(puVar41 + 1)) << 8 |
                  ((unsigned __int64)uVar24 & 0x60) << 1 | (unsigned __int64)*(unsigned char *)((int)puVar41 + 5)) << 0x20
                 | (unsigned __int64)uVar24 & 0xffffffff80000000) << 0x10 | uVar51 & 0xffffffffffffff;
          }
          puVar41 = puStack_f4 + 6;
          uStack_f8 = uStack_f8 + 1;
          stack_pair_f0.second = stack_pair_f0.second + 1;
          *piStack00000024 = *piStack00000024 + 2;
          piStack00000024[1] = piStack00000024[1] + 1;
          piStack00000024[2] = piStack00000024[2] + 0x10;
          piStack00000024[3] = piStack00000024[3] + 8;
          *(short *)((int)piStack00000024 + 0x12) = *(short *)((int)piStack00000024 + 0x12) + 2;
          param_1 = iStack00000014;
          uVar24 = uStack_c8;
          puStack_f4 = puVar41;
        } while ((int)uStack_f8 < (int)uVar13);
      }
      stack_pair_f0.first = stack_pair_f0.first + 1;
      *(short *)(piStack00000024 + 4) = *(short *)(piStack00000024 + 4) + 2;
      *piStack00000024 = (unsigned int)*(unsigned short *)((int)param_2 + 0x32) + *piStack00000024;
      iStack_d8 = (unsigned int)*(unsigned short *)((int)param_2 + 0x4a) * 0x10 + iStack_d8;
      iStack_d4 = (unsigned int)*(unsigned short *)(param_2 + 0x13) * 8 + iStack_d4;
      param_3 = piStack00000024;
    } while ((int)stack_pair_f0.first < (int)uVar24);
  }
  *(int *)(param_1 + 0xb0b4) = piStack00000024[8] - *(int *)(param_1 + 0x5708) >> 2;
  *(unsigned int *)piStack00000024[8] = 0xffffffff;
  **(unsigned __int64 **)(param_1 + 0x54) = *(unsigned __int64 *)(param_2 + 0x1a);
  *(int *)(*(int *)(param_1 + 0x54) + 8) = param_2[0x1c];
  *(int *)(*(int *)(param_1 + 0x54) + 0xc) = param_2[0x1d];
  *(int *)(*(int *)(param_1 + 0x54) + 0x10) = param_2[0x1e];
  *(int *)(*(int *)(param_1 + 0x54) + 0x14) = param_2[0x1f];
  *(int *)(*(int *)(param_1 + 0x54) + 0x18) = param_2[0x20];
  *(int *)(*(int *)(param_1 + 0x54) + 0x1c) = param_2[0x21];
  *(int *)(*(int *)(param_1 + 0x54) + 0x20) = param_2[0x22];
  *(int *)(*(int *)(param_1 + 0x54) + 0x24) = param_2[0x23];
  *(int *)(*(int *)(param_1 + 0x54) + 0x28) = param_2[0x24];
  *(int *)(*(int *)(param_1 + 0x54) + 0x2c) = param_2[0x25];
  *(int *)(*(int *)(param_1 + 0x54) + 0x30) = param_2[0x26];
  return 0;
}

