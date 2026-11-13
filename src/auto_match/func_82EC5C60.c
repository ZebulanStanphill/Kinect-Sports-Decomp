#define true 1
extern int fn_82EC49C8();
extern int fn_82EC5360();
extern int fn_82F26110();
extern int fn_82F26F98();
extern unsigned int lbl_8215F864;
extern unsigned int lbl_831898B8;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;
extern unsigned int uStack_100;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d8;
extern unsigned int uStack_e0;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


void fn_82EC5C60(int param_1, unsigned int param_2, unsigned int param_3, unsigned int param_4, unsigned __int64 param_5, unsigned int param_6, unsigned int param_7, unsigned __int64 param_8, unsigned int in_stack_00000054, unsigned int in_stack_0000005c, unsigned int in_stack_00000064, unsigned __int64 unused_arg_12, unsigned int in_stack_00000074, unsigned int in_stack_0000007c, int in_stack_00000084, int in_stack_0000008c, int in_stack_00000094, int in_stack_0000009c, unsigned __int64 unused_arg_19, unsigned int in_stack_000000ac, unsigned int in_stack_000000b4, unsigned __int64 unused_arg_22, unsigned __int64 unused_arg_23, unsigned __int64 unused_arg_24, int in_stack_000000d4)

{
  int (**pcVar1)();
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned char *puVar6;
  unsigned __int64 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  short *psVar16;
  unsigned int uVar17;
  __int64 lVar18;
  __int64 lVar19;
  unsigned int uVar20;
  unsigned __int64 uVar21;
  unsigned int uVar22;
  __int64 lVar23;
  unsigned __int64 uVar24;
  unsigned int uVar25;
  __int64 lVar26;
  unsigned __int64 uVar27;
  int iVar28;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  unsigned int uStack00000034;
  unsigned int uStack0000003c;
  unsigned int uStack00000044;
  unsigned int uStack0000004c;











  short *in_stack_000000bc;
  short *in_stack_000000c4;
  unsigned int *in_stack_000000cc;

  unsigned int *in_stack_000000dc;
  unsigned int *in_stack_000000e4;
  unsigned int *in_stack_000000ec;
  unsigned int *in_stack_000000f4;
  unsigned int *in_stack_000000fc;
  int *in_stack_00000104;
  struct { unsigned int first; unsigned int second; } stack_pair_100;

  unsigned int uStack_f8;
  unsigned int uStack_f4;
  short *psStack_f0;
  unsigned int uStack_ec;
  unsigned int uStack_e8;
  unsigned int uStack_e4;
  unsigned int uStack_e0;
  unsigned char *puStack_dc;
  unsigned int uStack_d8;
  int (**pcStack_d4)();
  int (**pcStack_d0)();
  unsigned int uStack_cc;
  unsigned int uStack_c8;
  unsigned int uStack_c4;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  unsigned int uStack_a4;

  uStack00000034 = (unsigned int)param_5;
  iVar28 = 0xfffffff;
  pcVar1 = (int (**)())*in_stack_000000dc;
  pcStack_d4 = (int (**)())in_stack_000000dc[3];
  uStack0000004c = (unsigned int)param_8;
  uVar14 = (unsigned __int64)in_stack_00000064;
  uVar25 = *(unsigned int *)(in_stack_00000094 + 8);
  lVar18 = uVar14 + 0x180;
  uVar20 = *(unsigned int *)(in_stack_00000094 + 0xc);
  uVar22 = *(unsigned int *)(in_stack_0000009c + 8);
  uVar17 = *(unsigned int *)(in_stack_0000009c + 0xc);
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  psStack_f0 = (short *)0xfffffff;
  puStack_dc = &lbl_8215F864;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uStack0000003c = param_6;
  uStack00000044 = param_7;
  pcStack_d0 = pcVar1;
  if (0 < (int)in_stack_000000ac) {
    uStack_d8 = in_stack_000000ac;
    psStack_f0 = in_stack_000000bc;
    while( true ) {
      puVar6 = puStack_dc;
      stack_pair_100.second = (int)*psStack_f0 << 2;
      uStack_f8 = (int)psStack_f0[1] << 2;
      fn_82F26110(param_1,&stack_pair_100.second,&uStack_f8,in_stack_00000074,in_stack_0000007c);
      iVar10 = *(int *)(param_1 + 0x564);
      if (in_stack_0000008c == 1) {
        (**(int (***)())(param_1 + 0x9b8))
                  ((__int64)((int)uStack_f8 >> 2) * (__int64)iVar10 +
                   (__int64)((int)stack_pair_100.second >> 2) + param_5);
      }
      else {
        (**(int (***)())(param_1 + 0x9c0))
                  ((__int64)((int)uStack_f8 >> 2) * (__int64)iVar10 +
                   (__int64)((int)stack_pair_100.second >> 2) + param_5,iVar10,uVar14,0x10,stack_pair_100.second,uStack_f8,
                   0,*(unsigned int *)(param_1 + 0x618));
      }
      if (stack_pair_100.second == 0x4000) {
        lVar26 = 0x4000;
        lVar23 = 0x4000;
      }
      else {
        uVar2 = (int)(*(int *)(puVar6 + (stack_pair_100.second & 3) * 4) + stack_pair_100.second) >> 1;
        lVar23 = (__int64)(int)uVar2;
        uVar3 = (int)(*(int *)(puVar6 + (uStack_f8 & 3) * 4) + uStack_f8) >> 1;
        lVar26 = (__int64)(int)uVar3;
        if (*(int *)(param_1 + 0x314) != 0) {
          if ((uVar2 & 1) != 0) {
            if ((int)uVar2 < 1) {
              lVar23 = lVar23 + 1;
            }
            else {
              lVar23 = lVar23 + -1;
            }
          }
          if ((uVar3 & 1) != 0) {
            if ((int)uVar3 < 1) {
              lVar26 = lVar26 + 1;
            }
            else {
              lVar26 = lVar26 + -1;
            }
          }
        }
      }
      if ((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) {
        fn_82F26F98(param_1,uStack0000003c,*(unsigned int *)(param_1 + 0x568),uVar14 + 0x100,8,
                          lVar23,lVar26,0);
      }
      if ((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) {
        fn_82F26F98(param_1,uStack00000044,*(unsigned int *)(param_1 + 0x568),uVar14 + 0x140,8,
                          lVar23,lVar26,0);
      }
      if (0 < (int)in_stack_000000b4) {
        uVar15 = (unsigned __int64)in_stack_000000b4;
        psVar16 = in_stack_000000c4;
        do {
          stack_pair_100.first = (int)*psVar16 << 2;
          uStack_f4 = (int)psVar16[1] << 2;
          fn_82F26110(param_1,&stack_pair_100.first,&uStack_f4,in_stack_00000074,in_stack_0000007c);
          iVar10 = *(int *)(param_1 + 0x564);
          if (in_stack_0000008c == 1) {
            (**(int (***)())(param_1 + 0x9b8))
                      ((__int64)((int)uStack_f4 >> 2) * (__int64)iVar10 +
                       (__int64)((int)stack_pair_100.first >> 2) + param_8);
          }
          else {
            (**(int (***)())(param_1 + 0x9c0))
                      ((__int64)((int)uStack_f4 >> 2) * (__int64)iVar10 +
                       (__int64)((int)stack_pair_100.first >> 2) + param_8,iVar10,lVar18,0x10,stack_pair_100.first,
                       uStack_f4,0,*(unsigned int *)(param_1 + 0x618));
          }
          (**(int (***)())(param_1 + 0xb1c))(uVar14,0x10,lVar18,0x10,lVar18,0x10,0x10,0x10);
          uVar12 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa2c);
          uVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa30);
          uVar27 = ((uVar12 - uVar25) + (unsigned __int64)stack_pair_100.second & (unsigned __int64)*(unsigned int *)(param_1 + 0xa34)
                   ) - uVar12;
          uVar24 = (unsigned __int64)((int)uVar27 >> 0x1f);
          uVar7 = ((uVar11 - uVar20) + (unsigned __int64)uStack_f8 & (unsigned __int64)*(unsigned int *)(param_1 + 0xa38))
                  - uVar11;
          uVar21 = (unsigned __int64)((int)uVar7 >> 0x1f);
          uVar24 = (uVar27 ^ uVar24) - uVar24;
          uVar12 = ((uVar12 - uVar22) + (unsigned __int64)stack_pair_100.first &
                   (unsigned __int64)*(unsigned int *)(param_1 + 0xa34)) - uVar12;
          uVar11 = ((uVar11 - uVar17) + (unsigned __int64)uStack_f4 & (unsigned __int64)*(unsigned int *)(param_1 + 0xa38)
                   ) - uVar11;
          uVar21 = (uVar7 ^ uVar21) - uVar21;
          if (((int)uVar24 < 0x9f) && ((int)uVar21 < 0x9f)) {
            iVar10 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar21 & 0xffffffff) << 2)) * 4 +
                             in_stack_000000d4) +
                     *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar24 & 0xffffffff) << 2)) * 4 +
                             in_stack_000000d4);
          }
          else {
            iVar10 = *(int *)(in_stack_000000d4 + 0x14) << 1;
          }
          uVar21 = (unsigned __int64)((int)uVar12 >> 0x1f);
          uVar7 = (unsigned __int64)((int)uVar11 >> 0x1f);
          uVar21 = (uVar12 ^ uVar21) - uVar21;
          uVar7 = (uVar11 ^ uVar7) - uVar7;
          if (((int)uVar21 < 0x9f) && ((int)uVar7 < 0x9f)) {
            iVar9 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar7 & 0xffffffff) << 2)) * 4 +
                            in_stack_000000d4) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar21 & 0xffffffff) << 2)) * 4 +
                            in_stack_000000d4);
          }
          else {
            iVar9 = *(int *)(in_stack_000000d4 + 0x14) << 1;
          }
          iVar8 = (*pcStack_d4)(uStack0000001c,0x10,lVar18,0x10,0x10);
          iVar10 = iVar8 + iVar9 + iVar10;
          if (stack_pair_100.first == 0x4000) {
            lVar26 = 0x4000;
            lVar23 = 0x4000;
          }
          else {
            uVar2 = (int)(*(int *)(puStack_dc + (stack_pair_100.first & 3) * 4) + stack_pair_100.first) >> 1;
            lVar23 = (__int64)(int)uVar2;
            uVar3 = (int)(*(int *)(puStack_dc + (uStack_f4 & 3) * 4) + uStack_f4) >> 1;
            lVar26 = (__int64)(int)uVar3;
            if (*(int *)(param_1 + 0x314) != 0) {
              if ((uVar2 & 1) != 0) {
                if ((int)uVar2 < 1) {
                  lVar23 = lVar23 + 1;
                }
                else {
                  lVar23 = lVar23 + -1;
                }
              }
              if ((uVar3 & 1) != 0) {
                if ((int)uVar3 < 1) {
                  lVar26 = lVar26 + 1;
                }
                else {
                  lVar26 = lVar26 + -1;
                }
              }
            }
          }
          if ((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) {
            lVar13 = uVar14 + 0x280;
            fn_82F26F98(param_1,in_stack_00000054,*(unsigned int *)(param_1 + 0x568),lVar13,8,
                              lVar23,lVar26,0);
            (**(int (***)())(param_1 + 0xb1c))(uVar14 + 0x100,8,lVar13,8,lVar13,8,8,8);
            iVar9 = (*pcVar1)(uStack00000024,8,lVar13,8);
            param_8 = (unsigned __int64)uStack0000004c;
            iVar10 = iVar9 + iVar10;
          }
          if ((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) {
            lVar13 = uVar14 + 0x2c0;
            fn_82F26F98(param_1,in_stack_0000005c,*(unsigned int *)(param_1 + 0x568),lVar13,8,
                              lVar23,lVar26,0);
            (**(int (***)())(param_1 + 0xb1c))(uVar14 + 0x140,8,lVar13,8,lVar13,8,8,8);
            iVar9 = (*pcVar1)(uStack0000002c,8,lVar13,8);
            iVar10 = iVar9 + iVar10;
          }
          if (iVar10 < iVar28) {
            uStack_ec = stack_pair_100.second;
            uStack_e8 = uStack_f8;
            uStack_e0 = uStack_f4;
            uStack_e4 = stack_pair_100.first;
            iVar28 = iVar10;
          }
          uVar15 = uVar15 - 1;
          psVar16 = psVar16 + 2;
        } while (uVar15 != 0);
      }
      uVar15 = (unsigned __int64)uStack_d8;
      psVar16 = psStack_f0 + 2;
      uStack_d8 = (unsigned int)(uVar15 - 1);
      psStack_f0 = (short *)iVar28;
      if (uVar15 - 1 == 0) break;
      param_5 = (unsigned __int64)uStack00000034;
      psStack_f0 = psVar16;
    }
  }
  uVar5 = uStack0000002c;
  uVar4 = uStack00000024;
  uStack_d8 = uStack_e0;
  uStack_cc = uStack_e4;
  uStack_c8 = uStack_e8;
  uStack_c0 = in_stack_0000005c;
  uStack_bc = in_stack_00000054;
  uStack_c4 = uStack_ec;
  uVar15 = (unsigned __int64)uStack00000034;
  fn_82EC49C8(param_1,uStack0000001c,uStack00000024,uStack0000002c,uVar15,uStack0000003c,
                uStack00000044,uStack0000004c);
  if (in_stack_00000084 == 0) {
    uStack_bc = in_stack_0000005c;
    uStack_c0 = in_stack_00000054;
    fn_82EC49C8(param_1,uStack0000001c,uVar4,uVar5,uVar15,uStack0000003c,uStack00000044,
                  uStack0000004c);
    uVar15 = (unsigned __int64)uStack00000034;
  }
  puVar6 = puStack_dc;
  stack_pair_100.second = *in_stack_000000cc;
  uStack_f8 = in_stack_000000cc[1];
  fn_82F26110(param_1,&stack_pair_100.second,&uStack_f8,in_stack_00000074,in_stack_0000007c);
  lVar23 = (__int64)((int)uStack_f8 >> 2) * (__int64)*(int *)(param_1 + 0x564) +
           (__int64)((int)stack_pair_100.second >> 2);
  if (in_stack_0000008c == 1) {
    (**(int (***)())(param_1 + 0x9b8))(lVar23 + uVar15);
  }
  else {
    (**(int (***)())(param_1 + 0x9c0))
              (lVar23 + uVar15,*(int *)(param_1 + 0x564),uVar14,0x10,stack_pair_100.second,uStack_f8,0,
               *(unsigned int *)(param_1 + 0x618));
  }
  stack_pair_100.first = in_stack_000000cc[2];
  uStack_f4 = in_stack_000000cc[3];
  fn_82F26110(param_1,&stack_pair_100.first,&uStack_f4,in_stack_00000074,in_stack_0000007c);
  lVar23 = (__int64)((int)uStack_f4 >> 2) * (__int64)*(int *)(param_1 + 0x564) +
           (__int64)((int)stack_pair_100.first >> 2);
  if (in_stack_0000008c == 1) {
    (**(int (***)())(param_1 + 0x9b8))(lVar23 + (unsigned __int64)uStack0000004c);
  }
  else {
    (**(int (***)())(param_1 + 0x9c0))
              (lVar23 + (unsigned __int64)uStack0000004c,*(int *)(param_1 + 0x564),lVar18,0x10,stack_pair_100.first,
               uStack_f4,0,*(unsigned int *)(param_1 + 0x618));
  }
  (**(int (***)())(param_1 + 0xb1c))(uVar14,0x10,lVar18,0x10,lVar18,0x10,0x10,0x10);
  uVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa2c);
  uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa30);
  uVar24 = ((uVar11 - uVar25) + (unsigned __int64)stack_pair_100.second & (unsigned __int64)*(unsigned int *)(param_1 + 0xa34)) -
           uVar11;
  uVar21 = (unsigned __int64)((int)uVar24 >> 0x1f);
  uVar15 = ((uVar7 - uVar20) + (unsigned __int64)uStack_f8 & (unsigned __int64)*(unsigned int *)(param_1 + 0xa38)) - uVar7
  ;
  uVar12 = (unsigned __int64)((int)uVar15 >> 0x1f);
  uVar21 = (uVar24 ^ uVar21) - uVar21;
  uVar11 = ((uVar11 - uVar22) + (unsigned __int64)stack_pair_100.first & (unsigned __int64)*(unsigned int *)(param_1 + 0xa34)) -
           uVar11;
  uVar7 = ((uVar7 - uVar17) + (unsigned __int64)uStack_f4 & (unsigned __int64)*(unsigned int *)(param_1 + 0xa38)) - uVar7;
  uVar12 = (uVar15 ^ uVar12) - uVar12;
  if (((int)uVar21 < 0x9f) && ((int)uVar12 < 0x9f)) {
    iVar28 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar12 & 0xffffffff) << 2)) * 4 +
                     in_stack_000000d4) +
             *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar21 & 0xffffffff) << 2)) * 4 +
                     in_stack_000000d4);
  }
  else {
    iVar28 = *(int *)(in_stack_000000d4 + 0x14) << 1;
  }
  uVar12 = (unsigned __int64)((int)uVar11 >> 0x1f);
  uVar15 = (unsigned __int64)((int)uVar7 >> 0x1f);
  uVar12 = (uVar11 ^ uVar12) - uVar12;
  uVar15 = (uVar7 ^ uVar15) - uVar15;
  if (((int)uVar12 < 0x9f) && ((int)uVar15 < 0x9f)) {
    iVar10 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                     in_stack_000000d4) +
             *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar12 & 0xffffffff) << 2)) * 4 +
                     in_stack_000000d4);
  }
  else {
    iVar10 = *(int *)(in_stack_000000d4 + 0x14) << 1;
  }
  iVar9 = (*pcStack_d4)(uStack0000001c,0x10,lVar18,0x10,0x10);
  iVar28 = iVar9 + iVar10 + iVar28;
  if (stack_pair_100.second == 0x4000) {
    lVar23 = 0x4000;
    lVar18 = 0x4000;
  }
  else {
    uVar25 = (int)(*(int *)(puVar6 + (stack_pair_100.second & 3) * 4) + stack_pair_100.second) >> 1;
    lVar18 = (__int64)(int)uVar25;
    uVar20 = (int)(*(int *)(puVar6 + (uStack_f8 & 3) * 4) + uStack_f8) >> 1;
    lVar23 = (__int64)(int)uVar20;
    if (*(int *)(param_1 + 0x314) != 0) {
      if ((uVar25 & 1) != 0) {
        if ((int)uVar25 < 1) {
          lVar18 = lVar18 + 1;
        }
        else {
          lVar18 = lVar18 + -1;
        }
      }
      if ((uVar20 & 1) != 0) {
        if ((int)uVar20 < 1) {
          lVar23 = lVar23 + 1;
        }
        else {
          lVar23 = lVar23 + -1;
        }
      }
    }
  }
  if (stack_pair_100.first == 0x4000) {
    lVar13 = 0x4000;
    lVar26 = 0x4000;
  }
  else {
    uVar25 = (int)(*(int *)(puStack_dc + (stack_pair_100.first & 3) * 4) + stack_pair_100.first) >> 1;
    lVar26 = (__int64)(int)uVar25;
    uVar20 = (int)(*(int *)(puStack_dc + (uStack_f4 & 3) * 4) + uStack_f4) >> 1;
    lVar13 = (__int64)(int)uVar20;
    if (*(int *)(param_1 + 0x314) != 0) {
      if ((uVar25 & 1) != 0) {
        if ((int)uVar25 < 1) {
          lVar26 = lVar26 + 1;
        }
        else {
          lVar26 = lVar26 + -1;
        }
      }
      if ((uVar20 & 1) != 0) {
        if ((int)uVar20 < 1) {
          lVar13 = lVar13 + 1;
        }
        else {
          lVar13 = lVar13 + -1;
        }
      }
    }
  }
  if ((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) {
    fn_82F26F98(param_1,uStack0000003c,*(unsigned int *)(param_1 + 0x568),uVar14 + 0x100,8,
                      lVar18,lVar23,0);
    lVar19 = uVar14 + 0x280;
    fn_82F26F98(param_1,in_stack_00000054,*(unsigned int *)(param_1 + 0x568),lVar19,8,lVar26,
                      lVar13,0);
    (**(int (***)())(param_1 + 0xb1c))(uVar14 + 0x100,8,lVar19,8,lVar19,8,8,8);
    iVar10 = (*pcStack_d0)(uStack00000024,8,lVar19,8);
    iVar28 = iVar10 + iVar28;
  }
  if ((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) {
    fn_82F26F98(param_1,uStack00000044,*(unsigned int *)(param_1 + 0x568),uVar14 + 0x140,8,
                      lVar18,lVar23,0);
    lVar18 = uVar14 + 0x2c0;
    fn_82F26F98(param_1,in_stack_0000005c,*(unsigned int *)(param_1 + 0x568),lVar18,8,lVar26,
                      lVar13,0);
    (**(int (***)())(param_1 + 0xb1c))(uVar14 + 0x140,8,lVar18,8,lVar18,8,8,8);
    iVar10 = (*pcStack_d0)(uStack0000002c,8,lVar18,8);
    iVar28 = iVar10 + iVar28;
  }
  uVar25 = uStack_ec;
  uVar20 = uStack_e4;
  uVar22 = uStack_e8;
  uVar17 = uStack_e0;
  if (iVar28 < (int)psStack_f0) {
    uVar25 = stack_pair_100.second;
    uVar20 = stack_pair_100.first;
    uVar22 = uStack_f8;
    uVar17 = uStack_f4;
    psStack_f0 = (short *)iVar28;
  }
  if (*(int *)(param_1 + 0x6d74) != 0) {
    uStack_b0 = uVar25;
    uStack_ac = uVar22;
    uStack_a8 = uVar20;
    uStack_a4 = uVar17;
    fn_82EC5360(param_1,uStack0000001c,uStack00000024,uStack0000002c,uStack00000034,uStack0000003c
                  ,uStack00000044,uStack0000004c);
  }
  *in_stack_00000104 = (int)psStack_f0;
  *in_stack_000000e4 = uVar25;
  *in_stack_000000ec = uVar22;
  *in_stack_000000f4 = uVar20;
  *in_stack_000000fc = uVar17;
  return;
}
