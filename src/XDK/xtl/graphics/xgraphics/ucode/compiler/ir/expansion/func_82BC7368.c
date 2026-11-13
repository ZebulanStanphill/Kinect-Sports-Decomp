extern int fn_82BBFFC8();


unsigned int fn_82BC7368(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  
  uVar2 = *(unsigned int *)(param_1 + 4) - 1;
  if (uVar2 < *(unsigned int *)(param_1 + 4)) {
    puVar3 = (unsigned int *)(uVar2 * 4 + *(int *)(param_1 + 8));
  }
  else {
    puVar3 = (unsigned int *)0x0;
  }
  uVar1 = *puVar3;
  fn_82BBFFC8(param_1,(unsigned __int64)*(unsigned int *)(param_1 + 4) - 1);
  return uVar1;
}

