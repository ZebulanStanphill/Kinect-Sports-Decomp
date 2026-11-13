void fn_82ACA598(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  
  uVar1 = *param_1;
  *param_1 = ((((param_2 >> (uVar1 >> 10 & 6) & 3) << 2 | param_2 >> (uVar1 >> 8 & 6) & 3) << 2 |
              param_2 >> (uVar1 >> 6 & 6) & 3) << 2 | param_2 >> (uVar1 >> 4 & 6) & 3) << 5 |
             uVar1 & 0xffffe01f;
  return;
}

