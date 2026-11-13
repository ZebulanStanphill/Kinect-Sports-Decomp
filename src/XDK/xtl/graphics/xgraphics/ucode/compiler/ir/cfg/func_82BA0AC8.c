extern int fn_82BAFE48();


void fn_82BA0AC8(int param_1)

{
  int iVar1;
  
  iVar1 = fn_82BAFE48(*(unsigned int *)(param_1 + 0xac),0x12,0);
  *(unsigned char *)(param_1 + 0x818) = 1;
  *(unsigned int *)(param_1 + 0x81c) = *(unsigned int *)(iVar1 + 0x10);
  return;
}

