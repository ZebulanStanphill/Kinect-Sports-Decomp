unsigned int fn_82802448(int param_1,int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  
  uVar2 = param_2 & 0x1f;
  puVar1 = (unsigned int *)(((unsigned int)((param_2 & 0xffffffff) >> 3) & 0x1ffffffc) + param_1);
  return ((puVar1[1] << 1) << (0x1f - uVar2) | *puVar1 >> uVar2) &
         (1 << param_3) - 1U;
}

