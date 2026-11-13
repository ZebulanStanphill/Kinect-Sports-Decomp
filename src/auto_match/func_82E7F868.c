extern unsigned int *auStack_1c;
extern int fn_82E7ECB8();
extern int fn_82E7ED68();
extern int fn_82F68CC0();
extern unsigned int uStack_20;


__int64 fn_82E7F868(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  __int64 lVar1;
  unsigned int uStack_20;
  unsigned int auStack_1c [3];
  
  auStack_1c[0] = 0;
  uStack_20 = 0;
  if ((param_3 & 0xffffffff) == 0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    lVar1 = fn_82E7ED68(param_1,param_2,auStack_1c,param_3);
    if ((-1 < lVar1) && (lVar1 = fn_82E7ECB8(param_1,&uStack_20), -1 < lVar1)) {
      fn_82F68CC0(auStack_1c[0],param_3,uStack_20);
    }
  }
  return lVar1;
}

