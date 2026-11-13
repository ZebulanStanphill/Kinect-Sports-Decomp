extern int fn_825200A8();


unsigned __int64 fn_8258AE88(unsigned int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  uVar2 = (unsigned __int64)*param_1;
  if (uVar2 != 0) {
    if ((param_2 & 0xffffffff) == 0) {
      return uVar2;
    }
    do {
      iVar1 = fn_825200A8(param_2);
      if (iVar1 != 0) break;
      uVar2 = -(unsigned __int64)(*(int *)((int)uVar2 + 4) != 0) & uVar2 + 4;
    } while ((uVar2 & 0xffffffff) != 0);
    if (((uVar2 & 0xffffffff) != 0) &&
       (uVar2 = -(unsigned __int64)(*(int *)((int)uVar2 + 4) != 0) & uVar2 + 4, (uVar2 & 0xffffffff) != 0))
    {
      return uVar2;
    }
  }
  return 0;
}

