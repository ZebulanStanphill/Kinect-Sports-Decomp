extern int fn_8225F160();
extern int fn_822ACAD8();
extern int fn_822AF138();
extern int fn_8236BA88();


void fn_823C44A0(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  fn_8236BA88(*(unsigned int *)**(unsigned int **)(param_1 + 8));
  fn_8236BA88(*(unsigned int *)(**(int **)(param_1 + 8) + 4));
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x4bc) + 0xc);
  uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x4bc) + 0x90);
  if (uVar2 < uVar1) {
    iVar6 = 0;
    iVar5 = 1;
  }
  else {
    if (uVar2 <= uVar1) {
      return;
    }
    iVar6 = 1;
    iVar5 = 0;
  }
  piVar3 = *(int **)(iVar6 * 4 + **(int **)(param_1 + 8));
  piVar4 = *(int **)(iVar5 * 4 + **(int **)(param_1 + 8));
  fn_822ACAD8(*(unsigned int *)(*(int *)(piVar3[4] * 4 + *piVar3) + 0x48),0xffffffff821ac494,
                    0xffffffff821b6034);
  fn_822ACAD8(*(unsigned int *)(*(int *)(piVar4[4] * 4 + *piVar4) + 0x48),0xffffffff821ac494,
                    0xffffffff821b6040);
  iVar5 = fn_8225F160();
  if (*(int *)(iVar5 + 8) == 0) {
    *(unsigned int *)(param_1 + 0x9ac) = 1;
  }
                    /* WARNING: Subroutine does not return */
  fn_822AF138(*(unsigned int *)(iVar6 * 4 + *(int *)(param_1 + 0xc)),1);
}

