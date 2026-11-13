extern int fn_8281FEB0();


void fn_82817160(int param_1)

{
  int iVar1;
  
  iVar1 = fn_8281FEB0();
  if (iVar1 != 0) {
    *(unsigned int *)(param_1 + 0x70) = *(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x28);
  }
  return;
}

