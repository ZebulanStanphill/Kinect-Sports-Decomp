extern int fn_8242E560();


void fn_82338F48(int param_1,unsigned int param_2)

{
  int iVar1;
  
  iVar1 = fn_8242E560(*(unsigned int *)(*(int *)(param_1 + 0x1a0) + 0xc));
  if (iVar1 == 0) {
    *(unsigned int *)(*(int *)(param_1 + 0x1a0) + 0x2c) = param_2;
  }
  return;
}

