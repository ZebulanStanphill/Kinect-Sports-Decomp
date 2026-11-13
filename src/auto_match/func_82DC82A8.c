extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_82DC82A8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 8;
  if (param_1 == 0) {
    iVar2 = 0;
  }
  iVar1 = fn_82CE5410();
  if (*(unsigned int *)(param_2 + 0x16c) == (*(unsigned int *)(param_2 + 0x170) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(unsigned int *)(iVar1 + 0x10),(int *)(param_2 + 0x168),4);
  }
  *(int *)(*(int *)(param_2 + 0x16c) * 4 + *(int *)(param_2 + 0x168)) = iVar2;
  *(int *)(param_2 + 0x16c) = *(int *)(param_2 + 0x16c) + 1;
  return;
}

