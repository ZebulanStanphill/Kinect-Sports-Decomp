void fn_83099BA0(unsigned char *param_1,int param_2)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(*(int *)(param_2 + 0x18) + 0x14);
  *param_1 = (unsigned char)((unsigned char)(-(unsigned __int64)uVar1 >> 0x18) & ~(unsigned char)(uVar1 >> 0x18)) >> 7;
  return;
}

