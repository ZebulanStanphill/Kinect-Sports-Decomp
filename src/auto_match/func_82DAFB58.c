extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_82DAFB58(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_82CE5410();
  if (*(unsigned int *)(param_1 + 0x3c) == (*(unsigned int *)(param_1 + 0x40) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(unsigned int *)(iVar1 + 0x10),(int *)(param_1 + 0x38),4);
  }
  *(int *)(*(int *)(param_1 + 0x3c) * 4 + *(int *)(param_1 + 0x38)) = param_2;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  *(int *)(param_2 + 0xc) = param_1;
  return;
}

