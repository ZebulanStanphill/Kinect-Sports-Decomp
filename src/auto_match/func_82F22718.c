#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int iStack_b0;
extern unsigned int iStack_b8;


void fn_82F22718(int param_1,unsigned __int64 param_2,int param_3,int param_4,unsigned __int64 param_5,
                  unsigned char *param_6,unsigned char *param_7,unsigned char *param_8)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned char bVar7;
  unsigned char bVar8;
  unsigned __int64 uVar9;
  unsigned char *pbVar10;
  unsigned __int64 uVar11;
  unsigned char bVar12;
  unsigned char *pbVar13;
  unsigned char bVar14;
  int iVar15;
  unsigned char bVar16;
  unsigned char *pbVar17;
  unsigned __int64 uVar18;
  unsigned char bVar19;
  unsigned char bVar20;
  unsigned char bVar21;
  unsigned char bVar23;
  __int64 lVar22;
  unsigned char *pbVar24;
  unsigned __int64 uVar25;
  unsigned int uVar26;
  unsigned char bVar27;
  unsigned char *pbStack00000024;
  unsigned char *pbStack0000002c;
  unsigned char *pbStack0000003c;
  unsigned char *pbStack00000044;
  unsigned char *pbStack0000004c;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  int in_stack_00000064;
  unsigned char *pbStack_c0;
  unsigned char *pbStack_bc;
  int iStack_b8;
  int iStack_b0;
  
  pbStack_bc = (unsigned char *)param_5;
  uVar25 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d0) + 1 & 0xffffffff) >> 1;
  pbStack_c0 = (unsigned char *)param_2;
  uVar11 = uVar25 + param_5;
  uVar25 = uVar25 + param_2;
  if (in_stack_00000064 == 0) {
    uVar18 = (unsigned __int64)in_stack_00000054;
  }
  else {
    uVar26 = *(unsigned int *)(param_1 + 0x2d0);
    uVar18 = 1;
    iVar15 = 0;
    uVar25 = param_2;
    if (0 < (int)(uVar26 & 0xfffffffc)) {
      do {
        bVar16 = param_8[9];
        bVar27 = param_8[8];
        bVar19 = param_8[3];
        bVar20 = param_8[10];
        bVar23 = param_8[0xb];
        bVar12 = param_8[2];
        bVar14 = param_8[4];
        bVar21 = param_8[5];
        *(unsigned char *)param_5 =
             *param_8 & 0xc0 |
             (char)param_8[7] >> 6 & 3U |
             (char)param_8[6] >> 4 & 0xcU | (char)param_8[1] >> 2 & 0x30U;
        *(unsigned char *)uVar11 =
             bVar12 & 0xc0 |
             (char)bVar19 >> 2 & 0x30U | (char)bVar27 >> 4 & 0xcU | (char)bVar16 >> 6 & 3U;
        *(unsigned char *)param_2 =
             (((bVar12 & 0xfc) << 2 | bVar19 & 0xf) & 0x3c) << 2 | (unsigned char)((int)(bVar16 & 0xc) >> 2)
             | bVar27 & 0xc;
        bVar16 = param_8[0x14];
        bVar27 = param_8[0xf];
        bVar19 = param_8[0xe];
        bVar12 = param_8[0x15];
        bVar1 = param_8[0x17];
        bVar2 = param_8[0x11];
        bVar3 = param_8[0x16];
        bVar4 = param_8[0x10];
        ((unsigned char *)param_5)[1] =
             param_8[0xc] & 0xc0 |
             (char)param_8[0x13] >> 6 & 3U |
             (char)param_8[0x12] >> 4 & 0xcU | (char)param_8[0xd] >> 2 & 0x30U;
        ((unsigned char *)uVar11)[1] =
             bVar19 & 0xc0 |
             (char)bVar27 >> 2 & 0x30U | (char)bVar16 >> 4 & 0xcU | (char)bVar12 >> 6 & 3U;
        ((unsigned char *)param_2)[1] =
             (((bVar19 & 0xfc) << 2 | bVar27 & 0xf) & 0x3c) << 2 | (unsigned char)((int)(bVar12 & 0xc) >> 2)
             | bVar16 & 0xc;
        *param_6 = (char)bVar3 >> 6 & 3U | (char)bVar4 >> 4 & 0xcU |
                   (char)bVar20 >> 2 & 0x30U | bVar14 & 0xc0;
        iVar15 = iVar15 + 1;
        *param_7 = (char)bVar1 >> 6 & 3U | (char)bVar2 >> 4 & 0xcU |
                   (char)bVar23 >> 2 & 0x30U | bVar21 & 0xc0;
        param_5 = param_5 + 2;
        pbStack_bc = (unsigned char *)param_5;
        uVar26 = *(unsigned int *)(param_1 + 0x2d0);
        uVar11 = uVar11 + 2;
        param_2 = param_2 + 2;
        param_6 = param_6 + 1;
        param_7 = param_7 + 1;
        param_8 = param_8 + 0x18;
      } while (iVar15 < (int)uVar26 >> 2);
      pbStack_c0 = (unsigned char *)param_2;
      uVar25 = param_2;
    }
    param_2 = uVar25;
    param_5 = uVar11;
    if ((uVar26 & 3) != 0) {
      bVar23 = *param_8 & 0xc0 | (char)param_8[1] >> 2 & 0x30U;
      bVar19 = (((param_8[2] & 0xfc) << 2 | param_8[3] & 0xf) & 0x3c) << 2;
      bVar20 = (char)param_8[3] >> 2 & 0x30U | param_8[2] & 0xc0;
      bVar16 = param_8[4] & 0xc0;
      bVar27 = param_8[5] & 0xc0;
      pbVar13 = param_8 + 6;
      if ((uVar26 & 2) == 2) {
        bVar23 = (char)*pbVar13 >> 4 & 0xcU | (char)param_8[7] >> 6 & 3U | bVar23;
        bVar20 = (char)param_8[8] >> 4 & 0xcU | (char)param_8[9] >> 6 & 3U | bVar20;
        bVar19 = (unsigned char)((int)(param_8[9] & 0xc) >> 2) | param_8[8] & 0xc | bVar19;
        bVar16 = (char)param_8[10] >> 2 & 0x30U | bVar16;
        bVar27 = (char)param_8[0xb] >> 2 & 0x30U | bVar27;
        pbVar13 = param_8 + 0xc;
      }
      *pbStack_bc = bVar23;
      *(unsigned char *)uVar11 = bVar20;
      param_5 = uVar11 + 1;
      *(unsigned char *)uVar25 = bVar19;
      param_2 = uVar25 + 1;
      pbStack_c0 = (unsigned char *)param_2;
      if ((*(unsigned int *)(param_1 + 0x2d0) & 3) == 3) {
        bVar19 = pbVar13[3];
        bVar20 = pbVar13[2];
        bVar23 = pbVar13[4];
        bVar12 = pbVar13[5];
        pbStack_bc[1] = *pbVar13 & 0xc0 | (char)pbVar13[1] >> 2 & 0x30U;
        *(unsigned char *)param_5 = (char)bVar19 >> 2 & 0x30U | bVar20 & 0xc0;
        *pbStack_c0 = (((bVar20 & 0xfc) << 2 | bVar19 & 0xf) & 0x3c) << 2;
        param_2 = uVar25 + 2;
        bVar16 = (char)bVar23 >> 4 & 0xcU | bVar16;
        bVar27 = (char)bVar12 >> 4 & 0xcU | bVar27;
        pbStack_c0 = (unsigned char *)param_2;
        pbVar13 = pbVar13 + 6;
        param_5 = uVar11 + 2;
      }
      *param_6 = bVar16;
      param_6 = param_6 + 1;
      *param_7 = bVar27;
      param_7 = param_7 + 1;
      param_8 = pbVar13;
    }
    pbStack_bc = (unsigned char *)param_5;
    uVar11 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d0) + 1 & 0xffffffff) >> 1;
    uVar25 = uVar11 + param_2;
    uVar11 = uVar11 + param_5;
  }
  if ((int)uVar18 < (int)in_stack_0000005c) {
    lVar22 = in_stack_0000005c - uVar18;
    pbVar13 = (unsigned char *)(param_3 + -1);
    pbVar17 = (unsigned char *)(param_4 + -1);
    param_6 = param_6 + -1;
    param_7 = param_7 + -1;
    param_8 = param_8 + -1;
    pbStack00000024 = pbVar13;
    pbStack0000002c = pbVar17;
    pbStack0000003c = param_6;
    pbStack00000044 = param_7;
    pbStack0000004c = param_8;
    uVar18 = uVar11;
    uVar9 = uVar25;
    do {
      uVar26 = *(unsigned int *)(param_1 + 0x2d0);
      iVar15 = 0;
      pbVar24 = (unsigned char *)param_5;
      pbVar10 = (unsigned char *)param_2;
      if (0 < (int)(uVar26 & 0xfffffffc)) {
        do {
          bVar16 = param_8[8];
          bVar27 = param_8[10];
          bVar19 = param_8[9];
          bVar20 = param_8[4];
          bVar23 = param_8[0xb];
          bVar12 = param_8[0xc];
          bVar14 = param_8[7];
          bVar21 = param_8[2];
          bVar1 = param_8[3];
          bVar2 = param_8[1];
          bVar3 = param_8[5];
          bVar4 = param_8[6];
          *(unsigned char *)param_5 =
               bVar2 & 0xc0 |
               (char)bVar21 >> 2 & 0x30U | (char)bVar16 >> 6 & 3U | (char)bVar14 >> 4 & 0xcU;
          *(unsigned char *)uVar11 =
               bVar1 & 0xc0 |
               (char)bVar20 >> 2 & 0x30U | (char)bVar19 >> 4 & 0xcU | (char)bVar27 >> 6 & 3U;
          *(unsigned char *)param_2 =
               (((bVar2 & 0xfc) << 2 | bVar21 & 0xf) & 0x3c) << 2 | (unsigned char)((int)(bVar16 & 0xc) >> 2)
               | bVar14 & 0xc;
          *(unsigned char *)uVar25 =
               (((bVar1 & 0xfc) << 2 | bVar20 & 0xf) & 0x3c) << 2 | (unsigned char)((int)(bVar27 & 0xc) >> 2)
               | bVar19 & 0xc;
          bVar16 = param_8[0xd];
          bVar27 = param_8[0x14];
          bVar19 = param_8[0x16];
          bVar20 = param_8[0x11];
          bVar14 = param_8[0x18];
          bVar21 = param_8[0x10];
          bVar1 = param_8[0x15];
          bVar2 = param_8[0x17];
          bVar5 = param_8[0x12];
          bVar6 = param_8[0x13];
          bVar7 = param_8[0xf];
          bVar8 = param_8[0xe];
          pbStack_bc[1] =
               bVar16 & 0xc0 |
               (char)bVar8 >> 2 & 0x30U | (char)bVar27 >> 6 & 3U | (char)bVar6 >> 4 & 0xcU;
          param_5 = ZEXT48(pbStack_bc) + 2;
          iStack_b8 = (int)uVar18;
          pbStack_bc = (unsigned char *)param_5;
          *(unsigned char *)(iStack_b8 + 1) =
               bVar7 & 0xc0 |
               (char)bVar21 >> 2 & 0x30U | (char)bVar1 >> 4 & 0xcU | (char)bVar19 >> 6 & 3U;
          uVar11 = (uVar18 & 0xffffffff) + 2;
          uVar18 = uVar11 & 0xffffffff;
          pbStack_c0[1] =
               (((bVar16 & 0xfc) << 2 | bVar8 & 0xf) & 0x3c) << 2 | (unsigned char)((int)(bVar27 & 0xc) >> 2)
               | bVar6 & 0xc;
          iVar15 = iVar15 + 1;
          param_2 = ZEXT48(pbStack_c0) + 2;
          iStack_b0 = (int)uVar9;
          param_8 = pbStack0000004c + 0x18;
          pbStack_c0 = (unsigned char *)param_2;
          *(unsigned char *)(iStack_b0 + 1) =
               (((bVar7 & 0xfc) << 2 | bVar21 & 0xf) & 0x3c) << 2 | (unsigned char)((int)(bVar19 & 0xc) >> 2)
               | bVar1 & 0xc;
          uVar25 = (uVar9 & 0xffffffff) + 2;
          uVar9 = uVar25 & 0xffffffff;
          pbVar13 = pbStack00000024 + 1;
          pbStack00000024[1] =
               (unsigned char)((int)(bVar2 & 0xc) >> 2) | bVar20 & 0xc |
               (((bVar3 & 0xfc) << 2 | bVar23 & 0xf) & 0x3c) << 2;
          pbVar17 = pbStack0000002c + 1;
          pbStack0000002c[1] =
               (unsigned char)((int)(bVar14 & 0xc) >> 2) | bVar5 & 0xc |
               (((bVar4 & 0xfc) << 2 | bVar12 & 0xf) & 0x3c) << 2;
          param_6 = pbStack0000003c + 1;
          pbStack0000003c[1] =
               (char)bVar20 >> 4 & 0xcU | (char)bVar2 >> 6 & 3U |
               (char)bVar23 >> 2 & 0x30U | bVar3 & 0xc0;
          param_7 = pbStack00000044 + 1;
          pbStack00000044[1] =
               (char)bVar5 >> 4 & 0xcU | (char)bVar14 >> 6 & 3U |
               (char)bVar12 >> 2 & 0x30U | bVar4 & 0xc0;
          uVar26 = *(unsigned int *)(param_1 + 0x2d0);
          pbStack00000024 = pbVar13;
          pbStack0000002c = pbVar17;
          pbStack0000003c = param_6;
          pbStack00000044 = param_7;
          pbStack0000004c = param_8;
          pbVar24 = pbStack_bc;
          pbVar10 = pbStack_c0;
        } while (iVar15 < (int)uVar26 >> 2);
      }
      param_5 = uVar11;
      param_2 = uVar25;
      if ((uVar26 & 3) != 0) {
        pbStack0000004c = param_8 + 6;
        bVar21 = (char)param_8[4] >> 2 & 0x30U | param_8[3] & 0xc0;
        bVar23 = param_8[1] & 0xc0 | (char)param_8[2] >> 2 & 0x30U;
        bVar19 = (((param_8[1] & 0xfc) << 2 | param_8[2] & 0xf) & 0x3c) << 2;
        bVar20 = (((param_8[3] & 0xfc) << 2 | param_8[4] & 0xf) & 0x3c) << 2;
        bVar14 = param_8[5] & 0xc0;
        bVar12 = param_8[6] & 0xc0;
        bVar16 = (param_8[5] & 0xc) << 4;
        bVar27 = (param_8[6] & 0xc) << 4;
        if ((uVar26 & 2) == 2) {
          bVar16 = (param_8[0xb] & 0xc) << 2 | bVar16;
          bVar27 = (param_8[0xc] & 0xc) << 2 | bVar27;
          pbStack0000004c = param_8 + 0xc;
          bVar23 = (char)param_8[7] >> 4 & 0xcU | (char)param_8[8] >> 6 & 3U | bVar23;
          bVar19 = (unsigned char)((int)(param_8[8] & 0xc) >> 2) | param_8[7] & 0xc | bVar19;
          bVar21 = (char)param_8[9] >> 4 & 0xcU | (char)param_8[10] >> 6 & 3U | bVar21;
          bVar20 = (unsigned char)((int)(param_8[10] & 0xc) >> 2) | param_8[9] & 0xc | bVar20;
          bVar14 = (char)param_8[0xb] >> 2 & 0x30U | bVar14;
          bVar12 = (char)param_8[0xc] >> 2 & 0x30U | bVar12;
          pbVar17 = pbStack0000002c;
          param_6 = pbStack0000003c;
          param_7 = pbStack00000044;
        }
        *pbVar24 = bVar23;
        *(unsigned char *)uVar11 = bVar21;
        param_5 = uVar11 + 1;
        *pbVar10 = bVar19;
        *(unsigned char *)uVar25 = bVar20;
        param_2 = uVar25 + 1;
        if ((*(unsigned int *)(param_1 + 0x2d0) & 3) == 3) {
          bVar19 = pbStack0000004c[2];
          bVar20 = pbStack0000004c[4];
          bVar23 = pbStack0000004c[3];
          bVar21 = pbStack0000004c[1];
          bVar1 = pbStack0000004c[5];
          pbStack0000004c = pbStack0000004c + 6;
          bVar2 = *pbStack0000004c;
          pbVar24[1] = bVar21 & 0xc0 | (char)bVar19 >> 2 & 0x30U;
          *(unsigned char *)param_5 = (char)bVar20 >> 2 & 0x30U | bVar23 & 0xc0;
          pbVar10[1] = (((bVar21 & 0xfc) << 2 | bVar19 & 0xf) & 0x3c) << 2;
          *(char *)param_2 = (((bVar23 & 0xfc) << 2 | bVar20 & 0xf) & 0x3c) << 2;
          bVar12 = (char)bVar2 >> 4 & 0xcU | bVar12;
          bVar14 = (char)bVar1 >> 4 & 0xcU | bVar14;
          bVar16 = bVar1 & 0xc | bVar16;
          bVar27 = bVar2 & 0xc | bVar27;
          param_5 = uVar11 + 2;
          param_2 = uVar25 + 2;
        }
        pbVar13 = pbVar13 + 1;
        *pbVar13 = bVar16;
        pbVar17 = pbVar17 + 1;
        *pbVar17 = bVar27;
        param_6 = param_6 + 1;
        *param_6 = bVar14;
        param_7 = param_7 + 1;
        *param_7 = bVar12;
        param_8 = pbStack0000004c;
        pbStack00000024 = pbVar13;
        pbStack0000002c = pbVar17;
        pbStack0000003c = param_6;
        pbStack00000044 = param_7;
      }
      pbStack_bc = (unsigned char *)param_5;
      pbStack_c0 = (unsigned char *)param_2;
      uVar25 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d0) + 1 & 0xffffffff) >> 1;
      uVar11 = uVar25 + param_5;
      uVar25 = uVar25 + param_2;
      uVar18 = uVar11 & 0xffffffff;
      uVar9 = uVar25 & 0xffffffff;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  return;
}

