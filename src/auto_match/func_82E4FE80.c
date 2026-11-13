extern int fn_82E4FF98();


unsigned __int64 fn_82E4FE80(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  uVar2 = 0;
  if (((param_2 & 0xffffffff) != 0) && ((param_1 & 0xffffffff) != 0)) {
    do {
      iVar1 = fn_82E4FF98(param_2,param_3);
      if (iVar1 == -0x7ffcffa9) {
        uVar2 = 0xffffffff80030057;
      }
      param_1 = param_1 - 1;
      param_2 = param_2 + 0x10;
    } while (param_1 != 0);
  }
  return uVar2;
}

