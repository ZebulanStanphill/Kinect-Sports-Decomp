extern int fn_82A77548();


void fn_82A77AA8(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  
  uVar2 = 0;
  *(unsigned int *)(param_1 + 0x7c) = 0;
  iVar1 = fn_82A77548();
  *(unsigned int *)(iVar1 + 0x74) = uVar2;
  if (*(unsigned int **)(iVar1 + 0x108) != (unsigned int *)0x0) {
    (**(int (***)())**(unsigned int **)(iVar1 + 0x108))();
  }
  return;
}

