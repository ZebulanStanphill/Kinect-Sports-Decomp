typedef unsigned char bool;
extern int fn_82E848F0();
extern int fn_82E84978();
extern int fn_82F0E7E0();
extern int fn_82F68CC0();
extern unsigned int uStack_90;


void fn_82F0FD50(int param_1)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int *piVar4;
  int *piVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  int *piVar11;
  unsigned int uVar12;
  unsigned char *puVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned char uVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned __int64 uVar22;
  unsigned int uVar23;
  unsigned __int64 uVar24;
  unsigned int uVar25;
  unsigned int uVar26;
  unsigned int uStack_90;
  
  uVar24 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1e54);
  uVar22 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1e58);
  uVar21 = 0;
  uVar14 = 0x7fffffff;
  if (*(int *)(param_1 + 0x2d8) != 0) {
    do {
      fn_82F68CC0(uVar22,uVar24,0x114);
      uVar21 = uVar21 + 1;
      uVar24 = uVar24 + 0x114;
      uVar22 = uVar22 + 0x114;
    } while (uVar21 < *(unsigned int *)(param_1 + 0x2d8));
  }
  uVar21 = *(unsigned int *)(param_1 + 0x658);
  uVar15 = 0;
  uVar16 = 0;
  uVar19 = 0;
  if (uVar21 != 0) {
    puVar9 = (unsigned int *)(param_1 + 0xe14);
    do {
      if (uVar15 <= puVar9[-1]) {
        uVar15 = puVar9[-1];
      }
      if (uVar16 <= *puVar9) {
        uVar16 = *puVar9;
      }
      uVar19 = uVar19 + 1;
      puVar9 = puVar9 + 0xf2;
    } while (uVar19 < uVar21);
  }
  uVar22 = (unsigned __int64)uStack_90;
  uVar24 = 0;
  uVar19 = uStack_90;
  uVar20 = uStack_90;
  uVar17 = uStack_90;
  do {
    if ((*(int *)(param_1 + 0x794c) == -1) || ((int)uVar24 == *(int *)(param_1 + 0x794c))) {
      *(int *)(param_1 + 0x4e44) = (int)uVar24;
      uVar8 = 0;
      if (uVar21 != 0) {
        puVar10 = (unsigned int *)(param_1 + 0xa48);
        do {
          puVar10[0xef] = 0;
          uVar8 = uVar8 + 1;
          puVar10[0xed] = 0;
          puVar10[0xec] = 0;
          puVar10[0xeb] = 0;
          puVar10[0xee] = 0;
          puVar10[0xf3] = 0;
          puVar10 = puVar10 + 0xf2;
          *puVar10 = 0;
        } while (uVar8 < *(unsigned int *)(param_1 + 0x658));
      }
      if (*(int *)(param_1 + 0x658) == 1) {
        fn_82F0E7E0(param_1,param_1 + 0xb20);
      }
      uVar21 = *(unsigned int *)(param_1 + 0x658);
      uVar23 = 0;
      uVar25 = 0;
      uVar26 = 0;
      uVar8 = 0;
      uVar6 = 0;
      uVar12 = 0;
      if (uVar21 != 0) {
        piVar11 = (int *)(param_1 + 0xa38);
        do {
          uVar7 = piVar11[0xf6];
          if ((unsigned int)piVar11[0xf6] < *(unsigned int *)(param_1 + 0xe10)) {
            uVar7 = *(unsigned int *)(param_1 + 0xe10);
          }
          uVar2 = *(unsigned int *)(param_1 + 0xe14);
          *(unsigned int *)(param_1 + 0xe10) = uVar7;
          uVar7 = piVar11[0xf7];
          if ((unsigned int)piVar11[0xf7] < uVar2) {
            uVar7 = uVar2;
          }
          *(unsigned int *)(param_1 + 0xe14) = uVar7;
          uVar12 = uVar12 + 1;
          piVar4 = piVar11 + 0xef;
          uVar8 = piVar11[0xf0] + uVar8;
          piVar5 = piVar11 + 0xf1;
          uVar25 = piVar11[0xf3] + uVar25;
          piVar11 = piVar11 + 0xf2;
          uVar6 = *piVar4 + uVar6;
          uVar26 = *piVar5 + uVar26;
          uVar23 = *piVar11 + uVar23;
        } while (uVar12 < *(unsigned int *)(param_1 + 0x658));
      }
      if (*(unsigned int *)(param_1 + 0xe10) < uVar15) {
        *(unsigned int *)(param_1 + 0xe10) = uVar15;
      }
      if (*(unsigned int *)(param_1 + 0xe14) < uVar16) {
        *(unsigned int *)(param_1 + 0xe14) = uVar16;
      }
      uVar12 = uVar6;
      if (uVar8 < uVar6) {
        uVar12 = uVar8;
      }
      uVar8 = (unsigned int)(uVar8 < uVar6);
      if (uVar26 < uVar12) {
        uVar8 = 2;
        uVar12 = uVar26;
      }
      if (uVar25 < uVar12) {
        uVar8 = 4;
        uVar12 = uVar25;
      }
      bVar1 = uVar12 <= uVar23;
      if (!bVar1) {
        uVar12 = uVar23;
      }
      if (uVar12 < uVar14) {
        uStack_90 = *(unsigned int *)(param_1 + 0xe10);
        uVar19 = *(unsigned int *)(param_1 + 0xe14);
        uVar22 = uVar24;
        uVar14 = uVar12;
        if (bVar1) {
          uVar20 = 0;
          uVar17 = uVar8;
        }
        else {
          uVar20 = 1;
          uVar3 = *(unsigned int *)(param_1 + 0x1e58);
          *(unsigned int *)(param_1 + 0x1e58) = *(unsigned int *)(param_1 + 0x1e54);
          *(unsigned int *)(param_1 + 0x1e54) = uVar3;
        }
      }
    }
    uVar24 = uVar24 + 1;
  } while ((int)uVar24 < 3);
  if (uVar20 == 0) {
    uVar14 = 0;
    if (*(int *)(param_1 + 0x2d8) != 0) {
      uVar18 = (unsigned char)uVar17;
      puVar13 = (unsigned char *)(*(int *)(param_1 + 0x1e54) + -0xd7);
      do {
        uVar14 = uVar14 + 1;
        *(unsigned int *)(puVar13 + 0xd7) = *(unsigned int *)(puVar13 + 0xd7) & 0xefffffff;
        puVar13[0x10f] = uVar18;
        puVar13[0x110] = uVar18;
        puVar13[0x111] = uVar18;
        puVar13[0x112] = uVar18;
        puVar13[0x113] = uVar18;
        puVar13 = puVar13 + 0x114;
        *puVar13 = uVar18;
      } while (uVar14 < *(unsigned int *)(param_1 + 0x2d8));
    }
    *(unsigned int *)(param_1 + 0x61c) = 0;
  }
  else {
    uVar3 = *(unsigned int *)(param_1 + 0x1e58);
    *(int *)(param_1 + 0x1e58) = *(int *)(param_1 + 0x1e54);
    *(unsigned int *)(param_1 + 0x61c) = 1;
    *(unsigned int *)(param_1 + 0x1e54) = uVar3;
  }
  *(unsigned int *)(param_1 + 0xe10) = uStack_90;
  *(unsigned int *)(param_1 + 0xe14) = uVar19;
  *(unsigned int *)(param_1 + 0x620) = uVar17;
  *(int *)(param_1 + 0x4e44) = (int)uVar22;
  fn_82E848F0(param_1,uVar22);
  fn_82E84978(param_1,uVar22);
  return;
}

