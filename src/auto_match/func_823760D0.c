typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_78;
extern int fn_822315A0();
extern int fn_822ABA88();
extern int fn_822C6000();
extern int fn_822C6130();
extern int fn_82365BD8();
extern int fn_82373530();
extern int fn_823765C8();
extern unsigned int iStack_74;
extern unsigned int iStack_7c;
extern unsigned int iStack_80;


void fn_823760D0(int param_1)

{
  int *piVar1;
  int iVar2;
  unsigned int *puVar3;
  bool bVar4;
  int *piVar6;
  __int64 lVar5;
  int iVar7;
  int iVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  unsigned __int64 uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  int iStack_80;
  int iStack_7c;
  unsigned char auStack_78 [4];
  int iStack_74;
  
  fn_823765C8(&iStack_80);
  piVar1 = *(int **)(param_1 + 0x188);
  iVar13 = iStack_7c;
  iVar15 = iStack_80;
  for (piVar12 = *(int **)(param_1 + 0x184); piVar12 != piVar1; piVar12 = piVar12 + 2) {
    bVar4 = false;
    if (*(int *)(*piVar12 + 0x174) == 0) {
      bVar4 = true;
    }
    else {
      piVar6 = (int *)fn_82365BD8(auStack_78,piVar12);
      iVar14 = piVar6[1];
      piVar6[1] = iVar13;
      iVar16 = *piVar6;
      *piVar6 = iVar15;
      iVar13 = iVar14;
      iVar15 = iVar16;
      if (iStack_74 != 0) {
        fn_822315A0();
      }
    }
    if (!bVar4) break;
  }
  piVar12 = *(int **)(param_1 + 8);
  iVar14 = 0;
  if ((piVar12[1] - *piVar12 & 0xfffffffcU) != 0) {
    iVar16 = 0;
    do {
      uVar17 = 0;
      piVar12 = *(int **)(*piVar12 + iVar16);
      iVar7 = *(int *)(piVar12[4] * 4 + *piVar12);
      if (*(int *)(iVar7 + 8) != 0) {
        do {
          iVar8 = **(int **)(param_1 + 8);
          piVar1 = *(int **)(iVar8 + iVar16);
          lVar5 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),uVar17);
          if (*(int *)(param_1 + 0x54) == 2) {
            iVar2 = *(int *)(param_1 + 0x1e4);
            if (*(int *)(iVar7 + 0x10) != iVar2) goto LAB_823761f4;
            uVar9 = (unsigned __int64)*(unsigned int *)((int)lVar5 + 0x28);
            iVar7 = fn_82373530(param_1);
            if ((int)uVar9 != iVar7) {
              iVar11 = *(int *)((int)lVar5 + 0x118) + 0x70;
              piVar1 = *(int **)(((unsigned int)LZCOUNT(iVar2) >> 3 & 4) + iVar8);
              iVar7 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),uVar9);
              puVar3 = (unsigned int *)(iVar7 + 0x80U & 0xfffffff0);
              uVar18 = *puVar3;
              uVar19 = puVar3[1];
              uVar20 = puVar3[2];
              uVar21 = puVar3[3];
              *(unsigned int *)(iVar11 + 0x40) = 1;
              puVar3 = (unsigned int *)(iVar11 + 0x30U & 0xfffffff0);
              *puVar3 = uVar18;
              puVar3[1] = uVar19;
              puVar3[2] = uVar20;
              puVar3[3] = uVar21;
            }
          }
          else if (*(int *)(param_1 + 0x54) == 3) {
LAB_823761f4:
            if (iVar15 != 0) {
              lVar10 = lVar5 + 0x80;
              puVar3 = (unsigned int *)(iVar15 + 0x20U & 0xfffffff0);
              uVar18 = *puVar3;
              uVar19 = puVar3[1];
              uVar20 = puVar3[2];
              uVar21 = puVar3[3];
              iVar8 = *(int *)((int)lVar5 + 0x118) + 0x70;
              iVar7 = fn_822C6000(lVar10);
              if (iVar7 != 0) {
                fn_822C6130(lVar10);
                puVar3 = (unsigned int *)(iVar8 + 0x30U & 0xfffffff0);
                *puVar3 = uVar18;
                puVar3[1] = uVar19;
                puVar3[2] = uVar20;
                puVar3[3] = uVar21;
                *(unsigned int *)(iVar8 + 0x40) = 1;
              }
            }
          }
          uVar17 = uVar17 + 1;
          iVar7 = *(int *)(piVar12[4] * 4 + *piVar12);
        } while ((uVar17 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar7 + 8));
      }
      piVar12 = *(int **)(param_1 + 8);
      iVar14 = iVar14 + 1;
      iVar16 = iVar16 + 4;
    } while (iVar14 < piVar12[1] - *piVar12 >> 2);
  }
  if (iVar13 != 0) {
    fn_822315A0(iVar13);
  }
  return;
}

