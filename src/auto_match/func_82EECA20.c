extern int fn_82E4FE40();


int fn_82EECA20(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (param_1 - *(int *)(param_1 + -4)) + -0x38;
  if (param_2 != 0) {
    iVar1 = 0;
    if (*(int *)(param_2 + 0x48) != 0) {
      iVar1 = fn_82E4FE40();
    }
    *(unsigned int *)(param_2 + 0x48) = 0;
    *(unsigned int *)(param_2 + 0x44) = 0;
  }
  return iVar1;
}

