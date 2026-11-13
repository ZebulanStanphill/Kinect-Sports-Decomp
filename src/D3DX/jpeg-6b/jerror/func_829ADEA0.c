void d3dx_emit_message(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (param_2 < 0) {
    if ((*(int *)(iVar1 + 0x6c) == 0) || (*(int *)(iVar1 + 0x68) >= 3)) {
      (*(int (**)())(iVar1 + 8))();
    }
    *(int *)(iVar1 + 0x6c) = *(int *)(iVar1 + 0x6c) + 1;
    return;
  }
  if (*(int *)(iVar1 + 0x68) >= param_2) {
    (*(int (**)())(iVar1 + 8))();
  }
  return;
}

