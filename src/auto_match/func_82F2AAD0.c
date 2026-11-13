extern int fn_82F02410();


void fn_82F2AAD0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,unsigned int param_5,
                  int param_6)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  int iVar5;
  
  uVar3 = (unsigned __int64)((int)param_3 >> 0x1f);
  uVar3 = (param_3 ^ uVar3) - uVar3;
  if ((*(int *)(param_1 + 0x624) == 0) || (4 < *(int *)(param_6 + 0x60))) {
    if ((uVar3 & 0xffffffff) < (unsigned __int64)param_5) {
      puVar2 = (unsigned int *)((int)((uVar3 & 0xffffffff) << 3) + param_4);
      fn_82F02410(param_2,*puVar2,puVar2[1]);
      if ((uVar3 & 0xffffffff) == 0) {
        return;
      }
    }
    else {
      puVar2 = (unsigned int *)(param_5 * 8 + param_4);
      fn_82F02410(param_2,*puVar2,puVar2[1]);
      fn_82F02410(param_2,uVar3,8);
    }
  }
  else {
    if (*(int *)(param_6 + 0x60) < 3) {
      iVar5 = 2;
      lVar4 = 3;
    }
    else {
      iVar5 = 1;
      lVar4 = 1;
    }
    uVar1 = (unsigned int)((int)lVar4 + (int)uVar3) >> iVar5;
    if (uVar1 < param_5) {
      puVar2 = (unsigned int *)(uVar1 * 8 + param_4);
      fn_82F02410(param_2,*puVar2,puVar2[1]);
      if ((uVar3 & 0xffffffff) == 0) {
        return;
      }
      fn_82F02410(param_2,(lVar4 - (unsigned __int64)(uVar1 << iVar5)) + uVar3,iVar5);
      fn_82F02410(param_2,((param_3 | ~-param_3) & 0xffffffff) >> 0x1f,1);
      return;
    }
    puVar2 = (unsigned int *)(param_5 * 8 + param_4);
    fn_82F02410(param_2,*puVar2,puVar2[1]);
    fn_82F02410(param_2,uVar3,iVar5 + 8);
  }
  fn_82F02410(param_2,((param_3 | ~-param_3) & 0xffffffff) >> 0x1f,1);
  return;
}

