extern unsigned int *auStack_1c;
extern int fn_82CE3488();
extern int memcpy();
extern unsigned int uStack_20;


__int64 fn_82CE3818(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  __int64 lVar1;
  unsigned int uStack_20;
  unsigned int auStack_1c;
  
  uStack_20 = 1;
  lVar1 = fn_82CE3488(param_1,&auStack_1c,&uStack_20,param_4,param_2);
  if (-1 < lVar1) {
    memcpy(param_2,auStack_1c,uStack_20);
  }
  return lVar1;
}

