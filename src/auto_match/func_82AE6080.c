extern int fn_82AE51F8();
extern int fn_82AE56A8();


__int64 fn_82AE6080(__int64 param_1,unsigned __int64 param_2,__int64 param_3)

{
  __int64 lVar1;
  __int64 lVar2;
  
  lVar1 = fn_82AE51F8(param_1 + 8);
  if ((int)lVar1 != -1) {
    while ((lVar1 + param_3 & 0xffffffffU) < 0x101) {
      lVar2 = fn_82AE56A8(param_1 + 8,lVar1,(lVar1 + param_3) - 1);
      if ((int)lVar2 == -1) {
        return lVar1;
      }
      lVar1 = lVar2 + 1;
    }
  }
  return -1;
}

