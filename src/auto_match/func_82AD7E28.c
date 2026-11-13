typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA66A8();
extern int fn_82AC9F80();
extern int fn_82ACA920();
extern int fn_82AD1270();
extern int fn_82AD12C8();
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82AD3550();
extern int fn_82AD36D8();
extern int fn_82AD37F8();
extern int fn_82AD3918();
extern int fn_82AD6090();
extern int fn_82B8AC10();
extern unsigned int iStack_78;
extern unsigned int iStack_80;
extern unsigned int uStack_7c;


void fn_82AD7E28(int param_1,int param_2,int param_3,char param_4,int param_5,unsigned int *param_6)

{
  bool bVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  unsigned __int64 uVar6;
  int iVar11;
  unsigned int uVar12;
  unsigned int *puVar13;
  unsigned int *puVar14;
  unsigned __int64 uVar15;
  unsigned int uVar16;
  int *piVar17;
  unsigned int uVar18;
  struct { int first; unsigned int second; } stack_pair_80;

  int iStack_78;
  
  uVar16 = *(unsigned int *)(param_3 + 8) >> 7 & 0x7f;
  if ((uVar16 < 0x15) || (bVar1 = true, 0x18 < uVar16)) {
    bVar1 = false;
  }
  iStack_78 = 0;
  stack_pair_80.second = -(unsigned int)((*(unsigned int *)(param_2 + 4) & 1) == 0) & *(unsigned int *)(param_2 + 4);
  iVar4 = *(int *)((0xc - (unsigned int)!bVar1) * 4 + param_3);
  stack_pair_80.first = param_2;
  do {
    if ((stack_pair_80.second == 0) || (bVar1 = false, iStack_78 == *(int *)(stack_pair_80.second + 8))) {
      bVar1 = true;
    }
    if (bVar1) {
      return;
    }
    puVar7 = (unsigned int *)fn_82AD3550(&stack_pair_80.first);
    puVar8 = (unsigned int *)fn_82ACA920(param_1,iVar4,*(unsigned int *)(iVar4 + 0xc));
    uVar5 = (unsigned __int64)*puVar8 & 0xfffffffff1ffffff;
    uVar15 = uVar5 >> 5 & 3;
    *puVar8 = (unsigned int)((((uVar5 >> 3 & 0xc | uVar15) << 2 | uVar15) << 2 | uVar15) << 5) |
              (puVar7[4] & 7) << 0x19 | *puVar8 & 0xf1ffe01f;
    uVar16 = puVar7[4];
    uVar18 = puVar7[2];
    puVar9 = (unsigned int *)fn_82AD17B0(param_1,*puVar7);
    *puVar9 = (uVar16 & 7) << 0x19 | *puVar9 & 0xf1ffffff;
    fn_82AD1270(puVar9,0);
    *puVar9 = (uVar18 & 0xff) << 5 | *puVar9 & 0xffffe01f;
    uVar16 = puVar7[4];
    uVar18 = puVar7[3];
    puVar10 = (unsigned int *)fn_82AD17B0(param_1,puVar7[1]);
    *puVar10 = (uVar16 & 7) << 0x19 | *puVar10 & 0xf1ffffff;
    fn_82AD1270(puVar10,0);
    *puVar10 = (uVar18 & 0xff) << 5 | *puVar10 & 0xffffe01f;
    puVar14 = puVar9;
    if (param_4 == '\0') {
      puVar14 = puVar10;
      puVar10 = puVar9;
    }
    puVar9 = puVar10;
    if ((puVar7[4] & 8) == 0) {
      puVar9 = puVar14;
      puVar14 = puVar10;
    }
    uVar16 = *(unsigned int *)(param_3 + 8) >> 7 & 0x7f;
    if (uVar16 < 0x3c) {
      puVar10 = puVar14;
      puVar13 = puVar9;
      if (((uVar16 == 0x3b) || (uVar16 == 0x15)) ||
         (puVar10 = puVar9, puVar13 = puVar14, uVar16 == 0x16)) {
LAB_82ad8070:
        uVar16 = fn_82AD36D8(param_1,param_5,0,puVar8,puVar10,puVar13);
      }
      else {
        if (uVar16 != 0x17) {
          bVar1 = uVar16 == 0x18;
          goto LAB_82ad8028;
        }
LAB_82ad804c:
        uVar16 = fn_82AD3918(param_1,param_5,0,puVar8,puVar14,puVar9);
      }
    }
    else {
      puVar10 = puVar9;
      puVar13 = puVar14;
      if (uVar16 == 0x3c) goto LAB_82ad8070;
      if (uVar16 == 0x3d) goto LAB_82ad804c;
      bVar1 = uVar16 == 0x3e;
LAB_82ad8028:
      if (!bVar1) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
      uVar16 = fn_82AD37F8(param_1,param_5,0,puVar8,puVar14,puVar9);
    }
    uVar18 = uVar16 & 0xfffffffe;
    *(unsigned int *)(uVar18 + 0x28) = *(unsigned int *)(param_5 + 0x1c);
    *(unsigned int *)((*(unsigned int *)(param_5 + 0x1c) & 0xfffffffe) + 0x24) = uVar18 + 0x28;
    *(unsigned int *)(uVar18 + 0x24) = param_5 + 0x1cU | 1;
    *(unsigned int *)(param_5 + 0x1c) = uVar18;
    if (((*puVar8 & 8) != 0) && ((*(unsigned int *)(param_1 + 0x28) & 0x4000) != 0)) {
      uVar6 = fn_82AD12C8(param_3);
      uVar6 = fn_82AC9F80(param_1,uVar6,0);
      fn_82AD1978(uVar16,uVar6);
    }
    if (param_6 != (unsigned int *)0x0) {
      *(unsigned int *)(uVar16 + 8) = *(unsigned int *)(uVar16 + 8) | 0x800000;
      *(short *)(uVar16 + 0x12) = (short)*(unsigned int *)(puVar7[5] + 0x10);
      if ((param_6[1] & 1) == 0) {
        uVar18 = *param_6 & 0xfffffffe;
        iVar11 = uVar18 - 4;
        if ((iVar11 == 0) || (*(unsigned int *)(uVar18 + 8) < *(int *)(uVar18 + 4) + 1U)) goto LAB_82ad814c;
      }
      else {
LAB_82ad814c:
        iVar11 = fn_82AD6090(param_6,1);
      }
      iVar2 = *(int *)(iVar11 + 8);
      *(int *)(iVar11 + 8) = iVar2 + 1;
      *(unsigned int *)((iVar2 + 4) * 4 + iVar11) = uVar16;
    }
    uVar18 = 0;
    if ((puVar7[4] & 7) != 0) {
      piVar17 = puVar7 + 5;
      do {
        iVar11 = *piVar17;
        puVar14 = (unsigned int *)(iVar11 + 4);
        while (puVar10 = (unsigned int *)*puVar14, puVar10 != (unsigned int *)0x0) {
          if (puVar10[4] != 0) {
            puVar9 = (unsigned int *)(puVar10[3] + 4);
            for (puVar8 = (unsigned int *)*puVar9; puVar8 != puVar10; puVar8 = (unsigned int *)puVar8[2]) {
              puVar9 = puVar8 + 2;
            }
            uVar12 = uVar18 | 0xe4;
            *puVar9 = puVar10[2];
            puVar10[2] = *(unsigned int *)(uVar16 + 4);
            *(unsigned int **)(uVar16 + 4) = puVar10;
            uVar3 = *puVar10;
            puVar10[3] = uVar16;
            *puVar10 = ((((uVar12 >> (uVar3 >> 10 & 6) & 3) << 2 | uVar12 >> (uVar3 >> 8 & 6) & 3)
                         << 2 | uVar12 >> (uVar3 >> 6 & 6) & 3) << 2 |
                       uVar12 >> (uVar3 >> 4 & 6) & 3) << 5 | uVar3 & 0xffffe01f;
          }
          if ((unsigned int *)*puVar14 == puVar10) {
            puVar14 = puVar10 + 2;
          }
        }
        fn_82B8AC10(param_1,iVar11,0,1);
        uVar18 = uVar18 + 1;
        piVar17 = piVar17 + 1;
      } while (uVar18 < (puVar7[4] & 7));
    }
  } while( true );
}

