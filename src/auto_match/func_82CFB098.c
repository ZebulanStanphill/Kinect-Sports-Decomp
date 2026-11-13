extern int fn_82CFAE20();


unsigned __int64 fn_82CFB098(int param_1,__int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 8) == 0) {
    lVar3 = param_2;
    if ((param_3 & 0xffffffff) != 0) {
      if ((param_3 & 0xffffffff) == 1) {
        lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10) + param_2;
      }
      else {
        lVar3 = -1;
        if ((param_3 & 0xffffffff) < 3) {
          lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10) - param_2;
        }
      }
    }
    iVar4 = (int)lVar3;
    if (iVar4 < 0) {
      uVar2 = 1;
      *(unsigned int *)(param_1 + 0x10) = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x14);
      iVar5 = iVar4;
      if (iVar1 < iVar4) {
        iVar5 = iVar1;
      }
      uVar2 = (unsigned __int64)(iVar1 < iVar4);
      *(int *)(param_1 + 0x10) = iVar5;
    }
  }
  else {
    fn_82CFAE20();
    uVar2 = (**(int (***)())(**(int **)(param_1 + 8) + 0x1c))(*(int **)(param_1 + 8),param_2,param_3);
  }
  return uVar2;
}

