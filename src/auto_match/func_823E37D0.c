extern int fn_822ABA88();
extern int fn_822AF138();


void fn_823E37D0(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2[4] * 4 + *param_2);
  iVar2 = *(int *)(iVar4 + 0x10);
  if (*(int *)(iVar4 + 8) != 0) {
    iVar4 = iVar2 * 0x150 + param_1;
    uVar3 = 0x21;
    *(unsigned char *)(iVar4 + 0x10b4) = 0;
    *(unsigned char *)(iVar4 + 0x10b5) = 0;
    *(unsigned int *)(iVar4 + 0x10b0) = 0;
    piVar1 = *(int **)(iVar2 * 4 + *(int *)(param_1 + 0x20));
    if (piVar1[1] - *piVar1 >> 2 == 0) {
      uVar3 = 0x19;
    }
    iVar2 = fn_822ABA88(*(unsigned int *)(param_2[4] * 4 + *param_2),0);
                    /* WARNING: Subroutine does not return */
    fn_822AF138(*(unsigned int *)(iVar2 + 0x110),uVar3);
  }
  if (*(int *)(*(int *)(param_3[4] * 4 + *param_3) + 8) != 0) {
    param_1 = *(int *)(*(int *)(param_3[4] * 4 + *param_3) + 0x10) * 0x150 + param_1;
    *(unsigned int *)(param_1 + 0x10b0) = 0;
    *(unsigned char *)(param_1 + 0x10b5) = 0;
    *(unsigned char *)(param_1 + 0x10b4) = 0;
    iVar2 = fn_822ABA88(*(unsigned int *)(param_3[4] * 4 + *param_3),0);
                    /* WARNING: Subroutine does not return */
    fn_822AF138(*(unsigned int *)(iVar2 + 0x110),0x20);
  }
  return;
}

