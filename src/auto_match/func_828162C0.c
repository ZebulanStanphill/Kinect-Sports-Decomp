extern int fn_82815268();
extern int fn_82816068();
extern int fn_82820CC0();
extern int fn_82F65390();


unsigned __int64 fn_828162C0(unsigned __int64 param_1,int param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  
  uVar3 = 0;
  if (param_3 != 0) {
    *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_2 + 0xc) | 0x20;
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    *(unsigned int *)(param_2 + 0x10) = *(unsigned int *)(param_2 + 0x10) | 4;
    iVar1 = fn_82F65390(*(unsigned int *)(param_2 + 0x1c),0xffffffff8201e0a0,4);
    if (iVar1 == 0) {
      uVar3 = fn_82816068(param_1,param_2);
    }
    else {
      iVar1 = fn_82F65390(*(unsigned int *)(param_2 + 0x1c),0xffffffff8201e0a8,4);
      if (iVar1 == 0) {
        uVar3 = fn_82820CC0(param_1,param_2);
      }
      else {
        uVar2 = *(unsigned int *)(param_2 + 0xc) | 1;
        *(unsigned int *)(param_2 + 0xc) = uVar2;
        if (uVar2 != 0) {
          uVar3 = fn_82815268(param_1,param_2,*(unsigned int *)(param_2 + 0x14));
        }
      }
    }
  }
  else {
    uVar3 = fn_82815268(param_1,param_2,*(unsigned int *)(param_2 + 0x14));
  }
  return uVar3;
}

