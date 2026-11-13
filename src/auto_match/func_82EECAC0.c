extern int fn_82F49100();


unsigned __int64 fn_82EECAC0(unsigned __int64 param_1,unsigned __int64 param_2,short param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int aiStack_20 [4];
  
  aiStack_20[0] = 0;
  uVar2 = fn_82F49100(param_2,0,aiStack_20);
  if (-1 < (int)uVar2) {
    if ((((int)uVar2 == 0) && (uVar1 = *(unsigned int *)(aiStack_20[0] + 0x14), (uVar1 & 0x80) == 0)) &&
       ((param_3 == 0 || ((uVar1 & 0x2000) == 0)))) {
      if ((uVar1 & 0x200) != 0) {
        return uVar2;
      }
      return 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}

