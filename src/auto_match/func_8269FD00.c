extern int fn_8269F500();


__int64 fn_8269FD00(int *param_1)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  int iVar3;
  
  uVar1 = (unsigned __int64)(unsigned int)param_1[0x20];
  if (param_1[0x20] == 0) {
    uVar1 = fn_8269F500(param_1);
  }
  if ((uVar1 & 0xffffffff) == 0) {
    uVar1 = (unsigned __int64)(unsigned int)param_1[0x20];
    if (param_1[0x20] == 0) {
      uVar1 = fn_8269F500(param_1);
    }
    if ((uVar1 & 0xffffffff) == 0) {
      iVar3 = (**(int (***)())(*param_1 + 0x58))(param_1);
      lVar2 = (unsigned __int64)*(unsigned int *)(iVar3 + 0x78) + 8;
    }
    else {
      lVar2 = uVar1 + 8;
    }
  }
  else {
    lVar2 = uVar1 + 0x10;
  }
  return lVar2;
}

