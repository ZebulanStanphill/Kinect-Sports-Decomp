typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_8251E530();
extern int fn_82536690();
extern int fn_8253D448();
extern int fn_8255DB38();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82D82E28();
extern int fn_82D83B68();
extern int fn_82D8D6C0();


void fn_8253EA20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  bool bVar6;
  int iVar7;
  int in_r0;
  int iVar8;
  int *piVar9;
  int iVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  int aiStack_90 [4];
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [80];
  
  if ((*(unsigned int *)(param_1 + 2000) & 0x400) == 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if ((iVar1 != 0) && (iVar2 = *(int *)(param_1 + 0x7c0), iVar2 != 0)) {
      iVar3 = *(int *)(param_1 + 0x3a8);
      if (iVar3 != 0) {
        if (*(int *)(param_1 + 0x820) != 0) {
          for (piVar9 = *(int **)(iVar1 + 0x2b8); piVar9 < *(int **)(iVar1 + 700);
              piVar9 = piVar9 + 1) {
            if (*piVar9 == *(int *)(param_1 + 0x824)) {
              fn_8251E530(iVar1 + 0x2b8,piVar9);
              goto LAB_8253eab8;
            }
          }
          if (*(int *)(*(int *)(param_1 + 0x824) + 8) != 0) {
            fn_82D82E28(*(unsigned int *)(iVar1 + 0x1f8));
          }
LAB_8253eab8:
          fn_82CE4118(*(unsigned int *)(param_1 + 0x824));
          *(unsigned int *)(param_1 + 0x824) = 0;
          *(unsigned int *)(param_1 + 0x820) = 0;
        }
        fn_8255DB38(param_1,auStack_80,auStack_70);
        puVar5 = (unsigned int *)((unsigned int)(auStack_80 + in_r0) & 0xfffffff0);
        uVar11 = *puVar5;
        uVar12 = puVar5[1];
        uVar13 = puVar5[2];
        uVar14 = puVar5[3];
        puVar5 = (unsigned int *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
        uVar15 = *puVar5;
        uVar16 = puVar5[1];
        uVar17 = puVar5[2];
        uVar18 = puVar5[3];
        *(unsigned int *)(param_1 + 0x820) = 1;
        puVar5 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
        *puVar5 = uVar11;
        puVar5[1] = uVar12;
        puVar5[2] = uVar13;
        puVar5[3] = uVar14;
        puVar5 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
        *puVar5 = uVar15;
        puVar5[1] = uVar16;
        puVar5[2] = uVar17;
        puVar5[3] = uVar18;
        fn_8253D448(iVar1 + 0x1f0,0xc);
        iVar8 = fn_82CE5410();
        iVar8 = (**(int (***)())(**(int **)(iVar8 + 0x10) + 4))(*(int **)(iVar8 + 0x10),0xe0);
        *(unsigned short *)(iVar8 + 4) = 0xe0;
        iVar8 = fn_82D8D6C0(iVar8,auStack_60,0xe);
        *(int *)(param_1 + 0x824) = iVar8;
        *(int *)(iVar8 + 0xc) = param_1;
        for (piVar9 = *(int **)(iVar1 + 0x2cc); piVar9 < *(int **)(iVar1 + 0x2d0);
            piVar9 = piVar9 + 1) {
          if (*piVar9 == *(int *)(param_1 + 0x824)) {
            fn_8251E530(iVar1 + 0x2cc,piVar9);
            goto LAB_8253eb8c;
          }
        }
        fn_82D83B68(*(unsigned int *)(iVar1 + 0x1f8));
LAB_8253eb8c:
        iVar1 = *(int *)(param_1 + 0x824);
        iVar8 = 0;
        if (0 < *(int *)(iVar1 + 0xd4)) {
          iVar10 = 0;
          do {
            aiStack_90[0] = *(int *)(iVar10 + *(int *)(iVar1 + 0xd0));
            iVar7 = *(int *)(aiStack_90[0] + 0xc);
            while (iVar4 = iVar7, iVar4 != 0) {
              aiStack_90[0] = iVar4;
              iVar7 = *(int *)(iVar4 + 0xc);
            }
            if (*(char *)(aiStack_90[0] + 0x18) == '\x01') {
              aiStack_90[0] = *(char *)(aiStack_90[0] + 0x10) + aiStack_90[0];
            }
            else {
              aiStack_90[0] = 0;
            }
            if ((aiStack_90[0] != 0) && (aiStack_90[0] != iVar2)) {
              if ((*(char *)(aiStack_90[0] + 0xe8) == '\x05') ||
                 (bVar6 = false, *(char *)(aiStack_90[0] + 0xe8) == '\x04')) {
                bVar6 = true;
              }
              if (!bVar6) {
                for (piVar9 = *(int **)(iVar3 + 0x138);
                    (piVar9 != *(int **)(iVar3 + 0x13c) && (*piVar9 != aiStack_90[0]));
                    piVar9 = piVar9 + 1) {
                }
                if (piVar9 == *(int **)(iVar3 + 0x13c)) {
                  fn_82536690(iVar3 + 0x138,aiStack_90);
                }
              }
            }
            iVar8 = iVar8 + 1;
            iVar10 = iVar10 + 4;
          } while (iVar8 < *(int *)(iVar1 + 0xd4));
        }
      }
    }
  }
  return;
}

