extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_82DAFAD0(int param_1,int param_2)

{
  int iVar1;
  
  *(int *)(param_2 + 0xcc) = param_1;
  *(short *)(param_2 + 0xa8) = (short)*(unsigned int *)(param_1 + 0x4c);
  iVar1 = fn_82CE5410();
  if (*(unsigned int *)(param_1 + 0x4c) == (*(unsigned int *)(param_1 + 0x50) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(unsigned int *)(iVar1 + 0x10),(int *)(param_1 + 0x48),4);
  }
  *(int *)(*(int *)(param_1 + 0x4c) * 4 + *(int *)(param_1 + 0x48)) = param_2;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  return;
}

