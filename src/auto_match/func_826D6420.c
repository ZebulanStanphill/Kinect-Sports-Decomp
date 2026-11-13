extern int fn_8267BE38();


void fn_826D6420(int param_1)

{
  unsigned int uVar1;
  
  while (*(unsigned int *)(param_1 + 8) != 0) {
    uVar1 = **(unsigned int **)(param_1 + 8);
    fn_8267BE38(*(unsigned int *)(param_1 + 8));
    *(unsigned int *)(param_1 + 8) = uVar1;
  }
  return;
}

