extern int fn_82BD07B8();


unsigned int fn_82BD0948(int *param_1)

{
  unsigned int uVar1;
  
  uVar1 = fn_82BD07B8();
  return *(unsigned int *)(((uVar1 >> 5) + 2) * 4 + *param_1) >> (uVar1 & 0x1f) & 1;
}

