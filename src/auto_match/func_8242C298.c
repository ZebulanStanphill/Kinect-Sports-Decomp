extern int fn_82250A18();
extern int fn_822ABA88();
extern int fn_8242C1B8();
extern unsigned int lbl_832975B0;


void fn_8242C298(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = fn_8242C1B8();
  iVar2 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar2 = fn_82250A18();
  }
  if (*(char *)(iVar2 + 4) == '\0') {
    piVar3 = *(int **)((*(int *)(iVar1 + 0x2c) + 1) * 4 + **(int **)(param_1 + 8));
  }
  else if (*(int *)(iVar1 + 0x2c) == 0) {
    piVar3 = (int *)((unsigned int *)**(int **)(param_1 + 8))[1];
  }
  else {
    piVar3 = *(int **)**(int **)(param_1 + 8);
  }
  fn_822ABA88(*(unsigned int *)(piVar3[4] * 4 + *piVar3),0);
  return;
}

