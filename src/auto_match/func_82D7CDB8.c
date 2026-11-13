extern int fn_82CE5410();
extern int fn_82CE63B0();


__int64 fn_82D7CDB8(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  __int64 lVar3;
  int iVar4;
  
  uVar1 = *param_1;
  if ((unsigned __int64)uVar1 < 0x200) {
    uVar2 = *(unsigned int *)(param_1[2] * 4 + param_1[1] + -4);
    *param_1 = uVar1 + 0x80;
    lVar3 = (unsigned __int64)uVar2 + (unsigned __int64)uVar1;
  }
  else {
    iVar4 = fn_82CE5410();
    lVar3 = (**(int (***)())(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0x200);
    iVar4 = fn_82CE5410();
    if (param_1[2] == (param_1[3] & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(unsigned int *)(iVar4 + 0x10),param_1 + 1,4);
    }
    *(int *)(param_1[2] * 4 + param_1[1]) = (int)lVar3;
    param_1[2] = param_1[2] + 1;
    *param_1 = 0x80;
  }
  return lVar3;
}

