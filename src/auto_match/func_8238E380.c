extern int fn_82278B40();
extern int fn_822ABA88();
extern int fn_822AF138();
extern int fn_822CF300();
extern int fn_8236FB68();
extern int fn_82373530();
extern int fn_82374108();
extern int fn_82490FC8();
extern int fn_824C97F0();
extern int fn_82508078();
extern unsigned int lbl_821922D0;


void fn_8238E380(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  unsigned __int64 uVar11;
  int iVar12;
  
  iVar1 = *(int *)(param_1 + 8);
  fn_82278B40(iVar1 + 0x9a0);
  fn_82490FC8(*(unsigned int *)(*(int *)(param_1 + 8) + 0x94));
  iVar9 = *(int *)(*(int *)(param_1 + 8) + 0x54c);
  if (iVar9 != 0) {
    puVar2 = *(unsigned int **)(iVar9 + 4);
    piVar7 = (int *)puVar2[1];
    for (piVar8 = (int *)*puVar2; piVar8 != piVar7; piVar8 = piVar8 + 2) {
      fn_824C97F0(*(unsigned int *)(*piVar8 + 0x28),0xffffffff821b3ec4);
    }
  }
  iVar9 = *(int *)(param_1 + 8);
  piVar8 = *(int **)**(int **)(iVar9 + 8);
  piVar7 = (int *)((int *)**(int **)(iVar9 + 8))[1];
  if ((((int)*(float *)(*(int *)(piVar8[4] * 4 + *piVar8) + 0x20) == 0) &&
      ((int)*(float *)(*(int *)(piVar7[4] * 4 + *piVar7) + 0x20) == 0)) &&
     (lVar3 = fn_8236FB68(9), lVar3 != 0)) {
    fn_82508078(*(unsigned int *)(iVar9 + 0xa4),lVar3,0);
  }
  fn_82374108(*(unsigned int *)(param_1 + 8));
  *(unsigned int *)(param_1 + 0x14) = lbl_821922D0;
  piVar8 = *(int **)(iVar1 + 8);
  iVar9 = *(int *)(iVar1 + 0x1e4) * 4;
  piVar7 = *(int **)(iVar9 + *piVar8);
  uVar4 = fn_82373530(iVar1);
  iVar5 = fn_822ABA88(*(unsigned int *)(piVar7[4] * 4 + *piVar7),uVar4);
  iVar10 = 0;
  if ((piVar8[1] - *piVar8 & 0xfffffffcU) != 0) {
    iVar12 = 0;
    do {
      uVar11 = 0;
      piVar8 = *(int **)(**(int **)(iVar1 + 8) + iVar12);
      if (*(int *)(*(int *)(piVar8[4] * 4 + *piVar8) + 8) != 0) {
        do {
          piVar7 = *(int **)(**(int **)(iVar1 + 8) + iVar12);
          iVar6 = fn_822ABA88(*(unsigned int *)(piVar7[4] * 4 + *piVar7),uVar11);
          if (*(int *)(iVar6 + 0x24) == 0) {
            uVar4 = 5;
            if (iVar6 != iVar5) {
              uVar4 = 3;
            }
            fn_822CF300(iVar6,uVar4);
          }
          uVar11 = uVar11 + 1;
        } while ((uVar11 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(*(int *)(piVar8[4] * 4 + *piVar8) + 8)
                );
      }
      iVar10 = iVar10 + 1;
      iVar12 = iVar12 + 4;
    } while (iVar10 < (*(int **)(iVar1 + 8))[1] - **(int **)(iVar1 + 8) >> 2);
  }
                    /* WARNING: Subroutine does not return */
  fn_822AF138(*(unsigned int *)(iVar9 + *(int *)(iVar1 + 0xc)),5);
}

