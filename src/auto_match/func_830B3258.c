extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_830B3258(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = fn_82CE5410();
  if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(unsigned int *)(iVar1 + 0x10),param_2,4);
  }
  *(unsigned int *)(param_2[1] * 4 + *param_2) = *(unsigned int *)(param_1 + 0x18);
  param_2[1] = param_2[1] + 1;
  iVar1 = fn_82CE5410();
  if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(unsigned int *)(iVar1 + 0x10),param_2,4);
  }
  *(unsigned int *)(param_2[1] * 4 + *param_2) = *(unsigned int *)(param_1 + 0x1c);
  param_2[1] = param_2[1] + 1;
  return;
}

