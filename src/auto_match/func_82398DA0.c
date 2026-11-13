extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_822ABA88();
extern int fn_822B6FF0();
extern int fn_822B7068();
extern int fn_82522588();
extern int fn_825275B0();
extern unsigned int iStack_4c;


void fn_82398DA0(int param_1,int param_2)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_50 [4];
  int iStack_4c;
  
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0xa8) != 0) {
      piVar4 = *(int **)(param_1 + 8);
      iVar6 = 0;
      if ((piVar4[1] - *piVar4 & 0xfffffffcU) != 0) {
        iVar7 = 0;
        do {
          uVar8 = 0;
          piVar4 = *(int **)(iVar7 + *piVar4);
          iVar2 = *(int *)(piVar4[4] * 4 + *piVar4);
          if (*(int *)(iVar2 + 8) != 0) {
            do {
              iVar2 = fn_822ABA88(iVar2,uVar8);
              iVar3 = fn_822B6FF0(iVar2,*(unsigned int *)(param_2 + 0xa8));
              if (iVar3 != 0) {
                if (*(int *)(iVar2 + 0x24) == 0) {
                  fn_825275B0(*(unsigned int *)(param_2 + 0xa8));
                }
                else {
                  fn_822B7068(iVar2,*(unsigned int *)(param_2 + 0xa8));
                  iVar3 = *(int *)(param_2 + 0xa8);
                  lVar9 = 2;
                  piVar5 = (int *)(*(int *)(iVar2 + 0x11c) + 0x10);
                  do {
                    if (*piVar5 == iVar3) {
                      *piVar5 = 0;
                      *(unsigned char *)(piVar5 + 0xc) = 0;
                      *(unsigned char *)((int)piVar5 + 0x31) = 0;
                      piVar5[1] = -1;
                      *(unsigned short *)(piVar5 + 2) = 0x5b;
                      puVar1 = (unsigned int *)((unsigned int)(piVar5 + 8) & 0xfffffff0);
                      *puVar1 = in_register_000104d0;
                      puVar1[1] = in_register_000104d4;
                      puVar1[2] = in_register_000104d8;
                      puVar1[3] = in_vr77;
                      *(unsigned char *)((int)piVar5 + 0x32) = 0;
                      piVar5[0xd] = 0;
                      piVar5[0xe] = 0;
                    }
                    piVar5 = piVar5 + 0x10;
                    lVar9 = lVar9 + -1;
                  } while (lVar9 != 0);
                }
              }
              uVar8 = uVar8 + 1;
              iVar2 = *(int *)(piVar4[4] * 4 + *piVar4);
            } while ((uVar8 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar2 + 8));
          }
          piVar4 = *(int **)(param_1 + 8);
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + 4;
        } while (iVar6 < piVar4[1] - *piVar4 >> 2);
      }
    }
    for (uVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0x30);
        (uVar8 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_1 + 0x34); uVar8 = uVar8 + 8) {
      piVar4 = (int *)fn_82522588(auStack_50,uVar8);
      iVar6 = *(int *)(*piVar4 + 0x2d8);
      if ((iVar6 != 0) && (iVar6 == param_2)) {
        *(unsigned int *)(*piVar4 + 0x2d8) = 0;
      }
      if (iStack_4c != 0) {
        fn_822315A0();
      }
    }
  }
  return;
}

