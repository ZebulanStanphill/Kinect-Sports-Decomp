extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_82CF6018(int *param_1)

{
  int iVar1;
  
  *(unsigned char *)(*param_1 + param_1[1] + -1) = 0x20;
  iVar1 = fn_82CE5410();
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(unsigned int *)(iVar1 + 0x14),param_1,1);
  }
  *(unsigned char *)(*param_1 + param_1[1]) = 0x20;
  param_1[1] = param_1[1] + 1;
  iVar1 = fn_82CE5410();
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(unsigned int *)(iVar1 + 0x14),param_1,1);
  }
  *(unsigned char *)(*param_1 + param_1[1]) = 0;
  param_1[1] = param_1[1] + 1;
  return;
}

