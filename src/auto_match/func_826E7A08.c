extern int fn_82F63CA0();
extern int fn_82F691F0();


unsigned __int64 fn_826E7A08(int param_1,__int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar2;
  __int64 lVar1;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar2 = (**(int (***)())(**(int **)(param_1 + 0x10) + 0x10))();
    *(unsigned int *)(param_1 + 0x34) = uVar2;
    *(unsigned char *)(param_1 + 0x38) = 0;
  }
  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2c);
  if (uVar3 < *(unsigned int *)(param_1 + 0x30)) {
    uVar4 = *(unsigned int *)(param_1 + 0x30) - uVar3;
    if ((param_3 & 0xffffffff) < (uVar4 & 0xffffffff)) {
      uVar4 = param_3;
    }
    fn_82F63CA0(param_2,*(unsigned int *)(param_1 + 0x3c) + uVar3,uVar4);
    param_3 = param_3 - uVar4;
    param_2 = uVar4 + param_2;
    *(int *)(param_1 + 0x2c) = (int)uVar4 + *(int *)(param_1 + 0x2c);
  }
  if (*(unsigned int *)(param_1 + 0x30) <= *(unsigned int *)(param_1 + 0x2c)) {
    *(unsigned int *)(param_1 + 0x30) = 0;
    *(unsigned int *)(param_1 + 0x2c) = 0;
  }
  if ((param_3 & 0xffffffff) != 0) {
    lVar1 = (**(int (***)())(**(int **)(param_1 + 0x10) + 0x28))
                      (*(int **)(param_1 + 0x10),param_2,param_3);
    uVar4 = lVar1 + uVar4;
    *(int *)(param_1 + 0x34) = (int)lVar1 + *(int *)(param_1 + 0x34);
    if ((int)lVar1 < (int)param_3) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(lVar1 + param_2,0,param_3 - lVar1);
    }
  }
  return uVar4;
}

