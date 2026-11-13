extern int fn_822AF138(int, int);
extern int fn_823C3AE0(int);

void fn_823DEDB8(int param_1)
{
  int iVar1;

  iVar1 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 0xc) = *(int *)(iVar1 + 0xe24);
  *(unsigned int *)(param_1 + 0x10) = *(int *)(iVar1 + 0xe24) == 0;
  if (*(int *)(iVar1 + 0x9a0) == 0) {
    fn_823C3AE0(iVar1);
  }
  fn_822AF138(*(int *)(*(int *)(param_1 + 0xc) * 4 + *(int *)(iVar1 + 0xc)), 7);
  fn_822AF138(*(int *)(*(int *)(param_1 + 0x10) * 4 + *(int *)(iVar1 + 0xc)), 8);
}
