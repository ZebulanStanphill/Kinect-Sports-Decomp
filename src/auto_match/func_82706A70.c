void fn_82706A70(int param_1,char param_2)

{
  unsigned int uVar1;
  
  if (param_2 == '\0') {
    uVar1 = *(unsigned int *)(param_1 + 0xb00) & 0xffffffbf;
  }
  else {
    uVar1 = *(unsigned int *)(param_1 + 0xb00) | 0x40;
  }
  *(unsigned int *)(param_1 + 0xb00) = uVar1;
  return;
}

