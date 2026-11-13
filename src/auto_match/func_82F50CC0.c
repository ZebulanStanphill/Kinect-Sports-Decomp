extern int fn_82F4DA20();
extern int fn_82F53B80();


void fn_82F50CC0(int param_1)

{
  int iVar1;
  
  if (*(unsigned int *)(param_1 + 0x28) != 0) {
    iVar1 = fn_82F4DA20(2);
    if ((*(unsigned int *)(param_1 + 0x2c) != *(unsigned int *)(iVar1 + 8)) || (*(char *)(param_1 + 0x34) != '\0')) {
      *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(iVar1 + 8);
      *(unsigned char *)(param_1 + 0x34) = 0;
      fn_82F53B80(param_1);
    }
  }
  return;
}

