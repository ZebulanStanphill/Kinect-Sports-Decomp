extern int fn_82555B58();


void fn_82610700(int param_1)

{
  unsigned int iVar1;
  unsigned int uVar2;
  
  iVar1 = *(int *)(**(int **)(param_1 + 0x60) + 0x3e4);
  if (iVar1 == 0) {
    return;
  }
  uVar2 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x8c0);
  if (uVar2 == 0) {
    return;
  }
  fn_82555B58(uVar2 + 0x98,0);
  return;
}

