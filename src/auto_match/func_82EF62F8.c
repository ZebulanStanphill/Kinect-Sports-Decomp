#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_c0;
extern unsigned int iStack_104;
extern unsigned int iStack_108;
extern unsigned int iStack_10c;
extern unsigned int iStack_110;
extern unsigned int iStack_9c;
extern unsigned int iStack_b0;
extern unsigned int iStack_cc;
extern unsigned int iStack_d0;
extern unsigned int iStack_d4;
extern unsigned int iStack_d8;
extern unsigned int iStack_dc;
extern unsigned int iStack_e0;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack_100;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


unsigned __int64 fn_82EF62F8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                       unsigned __int64 param_5,unsigned __int64 param_6,__int64 param_7,__int64 param_8)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  __int64 lVar8;
  int iVar10;
  __int64 lVar9;
  unsigned __int64 uVar11;
  __int64 lVar12;
  unsigned __int64 uVar13;
  int iVar14;
  __int64 lVar15;
  __int64 lVar16;
  int *piVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  unsigned __int64 uVar20;
  unsigned int uVar21;
  unsigned __int64 uVar22;
  unsigned __int64 uVar23;
  __int64 lVar24;
  __int64 lVar25;
  unsigned __int64 uVar26;
  __int64 lVar27;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  unsigned int uStack00000034;
  unsigned int uStack0000003c;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  unsigned int in_stack_00000084;
  int in_stack_0000008c;
  int in_stack_00000094;
  int in_stack_0000009c;
  unsigned int *in_stack_000000a4;
  int *in_stack_000000ac;
  int iStack_110;
  int iStack_10c;
  struct { int first; int second; } stack_pair_108;

  unsigned int uStack_100;
  unsigned int uStack_fc;
  unsigned int uStack_f8;
  unsigned int uStack_f0;
  unsigned int uStack_ec;
  unsigned int uStack_e8;
  unsigned int uStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  unsigned char auStack_c0 [1];
  int iStack_b0;
  int aiStack_ac [4];
  int iStack_9c;
  
  uVar1 = *(unsigned int *)(param_1 + 0x6dd0);
  iStack_110 = 0;
  iStack_10c = 0;
  stack_pair_108.first = 0;
  stack_pair_108.second = 0;
  uStack0000001c = (unsigned int)param_2;
  uStack00000024 = (unsigned int)param_3;
  uStack0000002c = (unsigned int)param_4;
  uStack00000034 = (unsigned int)param_5;
  uStack0000003c = (unsigned int)param_6;
  uStack_f8 = uVar1;
  (**(int (***)())(param_1 + 0x6f3c))(param_2,param_5,param_7,in_stack_0000005c,&uStack_f0);
  if ((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) {
    (**(int (***)())(param_1 + 0x6f38))
              (param_3,param_6,param_8,in_stack_00000064,&iStack_110,&stack_pair_108.first);
  }
  if ((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) {
    (**(int (***)())(param_1 + 0x6f38))
              (param_4,param_6,(unsigned __int64)in_stack_00000054,in_stack_00000064,&iStack_10c,
               &stack_pair_108.second);
  }
  uVar19 = ZEXT48(in_stack_000000a4);
  uVar18 = ZEXT48(in_stack_000000ac);
  *in_stack_000000a4 = uStack_f0;
  iStack_e0 = (iStack_10c + iStack_110 >> 2) + iStack_e0;
  iStack_cc = (stack_pair_108.second + stack_pair_108.first >> 2) + iStack_cc;
  *in_stack_000000ac = iStack_dc;
  in_stack_000000a4[0x40] = 0;
  in_stack_000000a4[0x20] = 0;
  in_stack_000000ac[0x40] = 0;
  in_stack_000000ac[0x20] = 0;
  if (*(int *)(param_1 + 0x6da4) != 0) {
    in_stack_000000a4[*(int *)(param_1 + 0x6dd0) + 0x40] = 0;
    in_stack_000000a4[*(int *)(param_1 + 0x6dd0) + 0x20] = 0;
    in_stack_000000ac[*(int *)(param_1 + 0x6dd0) + 0x40] = 0;
    in_stack_000000ac[*(int *)(param_1 + 0x6dd0) + 0x20] = 0;
  }
  in_stack_000000a4[0x60] = uStack_ec;
  in_stack_000000ac[0x60] = iStack_d8;
  in_stack_000000a4[0xa0] = 0;
  in_stack_000000a4[0x80] = 0;
  in_stack_000000ac[0x80] = 0;
  in_stack_000000ac[0xa0] = 0;
  if (*(int *)(param_1 + 0x6da4) != 0) {
    in_stack_000000a4[*(int *)(param_1 + 0x6dd0) + 0xa0] = 0;
    in_stack_000000a4[*(int *)(param_1 + 0x6dd0) + 0x80] = 0;
    in_stack_000000ac[*(int *)(param_1 + 0x6dd0) + 0xa0] = 0;
    in_stack_000000ac[*(int *)(param_1 + 0x6dd0) + 0x80] = 0;
  }
  in_stack_000000a4[0xc0] = uStack_e8;
  in_stack_000000ac[0xc0] = iStack_d4;
  in_stack_000000a4[0x100] = 0;
  in_stack_000000a4[0xe0] = 0;
  in_stack_000000ac[0x100] = 0;
  in_stack_000000ac[0xe0] = 0;
  if (*(int *)(param_1 + 0x6da4) != 0) {
    in_stack_000000a4[*(int *)(param_1 + 0x6dd0) + 0x100] = 0;
    in_stack_000000a4[*(int *)(param_1 + 0x6dd0) + 0xe0] = 0;
    in_stack_000000ac[*(int *)(param_1 + 0x6dd0) + 0x100] = 0;
    in_stack_000000ac[*(int *)(param_1 + 0x6dd0) + 0xe0] = 0;
  }
  in_stack_000000a4[0x120] = uStack_e4;
  in_stack_000000ac[0x120] = iStack_d0;
  in_stack_000000a4[0x160] = 0;
  in_stack_000000a4[0x140] = 0;
  in_stack_000000ac[0x160] = 0;
  in_stack_000000ac[0x140] = 0;
  if (*(int *)(param_1 + 0x6da4) != 0) {
    in_stack_000000a4[*(int *)(param_1 + 0x6dd0) + 0x160] = 0;
    in_stack_000000a4[*(int *)(param_1 + 0x6dd0) + 0x140] = 0;
    in_stack_000000ac[*(int *)(param_1 + 0x6dd0) + 0x160] = 0;
    in_stack_000000ac[*(int *)(param_1 + 0x6dd0) + 0x140] = 0;
  }
  in_stack_000000a4[0x180] = iStack_e0;
  in_stack_000000ac[0x180] = iStack_cc;
  in_stack_000000a4[0x1c0] = 0;
  in_stack_000000a4[0x1a0] = 0;
  in_stack_000000ac[0x1c0] = 0;
  in_stack_000000ac[0x1a0] = 0;
  if (*(int *)(param_1 + 0x6da4) != 0) {
    in_stack_000000a4[*(int *)(param_1 + 0x6dd0) + 0x1c0] = 0;
    in_stack_000000a4[*(int *)(param_1 + 0x6dd0) + 0x1a0] = 0;
    in_stack_000000ac[*(int *)(param_1 + 0x6dd0) + 0x1c0] = 0;
    in_stack_000000ac[*(int *)(param_1 + 0x6dd0) + 0x1a0] = 0;
  }
  iVar14 = *(int *)(param_1 + 0x6dd0);
  iVar10 = 1;
  if (1 < iVar14) {
    lVar12 = uVar19 + 0x600;
    lVar15 = uVar18 + 0x184;
    do {
      iVar14 = (int)lVar12;
      *(unsigned int *)(iVar14 + -0x5fc) = 0xfffffff;
      iVar10 = iVar10 + 1;
      puVar4 = (unsigned int *)lVar15;
      puVar4[-0x60] = 0xfffffff;
      *(unsigned int *)(((int)in_stack_000000a4 - (int)in_stack_000000ac) + (int)puVar4) = 0xfffffff;
      *puVar4 = 0xfffffff;
      *(unsigned int *)(iVar14 + -0x2fc) = 0xfffffff;
      puVar4[0x60] = 0xfffffff;
      *(unsigned int *)(iVar14 + -0x17c) = 0xfffffff;
      puVar4[0xc0] = 0xfffffff;
      lVar12 = lVar12 + 4;
      *(unsigned int *)lVar12 = 0xfffffff;
      puVar4[0x120] = 0xfffffff;
      lVar15 = lVar15 + 4;
      iVar14 = *(int *)(param_1 + 0x6dd0);
    } while (iVar10 < iVar14);
  }
  uVar22 = 1;
  uVar23 = 1;
  if ((*(int *)(param_1 + 0x6dd8) < iStack_e0) || (*(int *)(param_1 + 0x6dd8) < iStack_cc)) {
    uVar13 = (__int64)(int)in_stack_0000005c * (__int64)in_stack_00000094 + param_7;
    lVar12 = (__int64)(int)in_stack_00000064 * (__int64)in_stack_00000094 + param_8;
    uStack_100 = (unsigned int)uVar13;
    if (in_stack_00000094 <= in_stack_0000009c) {
      uVar26 = (lVar12 - param_8) + (unsigned __int64)in_stack_00000054;
      uStack_fc = (unsigned int)uVar26;
      do {
        uVar20 = (unsigned __int64)in_stack_00000084;
        uVar1 = uStack_f8;
        uVar21 = in_stack_00000084;
        while (uStack_f8 = uVar1, (int)uVar21 <= in_stack_0000008c) {
          iVar10 = (int)uVar20;
          if ((in_stack_00000094 != 0) || (iVar10 != 0)) {
            lVar15 = uVar20 + lVar12;
            (**(int (***)())(param_1 + 0x6f3c))
                      (param_2,param_5,lVar15 + (uVar13 - lVar12),in_stack_0000005c,auStack_c0);
            if ((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) {
              (**(int (***)())(param_1 + 0x6f38))
                        (uStack00000024,param_6,lVar15,in_stack_00000064,&iStack_110,&stack_pair_108.first);
            }
            if ((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) {
              (**(int (***)())(param_1 + 0x6f38))
                        (uStack0000002c,param_6,lVar15 + (uVar26 - lVar12),in_stack_00000064,
                         &iStack_10c,&stack_pair_108.second);
            }
            lVar24 = (uVar23 & 0x3fffffff) << 2;
            lVar25 = (uVar22 & 0x3fffffff) << 2;
            piVar17 = aiStack_ac;
            iStack_b0 = (iStack_10c + iStack_110 >> 2) + iStack_b0;
            iStack_9c = (stack_pair_108.second + stack_pair_108.first >> 2) + iStack_9c;
            lVar15 = 5;
            uVar13 = uVar19;
            do {
              iVar2 = piVar17[-5];
              lVar27 = uVar13 + (uVar18 - uVar19);
              piVar5 = (int *)uVar13;
              if (iVar2 < *(int *)((int)piVar5 + (int)lVar25)) {
                uVar11 = 0;
                iVar3 = *piVar5;
                uVar26 = uVar13;
                while (iVar3 < iVar2) {
                  uVar26 = uVar26 + 4;
                  uVar11 = uVar11 + 1;
                  iVar3 = *(int *)uVar26;
                }
                iVar6 = (int)(uVar13 + 0x100);
                iVar3 = (int)(uVar13 + 0x80);
                if ((int)uVar11 < (int)uVar22) {
                  lVar8 = uVar22 - uVar11;
                  lVar16 = lVar25 + uVar13 + 0x100;
                  lVar9 = lVar25 + uVar13 + 0x80;
                  do {
                    puVar4 = (unsigned int *)(lVar9 + -4);
                    *(unsigned int *)((int)(unsigned int *)lVar16 + ((int)piVar5 - iVar6)) =
                         *(unsigned int *)((int)puVar4 + ((int)piVar5 - iVar3));
                    *(unsigned int *)lVar9 = *puVar4;
                    *(unsigned int *)lVar16 = *(unsigned int *)((iVar6 - iVar3) + (int)puVar4);
                    lVar16 = lVar16 + -4;
                    lVar8 = lVar8 + -1;
                    lVar9 = lVar9 + -4;
                  } while (lVar8 != 0);
                }
                iVar7 = (int)((uVar11 & 0x3fffffff) << 2);
                *(int *)((int)piVar5 + iVar7) = iVar2;
                *(int *)(iVar7 + iVar3) = iVar10;
                *(int *)(iVar7 + iVar6) = in_stack_00000094;
                if ((int)uVar22 < iVar14 + -1) {
                  uVar22 = uVar22 + 1;
                  lVar25 = lVar25 + 4;
                }
              }
              iVar2 = *piVar17;
              piVar5 = (int *)lVar27;
              if (iVar2 < *(int *)((int)lVar24 + (int)piVar5)) {
                uVar26 = 0;
                lVar8 = lVar27 + 0x80;
                lVar9 = uVar13 + (uVar18 - uVar19) + 0x100;
                iVar3 = *piVar5;
                while (iVar3 < iVar2) {
                  lVar27 = lVar27 + 4;
                  uVar26 = uVar26 + 1;
                  iVar3 = *(int *)lVar27;
                }
                iVar6 = (int)lVar9;
                iVar3 = (int)lVar8;
                if ((int)uVar26 < (int)uVar23) {
                  lVar16 = uVar23 - uVar26;
                  lVar9 = lVar24 + lVar9;
                  lVar27 = lVar24 + lVar8;
                  do {
                    puVar4 = (unsigned int *)(lVar27 + -4);
                    *(unsigned int *)(((int)piVar5 - iVar6) + (int)(unsigned int *)lVar9) =
                         *(unsigned int *)(((int)piVar5 - iVar3) + (int)puVar4);
                    *(unsigned int *)lVar27 = *puVar4;
                    *(unsigned int *)lVar9 = *(unsigned int *)((iVar6 - iVar3) + (int)puVar4);
                    lVar9 = lVar9 + -4;
                    lVar16 = lVar16 + -1;
                    lVar27 = lVar27 + -4;
                  } while (lVar16 != 0);
                }
                iVar7 = (int)((uVar26 & 0x3fffffff) << 2);
                *(int *)(iVar7 + (int)piVar5) = iVar2;
                *(int *)(iVar7 + iVar3) = iVar10;
                *(int *)(iVar7 + iVar6) = in_stack_00000094;
                if ((int)uVar23 < iVar14 + -1) {
                  uVar23 = uVar23 + 1;
                  lVar24 = lVar24 + 4;
                }
              }
              lVar15 = lVar15 + -1;
              uVar13 = uVar13 + 0x180;
              piVar17 = piVar17 + 1;
            } while (lVar15 != 0);
            uVar13 = (unsigned __int64)uStack_100;
            uVar26 = (unsigned __int64)uStack_fc;
            param_2 = (unsigned __int64)uStack0000001c;
            param_5 = (unsigned __int64)uStack00000034;
            param_6 = (unsigned __int64)uStack0000003c;
          }
          uVar20 = uVar20 + 1;
          uVar1 = uStack_f8;
          uVar21 = (unsigned int)uVar20;
        }
        in_stack_00000094 = in_stack_00000094 + 1;
        uVar13 = uVar13 + in_stack_0000005c;
        uVar26 = uVar26 + in_stack_00000064;
        uStack_100 = (unsigned int)uVar13;
        lVar12 = lVar12 + (unsigned __int64)in_stack_00000064;
        uStack_fc = (unsigned int)uVar26;
      } while (in_stack_00000094 <= in_stack_0000009c);
    }
    uVar19 = (unsigned __int64)uVar1;
    if (*(int *)(param_1 + 0x6da4) != 0) {
      iVar14 = 0;
      piVar17 = &iStack_dc;
      lVar12 = ((unsigned __int64)uVar1 & 0x3fffffff) * 4 + uVar18 + -4;
      do {
        if ((*(int *)(((int)in_stack_000000a4 - (int)in_stack_000000ac) + (int)(int *)lVar12) <
             piVar17[-5]) || (*(int *)lVar12 < *piVar17)) {
          return uVar19 + 1;
        }
        iVar14 = iVar14 + 1;
        lVar12 = lVar12 + 0x180;
        piVar17 = piVar17 + 1;
      } while (iVar14 < 5);
    }
  }
  else {
    uVar19 = 1;
  }
  return uVar19;
}

