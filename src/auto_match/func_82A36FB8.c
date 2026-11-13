extern int fn_82A28E60();
extern int fn_82A2A360();


unsigned __int64 fn_82A36FB8(unsigned __int64 param_1)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  
  uVar1 = fn_82A2A360();
  lVar2 = fn_82A28E60(uVar1,0,param_1);
  return -(unsigned __int64)(lVar2 == 0) & param_1;
}

