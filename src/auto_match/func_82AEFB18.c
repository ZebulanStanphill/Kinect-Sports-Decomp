void fn_82AEFB18(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  
  uVar1 = *param_1 >> 5 & 0xff;
  *param_1 = ((((uVar1 >> (param_2 >> 5 & 6) & 3) << 2 | uVar1 >> (param_2 >> 3 & 6) & 3) << 2 |
              uVar1 >> (param_2 >> 1 & 6) & 3) << 2 | uVar1 >> ((param_2 & 3) << 1) & 3) << 5 |
             *param_1 & 0xffffe01f;
  return;
}

