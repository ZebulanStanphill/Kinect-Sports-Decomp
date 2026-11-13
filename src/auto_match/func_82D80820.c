extern int fn_82CE5410();


void fn_82D80820(int param_1)

{
  int iVar1;
  
  if (*(unsigned int *)(param_1 + 100) != 0) {
    iVar1 = fn_82CE5410();
    (*(int (**)())(**(int **)(iVar1 + 0x10) + 8))
              (*(int **)(iVar1 + 0x10),*(unsigned int *)(param_1 + 100),0x200);
  }
  return;
}

