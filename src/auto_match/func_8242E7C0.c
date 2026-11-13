extern int fn_822ABA88();

void fn_8242E7C0(int param_1)
{
  int *piVar1;
  int iVar2;
  int *obj;
  int i;

  for (i = 0; i < *(int *)(*(int *)(param_1 + 0x174) + 0xbc); i++) {
    piVar1 = (*(int ***)(param_1 + 8))[0][i];
    iVar2 = fn_822ABA88(*(int *)(piVar1[4] * 4 + *piVar1), 0);
    obj = *(int **)(iVar2 + 0x24);
    if (obj != 0) {
      (*(int (**)())(*obj + 0x24))(obj);
    }
  }
  *(float *)(*(int *)(param_1 + 0x174) + 0xcc) =
       *(float *)(*(int *)(param_1 + 0x174) + 0xd0);
}
