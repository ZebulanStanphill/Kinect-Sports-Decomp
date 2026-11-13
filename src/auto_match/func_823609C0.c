extern int fn_822ABA88(int, unsigned int);
extern int fn_822C72E0(int, char *);
extern unsigned int strlen(const char *);

void fn_823609C0(int param_1, int param_2, char *param_3)
{
  int *piVar2;
  int iVar3;
  unsigned int i;

  i = 0;
  piVar2 = *(int **)(**(int **)(param_1 + 8) + param_2 * 4);
  iVar3 = *(int *)(piVar2[4] * 4 + *piVar2);
  if (*(unsigned int *)(iVar3 + 8) > 0) {
    do {
      if (strlen(param_3) != 0) {
        iVar3 = fn_822ABA88(iVar3, i);
        fn_822C72E0(*(int *)(*(int *)(iVar3 + 0x114) + 0x20), param_3);
      }
      i = i + 1;
      iVar3 = *(int *)(piVar2[4] * 4 + *piVar2);
    } while (i < *(unsigned int *)(iVar3 + 8));
  }
}
