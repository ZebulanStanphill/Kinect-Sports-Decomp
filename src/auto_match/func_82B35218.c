typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82AA66A8();
extern int fn_82ABDBE8();
extern int fn_82ABE0E8();
extern int fn_82AC9F80();
extern int fn_82AD1978();
extern int fn_82B170D8();
extern int fn_82B175C8();
extern int fn_82B1EB50();
extern int fn_82B23950();
extern int fn_82B26E08();
extern int fn_82B29D20();
extern int fn_82B330F8();
extern int fn_82B843F0();
extern int fn_82B8E778();
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_82B35218(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  bool bVar4;
  int iVar6;
  char cVar10;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned __int64 uVar5;
  unsigned int uVar11;
  unsigned int *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  int iVar18;
  unsigned int uVar19;
  int iVar20;
  unsigned int *puVar21;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  int aiStack_58 [22];
  
  iVar13 = 0;
  fn_82B1EB50();
LAB_82b35230:
  uVar16 = *(unsigned int *)(param_1 + 4);
  do {
    uVar16 = -(unsigned int)((uVar16 & 1) == 0) & uVar16;
    if (uVar16 == 0) {
      if ((*(unsigned int *)(param_1 + 0x28) & 0x80) != 0) {
        for (uVar16 = *(unsigned int *)(param_1 + 4); ((uVar16 & 1) == 0 && (uVar16 != 0));
            uVar16 = *(unsigned int *)((uVar16 & 0xfffffffe) + 4)) {
          for (uVar11 = *(unsigned int *)(uVar16 + 0x1c); ((uVar11 & 1) == 0 && (uVar11 != 0));
              uVar11 = *(unsigned int *)((uVar11 & 0xfffffffe) + 0x28)) {
            cVar10 = fn_82B170D8(uVar11);
            if (cVar10 != '\0') {
              if (((*(unsigned int *)(uVar11 + 8) & 0x3f80) != 0x3000) ||
                 (bVar4 = true, (*(unsigned int *)(uVar11 + 8) & 0x380000) < 0x80001)) {
                bVar4 = false;
              }
              puVar3 = *(unsigned int **)((0xc - (unsigned int)!bVar4) * 4 + uVar11);
              fn_82B8E778(puVar3,&uStack_60,&uStack_5c,aiStack_58,0);
              iVar18 = aiStack_58[0];
              uVar19 = uStack_60;
              uVar17 = uStack_5c & 3;
              if ((aiStack_58[0] == 0) && ((*(unsigned int *)(uStack_60 + 8) & 0x3f80) == 0x180)) {
                puVar21 = *(unsigned int **)(uStack_60 + 0x2c);
                cVar10 = fn_82ABDBE8(puVar21,*(unsigned int *)(uStack_60 + 0x30));
                if ((cVar10 != '\0') && ((*puVar21 & 0x1f) == 8)) {
                  uVar19 = puVar21[3];
                  uVar17 = (*puVar21 >> 5 & 0xff) >> (uVar17 << 1) & 3;
                  uStack_60 = uVar19;
                }
              }
              if (((uVar17 != 0) || ((CONCAT44(iVar18,iVar18) & 0xfffffffffffffff7) != 0)) ||
                 (cVar10 = fn_82B175C8(param_1,uVar11,uVar19,1), cVar10 == '\0')) {
                    /* WARNING: Subroutine does not return */
                fn_82AA66A8(param_1,0x12c0);
              }
              if (puVar3[3] != uStack_60) {
                if ((*(unsigned int *)(uStack_60 + 8) & 0x3f80) == 0x3b00) {
                  if (*(unsigned int *)(uStack_60 + 0x1c) != uVar16) {
                    iVar18 = *(int *)(*(int *)(uStack_60 + 0x30) + 0xc);
                    if ((*(unsigned int *)(iVar18 + 8) & 0x3f80) != 0x1b80) {
                    /* WARNING: Subroutine does not return */
                      fn_82AA66A8(param_1,0x12c0);
                    }
                    uVar7 = fn_82B843F0(param_1,iVar18);
                    uVar8 = fn_82AD1978(uVar7,*(unsigned int *)(iVar18 + 0x2c));
                    uVar17 = uVar11 & 0xfffffffe;
                    *(unsigned int *)(uVar7 + 0x2c) = uVar8;
                    *(unsigned int *)(uVar7 + 0x1c) = uVar16;
                    uVar19 = uVar7 & 0xfffffffe;
                    puVar21 = (unsigned int *)(uVar17 + 0x24);
                    *(short *)(uVar7 + 0xe) = (short)*(unsigned int *)(iVar18 + 0xc);
                    *(unsigned int *)(uVar19 + 0x24) = *puVar21;
                    *(unsigned int *)(*puVar21 & 0xfffffffe) = uVar19;
                    *(unsigned int *)(uVar19 + 0x28) = uVar17;
                    *puVar21 = uVar19 + 0x28;
                    uVar9 = fn_82B843F0(param_1,uStack_60);
                    uVar8 = fn_82AD1978(uVar9,*(unsigned int *)(uStack_60 + 0x2c));
                    *(unsigned int *)(uVar9 + 0x2c) = uVar8;
                    uVar5 = fn_82AC9F80(param_1,uVar7,0);
                    uVar8 = fn_82AD1978(uVar9,uVar5);
                    *(unsigned int *)(uVar9 + 0x30) = uVar8;
                    *(unsigned int *)(uVar9 + 0x1c) = uVar16;
                    uVar19 = uVar9 & 0xfffffffe;
                    *(short *)(uVar9 + 0xe) = (short)*(unsigned int *)(uStack_60 + 0xc);
                    *(unsigned int *)(uVar19 + 0x24) = *puVar21;
                    *(unsigned int *)(*puVar21 & 0xfffffffe) = uVar19;
                    *(unsigned int *)(uVar19 + 0x28) = uVar17;
                    *puVar21 = uVar19 + 0x28;
                    uStack_60 = uVar9;
                  }
                  puVar12 = (unsigned int *)(puVar3[3] + 4);
                  for (puVar21 = (unsigned int *)*puVar12; puVar21 != puVar3; puVar21 = (unsigned int *)puVar21[2])
                  {
                    puVar12 = puVar21 + 2;
                  }
                  *puVar12 = puVar3[2];
                  puVar3[2] = *(unsigned int *)(uStack_60 + 4);
                  *(unsigned int **)(uStack_60 + 4) = puVar3;
                  *puVar3 = *puVar3 & 0xffffffe0 | 8;
                }
                else {
                  puVar12 = (unsigned int *)(puVar3[3] + 4);
                  for (puVar21 = (unsigned int *)*puVar12; puVar21 != puVar3; puVar21 = (unsigned int *)puVar21[2])
                  {
                    puVar12 = puVar21 + 2;
                  }
                  *puVar12 = puVar3[2];
                  puVar3[2] = *(unsigned int *)(uStack_60 + 4);
                  *(unsigned int **)(uStack_60 + 4) = puVar3;
                }
                puVar3[3] = uStack_60;
              }
            }
          }
        }
      }
      if (iVar13 == 0) {
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -0x400;
      }
      return;
    }
    if ((*(unsigned int *)(uVar16 + 0x30) >> 0x13 & 1) != 0) {
      iVar15 = 0;
      iVar14 = 0;
      for (iVar18 = *(int *)(uVar16 + 8); iVar18 != 0; iVar18 = *(int *)(iVar18 + 0xc)) {
        iVar15 = iVar15 + 1;
      }
      iVar18 = 1;
      while( true ) {
        iVar1 = *(int *)(uVar16 + 8);
        while( true ) {
          if (iVar1 == 0) goto LAB_82b35340;
          iVar2 = *(int *)(iVar1 + 4);
          if ((*(unsigned int *)(iVar2 + 0x24) & 1) == 0) {
            iVar20 = (*(unsigned int *)(iVar2 + 0x20) & 0xfffffffe) - 0x28;
          }
          else {
            iVar20 = 0;
          }
          if (((*(unsigned int *)(iVar20 + 8) & 0x3f80) != 0x2b80) &&
             (iVar6 = fn_82ABE0E8(iVar20,param_1), iVar6 != 5)) break;
          iVar1 = *(int *)(iVar1 + 0xc);
          iVar13 = iVar13 + 1;
        }
        iVar14 = iVar14 + 1;
        if (iVar18 == iVar15) break;
        fn_82B29D20(param_1,iVar2,uVar16,iVar20);
        iVar18 = iVar18 + 1;
      }
      for (puVar3 = *(unsigned int **)(iVar2 + 0xc); puVar3 != (unsigned int *)0x0; puVar3 = (unsigned int *)puVar3[2]) {
        uVar11 = *puVar3;
        if (uVar11 != uVar16) goto LAB_82b35328;
      }
      uVar11 = 0;
LAB_82b35328:
      fn_82B26E08(param_1,iVar2,uVar16,iVar20,uVar11,0);
LAB_82b35340:
      if (iVar14 != 0) break;
    }
    uVar16 = *(unsigned int *)((uVar16 & 0xfffffffe) + 4);
  } while( true );
  fn_82B23950(param_1);
  fn_82B330F8(param_1,1);
  goto LAB_82b35230;
}

