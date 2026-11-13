extern int fn_82882E60();


void fn_82883AB8(int param_1)

{
  unsigned int uVar1;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar1 = fn_82882E60(param_1,*(unsigned int *)(*(int *)(param_1 + 4) + 0x30));
    *(unsigned int *)(param_1 + 4) = uVar1;
  }
  return;
}

