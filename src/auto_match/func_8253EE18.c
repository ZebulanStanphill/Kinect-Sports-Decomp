typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_8251E530();
extern int fn_8253D448();
extern int fn_8255DB38();
extern int fn_82CE4118();
extern int fn_82D82E28();
extern int fn_82D8CD68();
extern int memmove();


void fn_8253EE18(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  bool bVar9;
  int iVar10;
  int in_r0;
  int iVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned int uVar22;
  unsigned char auStack_80 [1];
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [16];

  iVar6 = (int)param_1;
  if ((((*(int *)(iVar6 + 0x820) != 0) && (iVar1 = *(int *)(iVar6 + 0x4c), iVar1 != 0)) &&
      (iVar2 = *(int *)(iVar6 + 0x3a8), iVar2 != 0)) && (*(int *)(iVar6 + 0x7c0) != 0)) {
    fn_8253D448(iVar1 + 0x1f0,0xc,param_3,param_1);
    fn_8255DB38(param_1,auStack_80,auStack_70);
    puVar7 = (unsigned int *)((unsigned int)(auStack_80 + in_r0) & 0xfffffff0);
    uVar16 = puVar7[1];
    uVar17 = puVar7[2];
    uVar18 = puVar7[3];
    puVar8 = (unsigned int *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
    uVar19 = *puVar8;
    uVar20 = puVar8[1];
    uVar21 = puVar8[2];
    uVar22 = puVar8[3];
    puVar8 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
    *puVar8 = *puVar7;
    puVar8[1] = uVar16;
    puVar8[2] = uVar17;
    puVar8[3] = uVar18;
    puVar7 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
    *puVar7 = uVar19;
    puVar7[1] = uVar20;
    puVar7[2] = uVar21;
    puVar7[3] = uVar22;
    fn_82D8CD68(*(unsigned int *)(iVar6 + 0x824),auStack_60);
    iVar3 = *(int *)(iVar6 + 0x824);
    piVar15 = *(int **)(iVar2 + 0x138);
    if (piVar15 != *(int **)(iVar2 + 0x13c)) {
      piVar14 = piVar15 + 1;
      do {
        iVar4 = *(int *)(iVar3 + 0xd4);
        bVar9 = false;
        iVar11 = 0;
        if (0 < iVar4) {
          piVar12 = *(int **)(iVar3 + 0xd0);
          do {
            iVar10 = *(int *)(*piVar12 + 0xc);
            iVar13 = *piVar12;
            while (iVar5 = iVar10, iVar5 != 0) {
              iVar13 = iVar5;
              iVar10 = *(int *)(iVar5 + 0xc);
            }
            if (*(char *)(iVar13 + 0x18) == '\x01') {
              iVar13 = *(char *)(iVar13 + 0x10) + iVar13;
            }
            else {
              iVar13 = 0;
            }
            if (iVar13 == *piVar15) {
              bVar9 = true;
              break;
            }
            iVar11 = iVar11 + 1;
            piVar12 = piVar12 + 1;
          } while (iVar11 < iVar4);
        }
        if (bVar9) {
          piVar15 = piVar15 + 1;
          piVar14 = piVar14 + 1;
        }
        else {
          memmove(piVar15,piVar14,(*(int *)(iVar2 + 0x13c) - (int)piVar14 >> 2) << 2);
          *(int *)(iVar2 + 0x13c) = *(int *)(iVar2 + 0x13c) + -4;
        }
      } while (piVar15 != *(int **)(iVar2 + 0x13c));
    }
    if (*(int *)(iVar2 + 0x138) == *(int *)(iVar2 + 0x13c)) {
      for (piVar15 = *(int **)(iVar1 + 0x2b8); piVar15 < *(int **)(iVar1 + 700);
          piVar15 = piVar15 + 1) {
        if (*piVar15 == *(int *)(iVar6 + 0x824)) {
          fn_8251E530(iVar1 + 0x2b8,piVar15);
          goto LAB_8253efdc;
        }
      }
      if (*(int *)(*(int *)(iVar6 + 0x824) + 8) != 0) {
        fn_82D82E28(*(unsigned int *)(iVar1 + 0x1f8));
      }
LAB_8253efdc:
      fn_82CE4118(*(unsigned int *)(iVar6 + 0x824));
      *(unsigned int *)(iVar6 + 0x824) = 0;
      *(unsigned int *)(iVar6 + 0x820) = 0;
    }
  }
  return;
}
