extern int fn_82980328();
extern int fn_82986C50();


unsigned __int64 fn_82986DF0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar3;
  unsigned __int64 uVar2;
  
  iVar3 = fn_82986C50();
  if ((((iVar3 != 0) && (iVar1 = *(int *)(iVar3 + 0x10), iVar1 != 0)) && (*(int *)(iVar1 + 4) == 9))
     && (*(int *)(iVar1 + 0x10) == 0)) {
    uVar2 = fn_82980328(param_1,param_3,(unsigned __int64)*(unsigned int *)(*(int *)(iVar3 + 0x20) + 8) + 0x10,
                          iVar3 + 0x30);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    return 0;
  }
  return 0xffffffff80004005;
}

