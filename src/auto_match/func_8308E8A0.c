#define true 1
typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_8308B6C0();
extern int fn_8308B7A0();
extern unsigned int iStack00000024;
extern unsigned int uStack_bc;
extern unsigned int uStack_be;
extern unsigned int uStack_c0;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern V16 vectorAddFloatingPoint();
extern V16 vectorMinimumFloatingPoint();


void fn_8308E8A0(int param_1,unsigned int *param_2,int param_3,int param_4,int *param_5,int *param_6
                  )

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  unsigned short uVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned short uVar8;
  unsigned __int64 in_r0;
  int iVar9;
  int *piVar10;
  unsigned int *puVar11;
  unsigned int uVar12;
  unsigned int *puVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned short *puVar19;
  unsigned int uVar20;
  unsigned short *puVar21;
  short *psVar22;
  unsigned int uVar23;
  unsigned short uVar24;
  unsigned int *puVar25;
  unsigned int *puVar26;
  unsigned char in_vs32 [16];
  unsigned char in_vs35 [16];
  unsigned char in_vs36 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned char in_vs62 [16];
  unsigned char in_vs63 [16];
  unsigned int in_register_000101c0;
  unsigned int in_register_000101c4;
  unsigned int in_register_000101c8;
  unsigned int in_vr28;
  unsigned int in_register_000101d0;
  unsigned int in_register_000101d4;
  unsigned int in_register_000101d8;
  unsigned int in_vr29;
  int iStack00000024;
  struct { unsigned int first; unsigned int second; } stack_pair_e0;

  unsigned int uStack_d8;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned int uStack_c8;
  unsigned short uStack_c0;
  unsigned short uStack_be;
  unsigned short uStack_bc;
  
  puVar11 = param_2 + param_4;
  iStack00000024 = param_3;
  do {
    if (puVar11 <= param_2) {
      return;
    }
    iVar5 = *(int *)(param_1 + 0xa0);
    vectorAddFloatingPoint(in_vs41,in_vs42);
    uVar6 = *(unsigned int *)*param_2;
    vectorAddFloatingPoint(in_vs45,in_vs39);
    puVar19 = (unsigned short *)(uVar6 * 0x10 + iVar5);
    uVar23 = (unsigned int)puVar19[4];
    puVar25 = (unsigned int *)(uVar23 * 4 + *(int *)(param_1 + 0xac));
    uVar1 = *(unsigned short *)(puVar25 + -1);
    vectorMinimumFloatingPoint(in_vs36,in_vs32);
    vectorMinimumFloatingPoint(in_vs35,in_vs32);
    vectorAddFloatingPoint(in_vs63,in_vs44);
    vectorAddFloatingPoint(in_vs62,in_vs44);
    puVar26 = (unsigned int *)((int)&stack_pair_e0.first + (int)in_r0 & 0xfffffff0);
    *puVar26 = in_register_000101d0;
    puVar26[1] = in_register_000101d4;
    puVar26[2] = in_register_000101d8;
    puVar26[3] = in_vr29;
    puVar26 = (unsigned int *)((int)&uStack_d0 + (int)in_r0 & 0xfffffff0);
    *puVar26 = in_register_000101c0;
    puVar26[1] = in_register_000101c4;
    puVar26[2] = in_register_000101c8;
    puVar26[3] = in_vr28;
    uVar14 = uStack_d0 >> 7 & 0xfffe;
    uStack_c0 = (unsigned short)(uStack_d0 >> 7);
    uStack_be = (unsigned short)(uStack_cc >> 7);
    uStack_bc = (unsigned short)(uStack_c8 >> 7);
    uVar15 = uStack_cc >> 7 & 0xfffe;
    uVar16 = uStack_c8 >> 7 & 0xfffe;
    uVar20 = stack_pair_e0.first >> 7 & 0xffff | 1;
    uVar18 = stack_pair_e0.second >> 7 & 0xffff | 1;
    uVar17 = uStack_d8 >> 7 & 0xffff | 1;
    puVar26 = puVar25;
    while (uVar24 = (unsigned short)uVar23, uVar14 < uVar1) {
      piVar10 = (int *)((unsigned int)*(unsigned short *)((int)puVar26 + -2) * 0x10 + iVar5);
      *puVar25 = puVar26[-1];
      puVar25 = puVar25 + -1;
      if ((uVar1 & 1) == 0) {
        *(unsigned short *)(piVar10 + 2) = uVar24;
      }
      else {
        iVar9 = *(int *)puVar19;
        iVar7 = *(int *)(puVar19 + 2);
        *(unsigned short *)((int)piVar10 + 10) = uVar24;
        if (((piVar10[1] - iVar9 | iVar7 - *piVar10) & 0x80008000U) == 0) {
          fn_8308B6C0(*(unsigned int *)(param_1 + 0xd8),puVar19,uVar6,piVar10,param_5);
        }
      }
      uVar23 = uVar23 - 1;
      uVar1 = *(unsigned short *)(puVar26 + -2);
      puVar26 = puVar26 + -1;
    }
    puVar21 = (unsigned short *)(puVar25 + -1);
    uVar1 = *(unsigned short *)(puVar25 + -1);
    while (uVar14 == uVar1) {
      uVar24 = (unsigned short)uVar23;
      uVar1 = puVar21[1];
      if (uVar1 <= uVar6) break;
      uVar23 = uVar23 - 1;
      *puVar25 = *(unsigned int *)puVar21;
      puVar25 = puVar25 + -1;
      *(unsigned short *)((unsigned int)uVar1 * 0x10 + iVar5 + 8) = uVar24;
      puVar21 = puVar21 + -2;
      uVar24 = (unsigned short)uVar23;
      uVar1 = *puVar21;
    }
    uVar8 = (unsigned short)uVar6;
    *(unsigned short *)((int)puVar25 + 2) = uVar8;
    *(short *)puVar25 = (short)uVar14;
    puVar19[4] = uVar24;
    uVar23 = (unsigned int)puVar19[5];
    puVar26 = (unsigned int *)(uVar23 * 4 + *(int *)(param_1 + 0xac));
    uVar1 = *(unsigned short *)(puVar26 + 1);
    puVar25 = puVar26;
    while (uVar1 < uVar20) {
      uVar23 = uVar23 + 1;
      *puVar26 = puVar25[1];
      puVar26 = puVar26 + 1;
      piVar10 = (int *)((unsigned int)*(unsigned short *)((int)puVar25 + 6) * 0x10 + iVar5);
      if ((uVar1 & 1) == 0) {
        iVar9 = *(int *)(puVar19 + 2);
        iVar7 = *(int *)puVar19;
        *(short *)(piVar10 + 2) = *(short *)(piVar10 + 2) + -1;
        if (((piVar10[1] - iVar7 | iVar9 - *piVar10) & 0x80008000U) == 0) {
          fn_8308B6C0(*(unsigned int *)(param_1 + 0xd8),puVar19,uVar6,piVar10,param_5);
        }
      }
      else {
        *(short *)((int)piVar10 + 10) = *(short *)((int)piVar10 + 10) + -1;
      }
      uVar1 = *(unsigned short *)(puVar25 + 2);
      puVar25 = puVar25 + 1;
    }
    puVar21 = (unsigned short *)(puVar26 + 1);
    uVar1 = *(unsigned short *)(puVar26 + 1);
    while (uVar20 == uVar1) {
      uVar1 = puVar21[1];
      if ((uVar6 <= uVar1) || (uVar1 == 0)) break;
      uVar23 = uVar23 + 1;
      iVar9 = (unsigned int)uVar1 * 0x10 + iVar5;
      *puVar26 = *(unsigned int *)puVar21;
      puVar26 = puVar26 + 1;
      *(short *)(iVar9 + 10) = *(short *)(iVar9 + 10) + -1;
      puVar21 = puVar21 + 2;
      uVar1 = *puVar21;
    }
    uVar12 = (unsigned int)*(unsigned short *)(puVar26 + -1);
    if (uVar20 < uVar12) {
      puVar21 = (unsigned short *)((int)puVar26 + 2);
      do {
        uVar1 = puVar21[-2];
        uVar23 = uVar23 - 1;
        *puVar26 = *(unsigned int *)(puVar21 + -3);
        piVar10 = (int *)((unsigned int)uVar1 * 0x10 + iVar5);
        puVar26 = puVar26 + -1;
        if ((uVar12 & 1) == 0) {
          iVar9 = *(int *)puVar19;
          iVar7 = *(int *)(puVar19 + 2);
          *(short *)(piVar10 + 2) = *(short *)(piVar10 + 2) + 1;
          if (((piVar10[1] - iVar9 | iVar7 - *piVar10) & 0x80008000U) == 0) {
            fn_8308B7A0(*(unsigned int *)(param_1 + 0xd8),puVar19,uVar6,piVar10,param_6);
          }
        }
        else {
          *(short *)((int)piVar10 + 10) = *(short *)((int)piVar10 + 10) + 1;
        }
        uVar12 = (unsigned int)puVar21[-5];
        puVar21 = puVar21 + -2;
      } while (uVar20 < uVar12);
    }
    uVar24 = (unsigned short)uVar23;
    puVar21 = (unsigned short *)(puVar26 + -1);
    uVar1 = *(unsigned short *)(puVar26 + -1);
    while (uVar20 == uVar1) {
      uVar24 = (unsigned short)uVar23;
      if (puVar21[1] <= uVar6) break;
      uVar23 = uVar23 - 1;
      uVar24 = (unsigned short)uVar23;
      iVar9 = (unsigned int)puVar21[1] * 0x10 + iVar5;
      *puVar26 = *(unsigned int *)puVar21;
      puVar26 = puVar26 + -1;
      *(short *)(iVar9 + 10) = *(short *)(iVar9 + 10) + 1;
      puVar21 = puVar21 + -2;
      uVar1 = *puVar21;
    }
    puVar19[5] = uVar24;
    *(unsigned short *)((int)puVar26 + 2) = uVar8;
    *(short *)puVar26 = (short)uVar20;
    uVar23 = (unsigned int)puVar19[4];
    puVar26 = (unsigned int *)(uVar23 * 4 + *(int *)(param_1 + 0xac));
    uVar1 = *(unsigned short *)(puVar26 + 1);
    puVar25 = puVar26;
    while (uVar1 < uVar14) {
      uVar23 = uVar23 + 1;
      piVar10 = (int *)((unsigned int)*(unsigned short *)((int)puVar25 + 6) * 0x10 + iVar5);
      *puVar26 = puVar25[1];
      puVar26 = puVar26 + 1;
      if ((uVar1 & 1) == 0) {
        *(short *)(piVar10 + 2) = *(short *)(piVar10 + 2) + -1;
      }
      else {
        iVar9 = *(int *)(puVar19 + 2);
        iVar7 = *(int *)puVar19;
        *(short *)((int)piVar10 + 10) = *(short *)((int)piVar10 + 10) + -1;
        if (((piVar10[1] - iVar7 | iVar9 - *piVar10) & 0x80008000U) == 0) {
          fn_8308B7A0(*(unsigned int *)(param_1 + 0xd8),puVar19,uVar6,piVar10,param_6);
        }
      }
      uVar1 = *(unsigned short *)(puVar25 + 2);
      puVar25 = puVar25 + 1;
    }
    uVar24 = (unsigned short)uVar23;
    puVar21 = (unsigned short *)(puVar26 + 1);
    uVar1 = *(unsigned short *)(puVar26 + 1);
    while (uVar14 == uVar1) {
      uVar24 = (unsigned short)uVar23;
      if (uVar6 <= puVar21[1]) break;
      uVar23 = uVar23 + 1;
      uVar24 = (unsigned short)uVar23;
      iVar9 = (unsigned int)puVar21[1] * 0x10 + iVar5;
      *puVar26 = *(unsigned int *)puVar21;
      puVar26 = puVar26 + 1;
      *(short *)(iVar9 + 8) = *(short *)(iVar9 + 8) + -1;
      puVar21 = puVar21 + 2;
      uVar1 = *puVar21;
    }
    puVar19[4] = uVar24;
    *(unsigned short *)((int)puVar26 + 2) = uVar8;
    *(short *)puVar26 = (short)uVar14;
    uVar23 = (unsigned int)*puVar19;
    puVar26 = (unsigned int *)(uVar23 * 4 + *(int *)(param_1 + 0xb8));
    uVar1 = *(unsigned short *)(puVar26 + -1);
    puVar25 = puVar26;
    while (uVar24 = (unsigned short)uVar23, uVar15 < uVar1) {
      puVar21 = (unsigned short *)((unsigned int)*(unsigned short *)((int)puVar25 + -2) * 0x10 + iVar5);
      *puVar26 = puVar25[-1];
      puVar26 = puVar26 + -1;
      if ((uVar1 & 1) == 0) {
        *puVar21 = uVar24;
      }
      else {
        uVar1 = puVar19[1];
        uVar2 = puVar19[3];
        uVar3 = puVar19[5];
        uVar4 = puVar19[4];
        puVar21[2] = uVar24;
        if ((((__int64)(short)puVar21[3] - (__int64)(short)uVar1 |
              (__int64)(short)uVar2 - (__int64)(short)puVar21[1] |
              (__int64)(short)uVar3 - (__int64)(short)puVar21[4] |
             (__int64)(short)puVar21[5] - (__int64)(short)uVar4) & 0x8000U) == 0) {
          iVar9 = fn_82CE5410();
          if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
            fn_82CE63B0(*(unsigned int *)(iVar9 + 0x10),param_5,8);
          }
          iVar9 = param_5[1];
          param_5[1] = iVar9 + 1;
          puVar13 = (unsigned int *)(iVar9 * 8 + *param_5);
          *puVar13 = *(unsigned int *)(puVar19 + 6);
          puVar13[1] = *(unsigned int *)(puVar21 + 6);
        }
      }
      uVar23 = uVar23 - 1;
      uVar1 = *(unsigned short *)(puVar25 + -2);
      puVar25 = puVar25 + -1;
    }
    puVar21 = (unsigned short *)(puVar26 + -1);
    uVar1 = *(unsigned short *)(puVar26 + -1);
    while (uVar15 == uVar1) {
      uVar24 = (unsigned short)uVar23;
      uVar1 = puVar21[1];
      if (uVar1 <= uVar6) break;
      uVar23 = uVar23 - 1;
      *puVar26 = *(unsigned int *)puVar21;
      puVar26 = puVar26 + -1;
      *(unsigned short *)((unsigned int)uVar1 * 0x10 + iVar5) = uVar24;
      puVar21 = puVar21 + -2;
      uVar24 = (unsigned short)uVar23;
      uVar1 = *puVar21;
    }
    *(unsigned short *)((int)puVar26 + 2) = uVar8;
    *(short *)puVar26 = (short)uVar15;
    *puVar19 = uVar24;
    uVar23 = (unsigned int)puVar19[2];
    puVar26 = (unsigned int *)(uVar23 * 4 + *(int *)(param_1 + 0xb8));
    uVar1 = *(unsigned short *)(puVar26 + 1);
    puVar25 = puVar26;
    while (uVar1 < uVar18) {
      uVar23 = uVar23 + 1;
      *puVar26 = puVar25[1];
      puVar26 = puVar26 + 1;
      psVar22 = (short *)((unsigned int)*(unsigned short *)((int)puVar25 + 6) * 0x10 + iVar5);
      if ((uVar1 & 1) == 0) {
        uVar1 = puVar19[1];
        uVar24 = puVar19[3];
        uVar2 = puVar19[5];
        uVar3 = puVar19[4];
        *psVar22 = *psVar22 + -1;
        if ((((__int64)psVar22[3] - (__int64)(short)uVar1 |
              (__int64)(short)uVar24 - (__int64)psVar22[1] |
              (__int64)(short)uVar2 - (__int64)psVar22[4] |
             (__int64)psVar22[5] - (__int64)(short)uVar3) & 0x8000U) == 0) {
          iVar9 = fn_82CE5410();
          if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
            fn_82CE63B0(*(unsigned int *)(iVar9 + 0x10),param_5,8);
          }
          iVar9 = param_5[1];
          param_5[1] = iVar9 + 1;
          puVar13 = (unsigned int *)(iVar9 * 8 + *param_5);
          *puVar13 = *(unsigned int *)(puVar19 + 6);
          puVar13[1] = *(unsigned int *)(psVar22 + 6);
        }
      }
      else {
        psVar22[2] = psVar22[2] + -1;
      }
      uVar1 = *(unsigned short *)(puVar25 + 2);
      puVar25 = puVar25 + 1;
    }
    puVar21 = (unsigned short *)(puVar26 + 1);
    uVar1 = *(unsigned short *)(puVar26 + 1);
    while (uVar18 == uVar1) {
      uVar1 = puVar21[1];
      if ((uVar6 <= uVar1) || (uVar1 == 0)) break;
      uVar23 = uVar23 + 1;
      iVar9 = (unsigned int)uVar1 * 0x10 + iVar5;
      *puVar26 = *(unsigned int *)puVar21;
      puVar26 = puVar26 + 1;
      *(short *)(iVar9 + 4) = *(short *)(iVar9 + 4) + -1;
      puVar21 = puVar21 + 2;
      uVar1 = *puVar21;
    }
    uVar14 = (unsigned int)*(unsigned short *)(puVar26 + -1);
    if (uVar18 < uVar14) {
      puVar21 = (unsigned short *)((int)puVar26 + 2);
      do {
        uVar1 = puVar21[-2];
        uVar23 = uVar23 - 1;
        *puVar26 = *(unsigned int *)(puVar21 + -3);
        psVar22 = (short *)((unsigned int)uVar1 * 0x10 + iVar5);
        puVar26 = puVar26 + -1;
        if ((uVar14 & 1) == 0) {
          uVar1 = puVar19[1];
          uVar24 = puVar19[3];
          uVar2 = puVar19[5];
          uVar3 = puVar19[4];
          *psVar22 = *psVar22 + 1;
          if ((((__int64)psVar22[3] - (__int64)(short)uVar1 |
                (__int64)(short)uVar24 - (__int64)psVar22[1] |
                (__int64)(short)uVar2 - (__int64)psVar22[4] |
               (__int64)psVar22[5] - (__int64)(short)uVar3) & 0x8000U) == 0) {
            iVar9 = fn_82CE5410();
            if (param_6[1] == (param_6[2] & 0x3fffffffU)) {
              fn_82CE63B0(*(unsigned int *)(iVar9 + 0x10),param_6,8);
            }
            iVar9 = param_6[1];
            param_6[1] = iVar9 + 1;
            puVar25 = (unsigned int *)(iVar9 * 8 + *param_6);
            *puVar25 = *(unsigned int *)(puVar19 + 6);
            puVar25[1] = *(unsigned int *)(psVar22 + 6);
          }
        }
        else {
          psVar22[2] = psVar22[2] + 1;
        }
        uVar14 = (unsigned int)puVar21[-5];
        puVar21 = puVar21 + -2;
      } while (uVar18 < uVar14);
    }
    uVar24 = (unsigned short)uVar23;
    puVar21 = (unsigned short *)(puVar26 + -1);
    uVar1 = *(unsigned short *)(puVar26 + -1);
    while (uVar18 == uVar1) {
      uVar24 = (unsigned short)uVar23;
      if (puVar21[1] <= uVar6) break;
      uVar23 = uVar23 - 1;
      uVar24 = (unsigned short)uVar23;
      iVar9 = (unsigned int)puVar21[1] * 0x10 + iVar5;
      *puVar26 = *(unsigned int *)puVar21;
      puVar26 = puVar26 + -1;
      *(short *)(iVar9 + 4) = *(short *)(iVar9 + 4) + 1;
      puVar21 = puVar21 + -2;
      uVar1 = *puVar21;
    }
    puVar19[2] = uVar24;
    *(short *)puVar26 = (short)uVar18;
    *(unsigned short *)((int)puVar26 + 2) = uVar8;
    uVar23 = (unsigned int)*puVar19;
    puVar26 = (unsigned int *)(uVar23 * 4 + *(int *)(param_1 + 0xb8));
    uVar1 = *(unsigned short *)(puVar26 + 1);
    puVar25 = puVar26;
    while (uVar1 < uVar15) {
      uVar23 = uVar23 + 1;
      psVar22 = (short *)((unsigned int)*(unsigned short *)((int)puVar25 + 6) * 0x10 + iVar5);
      *puVar26 = puVar25[1];
      puVar26 = puVar26 + 1;
      if ((uVar1 & 1) == 0) {
        *psVar22 = *psVar22 + -1;
      }
      else {
        uVar1 = puVar19[1];
        uVar24 = puVar19[3];
        uVar2 = puVar19[5];
        uVar3 = puVar19[4];
        psVar22[2] = psVar22[2] + -1;
        if ((((__int64)psVar22[3] - (__int64)(short)uVar1 |
              (__int64)(short)uVar24 - (__int64)psVar22[1] |
              (__int64)(short)uVar2 - (__int64)psVar22[4] |
             (__int64)psVar22[5] - (__int64)(short)uVar3) & 0x8000U) == 0) {
          iVar9 = fn_82CE5410();
          if (param_6[1] == (param_6[2] & 0x3fffffffU)) {
            fn_82CE63B0(*(unsigned int *)(iVar9 + 0x10),param_6,8);
          }
          iVar9 = param_6[1];
          param_6[1] = iVar9 + 1;
          puVar13 = (unsigned int *)(iVar9 * 8 + *param_6);
          *puVar13 = *(unsigned int *)(puVar19 + 6);
          puVar13[1] = *(unsigned int *)(psVar22 + 6);
        }
      }
      uVar1 = *(unsigned short *)(puVar25 + 2);
      puVar25 = puVar25 + 1;
    }
    uVar24 = (unsigned short)uVar23;
    puVar21 = (unsigned short *)(puVar26 + 1);
    uVar1 = *(unsigned short *)(puVar26 + 1);
    while (uVar15 == uVar1) {
      uVar24 = (unsigned short)uVar23;
      if (uVar6 <= puVar21[1]) break;
      iVar9 = (unsigned int)puVar21[1] * 0x10;
      uVar23 = uVar23 + 1;
      uVar24 = (unsigned short)uVar23;
      *puVar26 = *(unsigned int *)puVar21;
      puVar26 = puVar26 + 1;
      *(short *)(iVar9 + iVar5) = *(short *)(iVar9 + iVar5) + -1;
      puVar21 = puVar21 + 2;
      uVar1 = *puVar21;
    }
    *puVar19 = uVar24;
    *(unsigned short *)((int)puVar26 + 2) = uVar8;
    *(short *)puVar26 = (short)uVar15;
    uVar23 = (unsigned int)puVar19[1];
    puVar26 = (unsigned int *)(uVar23 * 4 + *(int *)(param_1 + 0xc4));
    uVar1 = *(unsigned short *)(puVar26 + -1);
    puVar25 = puVar26;
    while (uVar24 = (unsigned short)uVar23, uVar16 < uVar1) {
      psVar22 = (short *)((unsigned int)*(unsigned short *)((int)puVar25 + -2) * 0x10 + iVar5);
      *puVar26 = puVar25[-1];
      puVar26 = puVar26 + -1;
      if ((uVar1 & 1) == 0) {
        psVar22[1] = uVar24;
      }
      else {
        uVar1 = puVar19[5];
        uVar2 = *puVar19;
        uVar3 = puVar19[4];
        uVar4 = puVar19[2];
        psVar22[3] = uVar24;
        if (((uVar1 - psVar22[4] | psVar22[2] - uVar2 | psVar22[5] - uVar3 | uVar4 - *psVar22) &
            0x8000) == 0) {
          iVar9 = fn_82CE5410();
          if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
            fn_82CE63B0(*(unsigned int *)(iVar9 + 0x10),param_5,8);
          }
          iVar9 = param_5[1];
          param_5[1] = iVar9 + 1;
          puVar13 = (unsigned int *)(iVar9 * 8 + *param_5);
          *puVar13 = *(unsigned int *)(puVar19 + 6);
          puVar13[1] = *(unsigned int *)(psVar22 + 6);
        }
      }
      uVar23 = uVar23 - 1;
      uVar1 = *(unsigned short *)(puVar25 + -2);
      puVar25 = puVar25 + -1;
    }
    puVar21 = (unsigned short *)(puVar26 + -1);
    uVar1 = *(unsigned short *)(puVar26 + -1);
    while (uVar16 == uVar1) {
      uVar24 = (unsigned short)uVar23;
      uVar1 = puVar21[1];
      if (uVar1 <= uVar6) break;
      uVar23 = uVar23 - 1;
      *puVar26 = *(unsigned int *)puVar21;
      puVar26 = puVar26 + -1;
      *(unsigned short *)((unsigned int)uVar1 * 0x10 + iVar5 + 2) = uVar24;
      puVar21 = puVar21 + -2;
      uVar24 = (unsigned short)uVar23;
      uVar1 = *puVar21;
    }
    *(unsigned short *)((int)puVar26 + 2) = uVar8;
    *(short *)puVar26 = (short)uVar16;
    puVar19[1] = uVar24;
    uVar23 = (unsigned int)puVar19[3];
    puVar26 = (unsigned int *)(uVar23 * 4 + *(int *)(param_1 + 0xc4));
    uVar1 = *(unsigned short *)(puVar26 + 1);
    puVar25 = puVar26;
    while (uVar1 < uVar17) {
      uVar23 = uVar23 + 1;
      *puVar26 = puVar25[1];
      puVar26 = puVar26 + 1;
      psVar22 = (short *)((unsigned int)*(unsigned short *)((int)puVar25 + 6) * 0x10 + iVar5);
      if ((uVar1 & 1) == 0) {
        uVar1 = puVar19[5];
        uVar24 = *puVar19;
        uVar2 = puVar19[4];
        uVar3 = puVar19[2];
        psVar22[1] = psVar22[1] + -1;
        if (((uVar1 - psVar22[4] | psVar22[2] - uVar24 | psVar22[5] - uVar2 | uVar3 - *psVar22) &
            0x8000) == 0) {
          iVar9 = fn_82CE5410();
          if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
            fn_82CE63B0(*(unsigned int *)(iVar9 + 0x10),param_5,8);
          }
          iVar9 = param_5[1];
          param_5[1] = iVar9 + 1;
          puVar13 = (unsigned int *)(iVar9 * 8 + *param_5);
          *puVar13 = *(unsigned int *)(puVar19 + 6);
          puVar13[1] = *(unsigned int *)(psVar22 + 6);
        }
      }
      else {
        psVar22[3] = psVar22[3] + -1;
      }
      uVar1 = *(unsigned short *)(puVar25 + 2);
      puVar25 = puVar25 + 1;
    }
    uVar1 = *(unsigned short *)(puVar26 + 1);
    puVar21 = (unsigned short *)(puVar26 + 1);
    while (((uVar17 == uVar1 && (uVar15 = (unsigned int)puVar21[1], uVar15 < uVar6)) && (uVar15 != 0))) {
      uVar23 = uVar23 + 1;
      iVar9 = uVar15 * 0x10 + iVar5;
      *puVar26 = *(unsigned int *)puVar21;
      puVar26 = puVar26 + 1;
      *(short *)(iVar9 + 6) = *(short *)(iVar9 + 6) + -1;
      puVar21 = puVar21 + 2;
      uVar1 = *puVar21;
    }
    uVar15 = (unsigned int)*(unsigned short *)(puVar26 + -1);
    if (uVar17 < uVar15) {
      puVar21 = (unsigned short *)((int)puVar26 + 2);
      do {
        uVar1 = puVar21[-2];
        uVar23 = uVar23 - 1;
        *puVar26 = *(unsigned int *)(puVar21 + -3);
        psVar22 = (short *)((unsigned int)uVar1 * 0x10 + iVar5);
        puVar26 = puVar26 + -1;
        if ((uVar15 & 1) == 0) {
          uVar1 = puVar19[5];
          uVar24 = *puVar19;
          uVar2 = puVar19[4];
          uVar3 = puVar19[2];
          psVar22[1] = psVar22[1] + 1;
          if (((uVar1 - psVar22[4] | psVar22[2] - uVar24 | psVar22[5] - uVar2 | uVar3 - *psVar22) &
              0x8000) == 0) {
            iVar9 = fn_82CE5410();
            if (param_6[1] == (param_6[2] & 0x3fffffffU)) {
              fn_82CE63B0(*(unsigned int *)(iVar9 + 0x10),param_6,8);
            }
            iVar9 = param_6[1];
            param_6[1] = iVar9 + 1;
            puVar25 = (unsigned int *)(iVar9 * 8 + *param_6);
            *puVar25 = *(unsigned int *)(puVar19 + 6);
            puVar25[1] = *(unsigned int *)(psVar22 + 6);
          }
        }
        else {
          psVar22[3] = psVar22[3] + 1;
        }
        uVar15 = (unsigned int)puVar21[-5];
        puVar21 = puVar21 + -2;
      } while (uVar17 < uVar15);
    }
    uVar24 = (unsigned short)uVar23;
    puVar21 = (unsigned short *)(puVar26 + -1);
    uVar1 = *(unsigned short *)(puVar26 + -1);
    while (uVar17 == uVar1) {
      uVar24 = (unsigned short)uVar23;
      if (puVar21[1] <= uVar6) break;
      uVar23 = uVar23 - 1;
      uVar24 = (unsigned short)uVar23;
      iVar9 = (unsigned int)puVar21[1] * 0x10 + iVar5;
      *puVar26 = *(unsigned int *)puVar21;
      puVar26 = puVar26 + -1;
      *(short *)(iVar9 + 6) = *(short *)(iVar9 + 6) + 1;
      puVar21 = puVar21 + -2;
      uVar1 = *puVar21;
    }
    puVar19[3] = uVar24;
    *(short *)puVar26 = (short)uVar17;
    *(unsigned short *)((int)puVar26 + 2) = uVar8;
    uVar23 = (unsigned int)puVar19[1];
    puVar26 = (unsigned int *)(uVar23 * 4 + *(int *)(param_1 + 0xc4));
    uVar1 = *(unsigned short *)(puVar26 + 1);
    puVar25 = puVar26;
    while (uVar1 < uVar16) {
      uVar23 = uVar23 + 1;
      psVar22 = (short *)((unsigned int)*(unsigned short *)((int)puVar25 + 6) * 0x10 + iVar5);
      *puVar26 = puVar25[1];
      puVar26 = puVar26 + 1;
      if ((uVar1 & 1) == 0) {
        psVar22[1] = psVar22[1] + -1;
      }
      else {
        uVar1 = puVar19[5];
        uVar24 = *puVar19;
        uVar2 = puVar19[4];
        uVar3 = puVar19[2];
        psVar22[3] = psVar22[3] + -1;
        if (((uVar1 - psVar22[4] | psVar22[2] - uVar24 | psVar22[5] - uVar2 | uVar3 - *psVar22) &
            0x8000) == 0) {
          iVar9 = fn_82CE5410();
          if (param_6[1] == (param_6[2] & 0x3fffffffU)) {
            fn_82CE63B0(*(unsigned int *)(iVar9 + 0x10),param_6,8);
          }
          iVar9 = param_6[1];
          param_6[1] = iVar9 + 1;
          puVar13 = (unsigned int *)(iVar9 * 8 + *param_6);
          *puVar13 = *(unsigned int *)(puVar19 + 6);
          puVar13[1] = *(unsigned int *)(psVar22 + 6);
        }
      }
      uVar1 = *(unsigned short *)(puVar25 + 2);
      puVar25 = puVar25 + 1;
    }
    uVar24 = (unsigned short)uVar23;
    puVar21 = (unsigned short *)(puVar26 + 1);
    uVar1 = *(unsigned short *)(puVar26 + 1);
    while (uVar16 == uVar1) {
      uVar24 = (unsigned short)uVar23;
      if (uVar6 <= puVar21[1]) break;
      uVar23 = uVar23 + 1;
      uVar24 = (unsigned short)uVar23;
      iVar9 = (unsigned int)puVar21[1] * 0x10 + iVar5;
      *puVar26 = *(unsigned int *)puVar21;
      puVar26 = puVar26 + 1;
      *(short *)(iVar9 + 2) = *(short *)(iVar9 + 2) + -1;
      puVar21 = puVar21 + 2;
      uVar1 = *puVar21;
    }
    param_2 = param_2 + 1;
    iStack00000024 = iStack00000024 + 0x20;
    puVar19[1] = uVar24;
    *(unsigned short *)((int)puVar26 + 2) = uVar8;
    *(short *)puVar26 = (short)uVar16;
  } while( true );
}

