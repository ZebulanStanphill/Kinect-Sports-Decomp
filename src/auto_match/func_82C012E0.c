extern int fn_82C001C0();


void fn_82C012E0(int param_1)

{
  unsigned int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x7c);
  if ((iVar1 == 0x5a0) && (*(unsigned int *)(param_1 + 0x80) == 0x438)) {
    *(unsigned int *)(param_1 + 0x7c) = 0x780;
  }
  fn_82C001C0(param_1);
  if (iVar1 != *(int *)(param_1 + 0x7c)) {
    *(int *)(param_1 + 0x7c) = iVar1;
  }
  return;
}

