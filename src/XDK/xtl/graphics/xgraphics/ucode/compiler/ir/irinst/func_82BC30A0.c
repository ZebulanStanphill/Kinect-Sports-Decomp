void fn_82BC30A0(int param_1,unsigned int param_2)

{
  unsigned char uVar1;
  
  uVar1 = (unsigned char)param_2;
  *(unsigned int *)(param_1 + 0xa8) = param_2;
  *(unsigned char *)(param_1 + 0x84) = uVar1;
  *(unsigned char *)(param_1 + 0x85) = uVar1;
  *(unsigned char *)(param_1 + 0x86) = uVar1;
  *(unsigned char *)(param_1 + 0x87) = uVar1;
  return;
}

