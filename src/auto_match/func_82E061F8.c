extern int fn_82CE5410();
extern int fn_82CE63B0();


unsigned __int64 fn_82E061F8(int param_1,int param_2,int *param_3)

{
  int iVar2;
  unsigned __int64 uVar1;
  int iVar3;
  
  iVar2 = fn_82CE5410();
  if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(unsigned int *)(iVar2 + 0x10),param_3,4);
  }
  *(int *)(param_3[1] * 4 + *param_3) = param_1;
  param_3[1] = param_3[1] + 1;
  if (param_1 == param_2) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x2c)) {
      iVar3 = 0;
      do {
        uVar1 = fn_82E061F8(*(unsigned int *)(*(int *)(param_1 + 0x28) + iVar3),param_2,param_3);
        if ((int)uVar1 == 0) {
          return uVar1;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < *(int *)(param_1 + 0x2c));
    }
    param_3[1] = param_3[1] + -1;
  }
  return uVar1;
}

