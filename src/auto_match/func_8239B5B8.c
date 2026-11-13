extern int fn_8239B628();


void fn_8239B5B8(int param_1,__int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  
  iVar2 = (*(int (**)())(**(int **)(param_1 + 0x2e0) + 0x18))(*(int **)(param_1 + 0x2e0));
  uVar1 = *(unsigned int *)(((unsigned int)(_CountLeadingZeros(iVar2) >> 3) & 4) + **(int **)(param_1 + 8));
  fn_8239B628(param_1,*(unsigned int *)(iVar2 * 4 + **(int **)(param_1 + 8)),param_2);
  fn_8239B628(param_1,uVar1,param_2 + 0x2c);
  return;
}

