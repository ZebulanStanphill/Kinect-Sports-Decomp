extern int d3dx_crc32();


void fn_829AB2C8(int param_1)

{
  unsigned int uVar1;
  
  uVar1 = d3dx_crc32(0,0,0);
  *(unsigned int *)(param_1 + 0x600) = uVar1;
  return;
}

