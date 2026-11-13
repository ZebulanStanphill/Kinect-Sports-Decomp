extern unsigned char bRam00000000;
extern unsigned char bRam00000001;
extern unsigned int iStack_b0;


void fn_82F230D8(int param_1,unsigned char *param_2,int param_3,int param_4,unsigned char *param_5,unsigned char *param_6,
                  unsigned char *param_7,unsigned char *param_8)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned char bVar9;
  unsigned char *pbVar7;
  unsigned char *pbVar8;
  unsigned char bVar10;
  int iVar11;
  unsigned char *pbVar12;
  unsigned __int64 uVar13;
  unsigned char *pbVar14;
  int iVar15;
  unsigned char *pbVar16;
  unsigned char bVar17;
  unsigned char bVar18;
  unsigned char bVar19;
  unsigned char bVar20;
  unsigned char bVar21;
  unsigned char bVar22;
  unsigned char *pbVar23;
  unsigned char *pbVar24;
  unsigned char *pbVar25;
  unsigned __int64 uVar26;
  unsigned char *pbStack00000024;
  unsigned char *pbStack0000002c;
  unsigned char *pbStack0000003c;
  unsigned char *pbStack00000044;
  unsigned int in_stack_00000054;
  int iStack_b0;
  
  iVar5 = (int)(in_stack_00000054 + 1) >> 1;
  uVar6 = (int)in_stack_00000054 >> 2;
  uVar13 = (unsigned __int64)(int)uVar6;
  pbVar23 = param_5 + iVar5;
  uVar26 = uVar13;
  pbVar16 = param_8;
  if (0 < (__int64)uVar13) {
    do {
      bVar20 = pbVar16[1];
      bVar9 = pbVar16[3];
      bVar22 = pbVar16[4];
      bVar17 = pbVar16[5];
      pbVar14 = pbVar16 + *(int *)(param_1 + 0x2d0) * 6;
      bVar18 = pbVar14[3];
      bVar19 = pbVar14[1];
      bVar10 = pbVar14[4];
      bVar21 = pbVar14[5];
      *param_5 = (char)((unsigned char)((int)(pbVar14[2] & 0x30) >> 2) | *pbVar14 & 0x30) >> 2 |
                 (*pbVar16 & 0xf0) << 2 | pbVar16[2] & 0x30;
      *pbVar23 = (char)((unsigned char)((int)(bVar18 & 0x30) >> 2) | bVar19 & 0x30) >> 2 |
                 (unsigned char)(((unsigned __int64)bVar20 & 0xf0) << 2) | bVar9 & 0x30;
      *param_2 = (bVar19 & 3) << 2 | bVar18 & 3 |
                 (unsigned char)(((unsigned __int64)bVar20 << 2 | (unsigned __int64)bVar9 & 0xfffffffffffffc03) << 4);
      iVar15 = *(int *)(param_1 + 0x2d0) * 6;
      pbVar14 = pbVar14 + iVar15;
      bVar20 = pbVar14[4];
      bVar9 = pbVar14[1];
      bVar18 = pbVar14[3];
      bVar19 = pbVar14[5];
      pbVar16 = pbVar14 + iVar15;
      bVar1 = pbVar16[4];
      bVar2 = pbVar16[1];
      bVar3 = pbVar16[3];
      bVar4 = pbVar16[5];
      iVar15 = *(int *)(param_1 + 0x2d0);
      param_5[1] = (char)((unsigned char)((int)(pbVar16[2] & 0x30) >> 2) | *pbVar16 & 0x30) >> 2 |
                   (*pbVar14 & 0xf0) << 2 | pbVar14[2] & 0x30;
      pbVar23[1] = (char)((unsigned char)((int)(bVar3 & 0x30) >> 2) | bVar2 & 0x30) >> 2 |
                   (unsigned char)(((unsigned __int64)bVar9 & 0xf0) << 2) | bVar18 & 0x30;
      param_2[1] = (bVar2 & 3) << 2 | bVar3 & 3 |
                   (unsigned char)(((unsigned __int64)bVar9 << 2 | (unsigned __int64)bVar18 & 0xfffffffffffffc03) << 4);
      *param_6 = (unsigned char)((int)(bVar1 & 0x30) >> 4) |
                 (unsigned char)((int)(bVar20 & 0x30) >> 2) | bVar10 & 0x30 | (bVar22 & 0x30) << 2;
      *param_7 = (unsigned char)((int)(bVar4 & 0x30) >> 4) |
                 (unsigned char)((int)(bVar19 & 0x30) >> 2) | bVar21 & 0x30 | (bVar17 & 0x30) << 2;
      param_5 = param_5 + 2;
      pbVar16 = pbVar16 + iVar15 * 6;
      pbVar23 = pbVar23 + 2;
      param_2 = param_2 + 2;
      param_6 = param_6 + 1;
      param_7 = param_7 + 1;
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
  }
  if ((in_stack_00000054 & 3) != 0) {
    iVar15 = *(int *)(param_1 + 0x2d0) * 6;
    bVar18 = (unsigned char)(((unsigned __int64)pbVar16[1] & 0xf0) << 2) | pbVar16[3] & 0x30;
    bVar20 = (*pbVar16 & 0xf0) << 2 | pbVar16[2] & 0x30;
    bVar17 = (unsigned char)((((unsigned __int64)pbVar16[1] & 3) << 2 | (unsigned __int64)pbVar16[3] & 0xfffffffffffffc03)
                   << 4);
    bVar9 = (pbVar16[4] & 0x30) << 2;
    bVar22 = (pbVar16[5] & 0x30) << 2;
    pbVar16 = pbVar16 + iVar15;
    if ((in_stack_00000054 & 2) == 2) {
      bVar17 = (pbVar16[1] & 3) << 2 | pbVar16[3] & 3 | bVar17;
      bVar20 = (char)((unsigned char)((int)(pbVar16[2] & 0x30) >> 2) | *pbVar16 & 0x30) >> 2 | bVar20;
      bVar18 = (char)((unsigned char)((int)(pbVar16[3] & 0x30) >> 2) | pbVar16[1] & 0x30) >> 2 | bVar18;
      bVar9 = pbVar16[4] & 0x30 | bVar9;
      bVar22 = pbVar16[5] & 0x30 | bVar22;
      pbVar16 = pbVar16 + iVar15;
    }
    *param_5 = bVar20;
    *pbVar23 = bVar18;
    *param_2 = bVar17;
    pbVar14 = pbVar23 + 1;
    pbVar7 = param_2 + 1;
    if ((in_stack_00000054 & 3) == 3) {
      bVar20 = pbVar16[1];
      bVar17 = pbVar16[3];
      bVar18 = pbVar16[4];
      bVar19 = pbVar16[5];
      param_5[1] = (*pbVar16 & 0xf0) << 2 | pbVar16[2] & 0x30;
      pbVar23[1] = (unsigned char)(((unsigned __int64)bVar20 & 0xf0) << 2) | bVar17 & 0x30;
      param_2[1] = (unsigned char)(((unsigned __int64)bVar20 << 2 | (unsigned __int64)bVar17 & 0xfffffffffffffc03) << 4);
      bVar9 = (unsigned char)((int)(bVar18 & 0x30) >> 2) | bVar9;
      bVar22 = (unsigned char)((int)(bVar19 & 0x30) >> 2) | bVar22;
      pbVar14 = pbVar23 + 2;
      pbVar7 = param_2 + 2;
    }
    param_2 = pbVar7;
    pbVar23 = pbVar14;
    *param_6 = bVar9;
    param_6 = param_6 + 1;
    *param_7 = bVar22;
    param_7 = param_7 + 1;
  }
  iStack_b0 = 1;
  if (1 < *(int *)(param_1 + 0x2d0)) {
    pbVar16 = (unsigned char *)(param_3 + -1);
    pbVar14 = (unsigned char *)(param_4 + -1);
    param_6 = param_6 + -1;
    param_7 = param_7 + -1;
    pbStack00000024 = pbVar16;
    pbStack0000002c = pbVar14;
    pbStack0000003c = param_6;
    pbStack00000044 = param_7;
    do {
      param_8 = param_8 + 6;
      pbVar24 = param_2 + iVar5;
      pbVar7 = pbVar23 + iVar5;
      pbVar12 = param_8;
      if (0 < (int)uVar13) {
        do {
          bVar20 = *pbVar12;
          bVar9 = pbVar12[4];
          bVar22 = pbVar12[5];
          bVar17 = pbVar12[2];
          pbVar16 = pbVar12 + *(int *)(param_1 + 0x2d0) * 6;
          bVar21 = *pbVar16;
          bVar18 = pbVar16[2];
          bVar19 = pbVar16[4];
          bVar10 = pbVar16[5];
          bRam00000000 = (pbVar16[1] & 3) << 2 | pbVar16[3] & 3 |
                         (unsigned char)(((unsigned __int64)pbVar12[1] << 2 |
                                (unsigned __int64)pbVar12[3] & 0xfffffffffffffc03) << 4);
          *pbVar7 = (char)((unsigned char)((int)(pbVar16[3] & 0x30) >> 2) | pbVar16[1] & 0x30) >> 2 |
                    (unsigned char)(((unsigned __int64)pbVar12[1] & 0xf0) << 2) | pbVar12[3] & 0x30;
          *param_2 = (bVar21 & 3) << 2 | bVar18 & 3 | (bVar20 << 2 | bVar17 & 3) << 4;
          iVar15 = *(int *)(param_1 + 0x2d0);
          iVar11 = *(int *)(param_1 + 0x2d0) * 6;
          pbVar16 = pbVar16 + iVar11;
          bVar4 = *pbVar16;
          bVar20 = pbVar16[2];
          bVar17 = pbVar16[4];
          bVar18 = pbVar16[5];
          pbVar12 = pbVar16 + iVar11;
          bVar21 = pbVar12[2];
          bVar1 = *pbVar12;
          bVar2 = pbVar12[4];
          bVar3 = pbVar12[5];
          bRam00000001 = (pbVar12[1] & 3) << 2 | pbVar12[3] & 3 |
                         (unsigned char)(((unsigned __int64)pbVar16[1] << 2 |
                                (unsigned __int64)pbVar16[3] & 0xfffffffffffffc03) << 4);
          pbVar7[1] = (char)((unsigned char)((int)(pbVar12[3] & 0x30) >> 2) | pbVar12[1] & 0x30) >> 2 |
                      (unsigned char)(((unsigned __int64)pbVar16[1] & 0xf0) << 2) | pbVar16[3] & 0x30;
          pbVar23 = (unsigned char *)0x2;
          param_2[1] = (bVar1 & 3) << 2 | bVar21 & 3 | (bVar4 << 2 | bVar20 & 3) << 4;
          pbVar16 = pbStack00000024 + 1;
          pbVar14 = pbStack0000002c + 1;
          param_6 = pbStack0000003c + 1;
          pbStack00000024[1] = bVar2 & 3 | (bVar17 & 3) << 2 | (bVar19 & 3) << 4 | bVar9 << 6;
          param_7 = pbStack00000044 + 1;
          pbVar24 = (unsigned char *)0x2;
          pbStack0000002c[1] = bVar3 & 3 | (bVar18 & 3) << 2 | (bVar10 & 3) << 4 | bVar22 << 6;
          pbStack0000003c[1] =
               (unsigned char)((int)(bVar2 & 0x30) >> 4) |
               (unsigned char)((int)(bVar17 & 0x30) >> 2) | bVar19 & 0x30 | (bVar9 & 0x30) << 2;
          pbVar12 = pbVar12 + iVar15 * 6;
          pbVar7 = pbVar7 + 2;
          pbStack00000044[1] =
               (unsigned char)((int)(bVar3 & 0x30) >> 4) |
               (unsigned char)((int)(bVar18 & 0x30) >> 2) | bVar10 & 0x30 | (bVar22 & 0x30) << 2;
          param_2 = param_2 + 2;
          uVar13 = uVar13 - 1;
          pbStack00000024 = pbVar16;
          pbStack0000002c = pbVar14;
          pbStack0000003c = param_6;
          pbStack00000044 = param_7;
        } while (uVar13 != 0);
        uVar13 = (unsigned __int64)uVar6;
      }
      if ((in_stack_00000054 & 3) != 0) {
        iVar15 = *(int *)(param_1 + 0x2d0) * 6;
        bVar10 = (unsigned char)(((unsigned __int64)*pbVar12 & 0xf0) << 2) | pbVar12[2] & 0x30;
        bVar18 = (unsigned char)((((unsigned __int64)*pbVar12 & 3) << 2 | (unsigned __int64)pbVar12[2] & 0xfffffffffffffc03
                        ) << 4);
        bVar21 = (unsigned char)(((unsigned __int64)pbVar12[1] & 0xf0) << 2) | pbVar12[3] & 0x30;
        bVar19 = (unsigned char)((((unsigned __int64)pbVar12[1] & 3) << 2 |
                        (unsigned __int64)pbVar12[3] & 0xfffffffffffffc03) << 4);
        bVar20 = (pbVar12[4] & 0x30) << 2;
        bVar9 = (pbVar12[5] & 0x30) << 2;
        bVar22 = pbVar12[4] << 6;
        bVar17 = pbVar12[5] << 6;
        pbVar12 = pbVar12 + iVar15;
        if ((in_stack_00000054 & 2) == 2) {
          uVar13 = (unsigned __int64)uVar6;
          bVar18 = (*pbVar12 & 3) << 2 | pbVar12[2] & 3 | bVar18;
          bVar19 = (pbVar12[1] & 3) << 2 | pbVar12[3] & 3 | bVar19;
          bVar22 = (pbVar12[4] & 3) << 4 | bVar22;
          bVar17 = (pbVar12[5] & 3) << 4 | bVar17;
          bVar10 = (char)((unsigned char)((int)(pbVar12[2] & 0x30) >> 2) | *pbVar12 & 0x30) >> 2 | bVar10;
          bVar21 = (char)((unsigned char)((int)(unsigned int)(pbVar12[3] & 0x30) >> 2) | pbVar12[1] & 0x30) >> 2 |
                   bVar21;
          bVar20 = pbVar12[4] & 0x30 | bVar20;
          bVar9 = pbVar12[5] & 0x30 | bVar9;
          pbVar12 = pbVar12 + iVar15;
          param_7 = pbStack00000044;
        }
        *pbVar23 = bVar10;
        *pbVar7 = bVar21;
        pbVar8 = pbVar7 + 1;
        *param_2 = bVar18;
        *pbVar24 = bVar19;
        pbVar25 = pbVar24 + 1;
        if ((in_stack_00000054 & 3) == 3) {
          bVar18 = pbVar12[2];
          bVar19 = pbVar12[3];
          bVar10 = *pbVar12;
          bVar21 = pbVar12[1];
          bVar1 = pbVar12[4];
          bVar2 = pbVar12[5];
          pbVar23[1] = (unsigned char)(((unsigned __int64)bVar10 & 0xf0) << 2) | bVar18 & 0x30;
          *pbVar8 = (unsigned char)(((unsigned __int64)bVar21 & 0xf0) << 2) | bVar19 & 0x30;
          param_2[1] = (unsigned char)(((unsigned __int64)bVar10 << 2 | (unsigned __int64)bVar18 & 0xfffffffffffffc03) << 4
                             );
          bVar22 = (bVar1 & 3) << 2 | bVar22;
          *pbVar25 = (unsigned char)(((unsigned __int64)bVar21 << 2 | (unsigned __int64)bVar19 & 0xfffffffffffffc03) << 4);
          bVar17 = (bVar2 & 3) << 2 | bVar17;
          bVar20 = (unsigned char)((int)(bVar1 & 0x30) >> 2) | bVar20;
          bVar9 = (unsigned char)((int)(bVar2 & 0x30) >> 2) | bVar9;
          pbVar8 = pbVar7 + 2;
          pbVar25 = pbVar24 + 2;
        }
        pbVar16 = pbVar16 + 1;
        *pbVar16 = bVar22;
        pbVar14 = pbVar14 + 1;
        *pbVar14 = bVar17;
        param_6 = param_6 + 1;
        *param_6 = bVar20;
        param_7 = param_7 + 1;
        *param_7 = bVar9;
        pbStack00000024 = pbVar16;
        pbStack0000002c = pbVar14;
        pbStack0000003c = param_6;
        pbStack00000044 = param_7;
        pbVar7 = pbVar8;
        pbVar24 = pbVar25;
      }
      param_2 = pbVar24;
      pbVar23 = pbVar7;
      iStack_b0 = iStack_b0 + 1;
    } while (iStack_b0 < *(int *)(param_1 + 0x2d0));
  }
  return;
}

