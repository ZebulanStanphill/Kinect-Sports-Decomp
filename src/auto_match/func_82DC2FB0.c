extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_82DC2FB0(int param_1,unsigned int param_2,unsigned int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = fn_82CE5410();
  if (*(unsigned int *)(iVar1 + 0x20) == (*(unsigned int *)(iVar1 + 0x24) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(unsigned int *)(iVar2 + 0x10),(int *)(iVar1 + 0x1c),4);
  }
  *(unsigned int *)(*(int *)(iVar1 + 0x20) * 4 + *(int *)(iVar1 + 0x1c)) = 0x18;
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = fn_82CE5410();
  if (*(unsigned int *)(iVar1 + 0x2c) == (*(unsigned int *)(iVar1 + 0x30) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(unsigned int *)(iVar2 + 0x10),(int *)(iVar1 + 0x28),4);
  }
  *(unsigned int *)(*(int *)(iVar1 + 0x2c) * 4 + *(int *)(iVar1 + 0x28)) = param_2;
  *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + 1;
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = fn_82CE5410();
  if (*(unsigned int *)(iVar1 + 0x20) == (*(unsigned int *)(iVar1 + 0x24) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(unsigned int *)(iVar2 + 0x10),(int *)(iVar1 + 0x1c),4);
  }
  *(unsigned int *)(*(int *)(iVar1 + 0x20) * 4 + *(int *)(iVar1 + 0x1c)) = param_3;
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  return;
}

