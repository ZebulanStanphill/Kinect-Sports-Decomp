extern int fn_8269A1F0();
extern int fn_826BD868();


void fn_8269A700(int param_1)

{
  unsigned int iVar1;
  
  iVar1 = fn_826BD868(*(unsigned int *)(param_1 + 8));
  if (iVar1 == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x74);
  }
  fn_8269A1F0(*(unsigned int *)(param_1 + 4),(unsigned __int64)*(unsigned int *)(iVar1 + 0x14) - 0x4000);
  return;
}

