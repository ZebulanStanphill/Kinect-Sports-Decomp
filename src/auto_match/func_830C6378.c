unsigned int fn_830C6378(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = param_2 - param_1;
  uVar2 = param_2 - param_3 ^ uVar1;
  return param_3 & ~((int)(uVar2 | uVar1) >> 0x1f) | (int)uVar1 >> 0x1f & param_1 |
         (int)uVar2 >> 0x1f & param_2;
}

