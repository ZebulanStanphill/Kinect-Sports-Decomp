extern unsigned char bRam00000000;
extern unsigned char bRam00000001;
extern unsigned int uStack_c8;


void fn_82CA00E8(int param_1, unsigned char *param_2, int param_3, int param_4, unsigned char *param_5, unsigned char *param_6, unsigned char *param_7, unsigned char *param_8, unsigned int in_stack_00000054)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned char bVar7;
  unsigned char bVar8;
  unsigned char bVar9;
  unsigned char bVar10;
  unsigned char bVar11;
  int iVar12;
  unsigned int uVar13;
  unsigned char *pbVar14;
  unsigned char *pbVar15;
  unsigned char *pbVar16;
  unsigned char *pbVar17;
  unsigned char *pbVar18;
  unsigned char *pbVar19;
  unsigned char bVar21;
  unsigned char *pbVar20;
  unsigned char bVar22;
  int iVar23;
  unsigned char *pbVar25;
  unsigned __int64 uVar24;
  unsigned __int64 uVar26;
  unsigned char *pbVar27;
  int iVar28;
  unsigned char *pbVar29;
  unsigned char bVar30;
  unsigned char bVar31;
  unsigned char bVar32;
  unsigned char bVar33;
  unsigned char bVar34;
  unsigned char bVar35;
  unsigned char *pbVar36;
  unsigned char *pbStack00000024;
  unsigned char *pbStack0000002c;
  unsigned char *pbStack0000003c;
  unsigned char *pbStack00000044;

  unsigned int uStack_c8;
  
  iVar12 = (int)(in_stack_00000054 + 1) >> 1;
  uVar13 = (int)in_stack_00000054 >> 2;
  uVar26 = (unsigned __int64)(int)uVar13;
  pbVar36 = param_5 + iVar12;
  pbVar29 = param_8;
  if (0 < (__int64)uVar26) {
    iVar28 = *(int *)(param_1 + 0x88) * 6;
    do {
      bVar32 = pbVar29[1];
      bVar21 = pbVar29[3];
      bVar34 = *pbVar29;
      bVar30 = pbVar29[4];
      bVar31 = pbVar29[5];
      bVar33 = pbVar29[2];
      pbVar29 = pbVar29 + iVar28;
      bVar22 = pbVar29[2];
      bVar35 = *pbVar29;
      bVar1 = pbVar29[3];
      bVar2 = pbVar29[1];
      bVar3 = pbVar29[4];
      bVar4 = pbVar29[5];
      pbVar29 = pbVar29 + iVar28;
      bVar11 = *pbVar29;
      bVar5 = pbVar29[1];
      bVar6 = pbVar29[3];
      bVar7 = pbVar29[4];
      bVar8 = pbVar29[5];
      bVar9 = pbVar29[2];
      pbVar29 = pbVar29 + iVar28;
      *param_2 = (bVar2 & 3) << 2 | bVar1 & 3 |
                 (unsigned char)(((unsigned __int64)bVar32 << 2 | (unsigned __int64)bVar21 & 0xfffffffffffffc03) << 4);
      bVar10 = pbVar29[2];
      *param_5 = (char)((unsigned char)((int)(bVar22 & 0x30) >> 2) | bVar35 & 0x30) >> 2 |
                 (bVar34 & 0xf0) << 2 | bVar33 & 0x30;
      *pbVar36 = (char)((unsigned char)((int)(bVar1 & 0x30) >> 2) | bVar2 & 0x30) >> 2 |
                 (unsigned char)(((unsigned __int64)bVar32 & 0xf0) << 2) | bVar21 & 0x30;
      bVar32 = *pbVar29;
      bVar21 = pbVar29[4];
      bVar34 = pbVar29[1];
      bVar33 = pbVar29[3];
      bVar22 = pbVar29[5];
      param_2[1] = (bVar34 & 3) << 2 | bVar33 & 3 |
                   (unsigned char)(((unsigned __int64)bVar5 << 2 | (unsigned __int64)bVar6 & 0xfffffffffffffc03) << 4);
      param_5[1] = (char)((unsigned char)((int)(bVar10 & 0x30) >> 2) | bVar32 & 0x30) >> 2 |
                   (bVar11 & 0xf0) << 2 | bVar9 & 0x30;
      pbVar36[1] = (char)((unsigned char)((int)(bVar33 & 0x30) >> 2) | bVar34 & 0x30) >> 2 |
                   (unsigned char)(((unsigned __int64)bVar5 & 0xf0) << 2) | bVar6 & 0x30;
      *param_6 = (unsigned char)((int)(bVar21 & 0x30) >> 4) |
                 (unsigned char)((int)(bVar7 & 0x30) >> 2) | bVar3 & 0x30 | (bVar30 & 0x30) << 2;
      pbVar29 = pbVar29 + iVar28;
      *param_7 = (unsigned char)((int)(bVar22 & 0x30) >> 4) |
                 (unsigned char)((int)(bVar8 & 0x30) >> 2) | bVar4 & 0x30 | (bVar31 & 0x30) << 2;
      param_5 = param_5 + 2;
      pbVar36 = pbVar36 + 2;
      param_2 = param_2 + 2;
      param_6 = param_6 + 1;
      param_7 = param_7 + 1;
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
    uVar26 = (unsigned __int64)uVar13;
  }
  if ((in_stack_00000054 & 3) != 0) {
    iVar28 = *(int *)(param_1 + 0x88) * 6;
    bVar31 = (unsigned char)(((unsigned __int64)pbVar29[1] & 0xf0) << 2) | pbVar29[3] & 0x30;
    bVar32 = (*pbVar29 & 0xf0) << 2 | pbVar29[2] & 0x30;
    bVar30 = (unsigned char)((((unsigned __int64)pbVar29[1] & 3) << 2 | (unsigned __int64)pbVar29[3] & 0xfffffffffffffc03)
                   << 4);
    bVar21 = (pbVar29[4] & 0x30) << 2;
    bVar34 = (pbVar29[5] & 0x30) << 2;
    pbVar29 = pbVar29 + iVar28;
    if ((in_stack_00000054 & 2) == 2) {
      bVar30 = (pbVar29[1] & 3) << 2 | pbVar29[3] & 3 | bVar30;
      bVar32 = (char)((unsigned char)((int)(pbVar29[2] & 0x30) >> 2) | *pbVar29 & 0x30) >> 2 | bVar32;
      bVar31 = (char)((unsigned char)((int)(pbVar29[3] & 0x30) >> 2) | pbVar29[1] & 0x30) >> 2 | bVar31;
      bVar21 = pbVar29[4] & 0x30 | bVar21;
      bVar34 = pbVar29[5] & 0x30 | bVar34;
      pbVar29 = pbVar29 + iVar28;
    }
    *param_5 = bVar32;
    *pbVar36 = bVar31;
    *param_2 = bVar30;
    pbVar27 = param_2 + 1;
    pbVar25 = pbVar36 + 1;
    if ((in_stack_00000054 & 3) == 3) {
      bVar32 = pbVar29[1];
      bVar30 = pbVar29[3];
      bVar31 = pbVar29[4];
      bVar33 = pbVar29[5];
      param_5[1] = (*pbVar29 & 0xf0) << 2 | pbVar29[2] & 0x30;
      pbVar36[1] = (unsigned char)(((unsigned __int64)bVar32 & 0xf0) << 2) | bVar30 & 0x30;
      param_2[1] = (unsigned char)(((unsigned __int64)bVar32 << 2 | (unsigned __int64)bVar30 & 0xfffffffffffffc03) << 4);
      bVar21 = (unsigned char)((int)(bVar31 & 0x30) >> 2) | bVar21;
      bVar34 = (unsigned char)((int)(bVar33 & 0x30) >> 2) | bVar34;
      pbVar27 = param_2 + 2;
      pbVar25 = pbVar36 + 2;
    }
    pbVar36 = pbVar25;
    param_2 = pbVar27;
    *param_6 = bVar21;
    param_6 = param_6 + 1;
    *param_7 = bVar34;
    param_7 = param_7 + 1;
  }
  iVar28 = *(int *)(param_1 + 0x88);
  if (1 < iVar28) {
    uStack_c8 = iVar28 - 1;
    param_6 = param_6 + -1;
    pbVar29 = (unsigned char *)(param_3 + -1);
    pbVar27 = (unsigned char *)(param_4 + -1);
    param_7 = param_7 + -1;
    pbStack00000024 = pbVar29;
    pbStack0000002c = pbVar27;
    pbStack0000003c = param_6;
    pbStack00000044 = param_7;
    do {
      param_8 = param_8 + 6;
      pbVar18 = param_2 + iVar12;
      pbVar20 = pbVar36 + iVar12;
      pbVar25 = param_8;
      if (0 < (int)uVar26) {
        iVar23 = iVar28 * 6;
        do {
          bVar32 = *pbVar25;
          bVar21 = pbVar25[1];
          bVar34 = pbVar25[5];
          bVar30 = pbVar25[2];
          bVar31 = pbVar25[3];
          bVar33 = pbVar25[4];
          pbVar25 = pbVar25 + iVar23;
          bVar22 = pbVar25[2];
          bVar35 = *pbVar25;
          bVar1 = pbVar25[3];
          bVar2 = pbVar25[1];
          bVar3 = pbVar25[4];
          bVar4 = pbVar25[5];
          pbVar25 = pbVar25 + iVar23;
          bVar8 = *pbVar25;
          bVar5 = pbVar25[2];
          bVar6 = pbVar25[1];
          *param_2 = (bVar35 & 3) << 2 | bVar22 & 3 |
                     (unsigned char)(((unsigned __int64)bVar32 << 2 | (unsigned __int64)bVar30 & 0xfffffffffffffc03) << 4);
          bRam00000000 = (char)((unsigned char)((int)(bVar22 & 0x30) >> 2) | bVar35 & 0x30) >> 2 |
                         (unsigned char)(((unsigned __int64)bVar32 & 0xf0) << 2) | bVar30 & 0x30;
          *pbVar20 = (char)((unsigned char)((int)(bVar1 & 0x30) >> 2) | bVar2 & 0x30) >> 2 |
                     (unsigned char)(((unsigned __int64)bVar21 & 0xf0) << 2) | bVar31 & 0x30;
          *pbVar18 = (bVar2 & 3) << 2 | bVar1 & 3 |
                     (unsigned char)(((unsigned __int64)bVar21 << 2 | (unsigned __int64)bVar31 & 0xfffffffffffffc03) << 4);
          bVar32 = pbVar25[5];
          bVar21 = pbVar25[3];
          bVar30 = pbVar25[4];
          pbVar25 = pbVar25 + iVar23;
          bVar31 = pbVar25[2];
          bVar22 = *pbVar25;
          bVar35 = pbVar25[3];
          bVar1 = pbVar25[1];
          bVar2 = pbVar25[4];
          bVar7 = pbVar25[5];
          bRam00000001 = (char)((unsigned char)((int)(bVar31 & 0x30) >> 2) | bVar22 & 0x30) >> 2 |
                         (unsigned char)(((unsigned __int64)bVar8 & 0xf0) << 2) | bVar5 & 0x30;
          pbVar20[1] = (char)((unsigned char)((int)(bVar35 & 0x30) >> 2) | bVar1 & 0x30) >> 2 |
                       (unsigned char)(((unsigned __int64)bVar6 & 0xf0) << 2) | bVar21 & 0x30;
          pbVar36 = (unsigned char *)0x2;
          pbStack0000002c[1] = bVar7 & 3 | (bVar32 & 3) << 2 | (bVar4 & 3) << 4 | bVar34 << 6;
          pbStack00000024[1] = bVar2 & 3 | (bVar30 & 3) << 2 | (bVar3 & 3) << 4 | bVar33 << 6;
          pbVar29 = pbStack00000024 + 1;
          pbVar27 = pbStack0000002c + 1;
          param_2[1] = (bVar22 & 3) << 2 | bVar31 & 3 |
                       (unsigned char)(((unsigned __int64)bVar8 << 2 | (unsigned __int64)bVar5 & 0xfffffffffffffc03) << 4);
          pbVar18[1] = (bVar1 & 3) << 2 | bVar35 & 3 |
                       (unsigned char)(((unsigned __int64)bVar6 << 2 | (unsigned __int64)bVar21 & 0xfffffffffffffc03) << 4)
          ;
          param_6 = pbStack0000003c + 1;
          pbVar25 = pbVar25 + iVar23;
          pbVar20 = pbVar20 + 2;
          param_2 = param_2 + 2;
          pbStack0000003c[1] =
               (unsigned char)((int)(bVar2 & 0x30) >> 4) |
               (unsigned char)((int)(bVar30 & 0x30) >> 2) | bVar3 & 0x30 | (bVar33 & 0x30) << 2;
          pbVar18 = pbVar18 + 2;
          pbStack00000044[1] =
               (unsigned char)((int)(bVar7 & 0x30) >> 4) |
               (unsigned char)((int)(bVar32 & 0x30) >> 2) | bVar4 & 0x30 | (bVar34 & 0x30) << 2;
          param_7 = pbStack00000044 + 1;
          uVar26 = uVar26 - 1;
          pbStack00000024 = pbVar29;
          pbStack0000002c = pbVar27;
          pbStack0000003c = param_6;
          pbStack00000044 = param_7;
        } while (uVar26 != 0);
        uVar26 = (unsigned __int64)uVar13;
      }
      if ((in_stack_00000054 & 3) != 0) {
        bVar22 = (unsigned char)(((unsigned __int64)*pbVar25 & 0xf0) << 2) | pbVar25[2] & 0x30;
        bVar31 = (unsigned char)((((unsigned __int64)*pbVar25 & 3) << 2 | (unsigned __int64)pbVar25[2] & 0xfffffffffffffc03
                        ) << 4);
        bVar33 = (unsigned char)((((unsigned __int64)pbVar25[1] & 3) << 2 |
                        (unsigned __int64)pbVar25[3] & 0xfffffffffffffc03) << 4);
        bVar35 = (unsigned char)(((unsigned __int64)pbVar25[1] & 0xf0) << 2) | pbVar25[3] & 0x30;
        bVar32 = (pbVar25[4] & 0x30) << 2;
        bVar21 = (pbVar25[5] & 0x30) << 2;
        bVar34 = pbVar25[4] << 6;
        bVar30 = pbVar25[5] << 6;
        pbVar25 = pbVar25 + iVar28 * 6;
        if ((in_stack_00000054 & 2) == 2) {
          pbVar14 = pbVar25 + 3;
          bVar1 = *pbVar25;
          pbVar19 = pbVar25 + 2;
          pbVar15 = pbVar25 + 1;
          pbVar16 = pbVar25 + 4;
          pbVar17 = pbVar25 + 5;
          pbVar25 = pbVar25 + iVar28 * 6;
          uVar26 = (unsigned __int64)uVar13;
          bVar31 = (bVar1 & 3) << 2 | *pbVar19 & 3 | bVar31;
          bVar33 = (*pbVar15 & 3) << 2 | *pbVar14 & 3 | bVar33;
          bVar34 = (*pbVar16 & 3) << 4 | bVar34;
          bVar30 = (*pbVar17 & 3) << 4 | bVar30;
          bVar22 = (char)((unsigned char)((int)(*pbVar19 & 0x30) >> 2) | bVar1 & 0x30) >> 2 | bVar22;
          bVar35 = (char)((unsigned char)((int)(unsigned int)(*pbVar14 & 0x30) >> 2) | *pbVar15 & 0x30) >> 2 | bVar35
          ;
          bVar32 = *pbVar16 & 0x30 | bVar32;
          bVar21 = *pbVar17 & 0x30 | bVar21;
          param_7 = pbStack00000044;
        }
        *pbVar36 = bVar22;
        *param_2 = bVar31;
        *pbVar20 = bVar35;
        *pbVar18 = bVar33;
        pbVar19 = pbVar18 + 1;
        pbVar14 = pbVar20 + 1;
        if ((in_stack_00000054 & 3) == 3) {
          bVar31 = pbVar25[2];
          bVar33 = *pbVar25;
          bVar22 = pbVar25[3];
          bVar35 = pbVar25[1];
          bVar1 = pbVar25[4];
          bVar2 = pbVar25[5];
          uVar26 = (unsigned __int64)uVar13;
          param_2[1] = (unsigned char)(((unsigned __int64)bVar33 << 2 | (unsigned __int64)bVar31 & 0xfffffffffffffc03) << 4
                             );
          pbVar36[1] = (unsigned char)(((unsigned __int64)bVar33 & 0xf0) << 2) | bVar31 & 0x30;
          *pbVar19 = (unsigned char)(((unsigned __int64)bVar35 << 2 | (unsigned __int64)bVar22 & 0xfffffffffffffc03) << 4);
          bVar34 = (bVar1 & 3) << 2 | bVar34;
          pbVar20[1] = (unsigned char)(((unsigned __int64)bVar35 & 0xf0) << 2) | bVar22 & 0x30;
          bVar30 = (bVar2 & 3) << 2 | bVar30;
          bVar32 = (unsigned char)((int)(bVar1 & 0x30) >> 2) | bVar32;
          bVar21 = (unsigned char)((int)(bVar2 & 0x30) >> 2) | bVar21;
          pbVar19 = pbVar18 + 2;
          pbVar14 = pbVar20 + 2;
        }
        pbVar20 = pbVar14;
        pbVar29 = pbVar29 + 1;
        *pbVar29 = bVar34;
        pbVar27 = pbVar27 + 1;
        *pbVar27 = bVar30;
        param_6 = param_6 + 1;
        *param_6 = bVar32;
        param_7 = param_7 + 1;
        *param_7 = bVar21;
        pbStack00000024 = pbVar29;
        pbStack0000002c = pbVar27;
        pbStack0000003c = param_6;
        pbStack00000044 = param_7;
        pbVar18 = pbVar19;
      }
      param_2 = pbVar18;
      uVar24 = (unsigned __int64)uStack_c8;
      uStack_c8 = (unsigned int)(uVar24 - 1);
      pbVar36 = pbVar20;
    } while (uVar24 - 1 != 0);
  }
  return;
}

