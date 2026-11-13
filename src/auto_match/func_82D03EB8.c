extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_82D03EB8(unsigned int param_1,unsigned __int64 param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = fn_82CE5410();
  if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(unsigned int *)(iVar1 + 0x10),param_3,4);
  }
  *(unsigned int *)(param_3[1] * 4 + *param_3) = param_1;
  param_3[1] = param_3[1] + 1;
  return;
}

