extern int fn_82AE5260();
extern int fn_82AE5988();


__int64 fn_82AE6018(__int64 param_1,unsigned __int64 param_2,__int64 param_3)

{
  __int64 lVar1;
  __int64 lVar2;
  
  lVar1 = fn_82AE5260(param_1 + 4);
  if ((int)lVar1 != -1) {
    while ((lVar1 + param_3 & 0xffffffffU) < 0x21) {
      lVar2 = fn_82AE5988(param_1 + 4,lVar1,(lVar1 + param_3) - 1);
      if ((int)lVar2 == -1) {
        return lVar1;
      }
      lVar1 = lVar2 + 1;
    }
  }
  return -1;
}

