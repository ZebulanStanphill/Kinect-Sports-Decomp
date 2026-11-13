extern int fn_822ABA88();
extern int fn_822AF138();


void fn_823985A8(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(param_1 + 8);
  iVar2 = 0;
  if ((piVar3[1] - *piVar3 & 0xfffffffcU) != 0) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)((*(int **)(*piVar3 + iVar4))[4] * 4 + **(int **)(*piVar3 + iVar4));
      if (*(int *)(iVar1 + 8) != 0) {
        iVar2 = fn_822ABA88(iVar1,0);
                    /* WARNING: Subroutine does not return */
        fn_822AF138(*(unsigned int *)(iVar2 + 0x110),3);
      }
      piVar3 = *(int **)(param_1 + 8);
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar2 < piVar3[1] - *piVar3 >> 2);
  }
  return;
}

