extern int fn_82BE8E38();
extern __int64 fn_82BE8EA0();


__int64 fn_82BEB678(int param_1)

{
  __int64 lVar1;
  
  fn_82BE8E38();
  lVar1 = fn_82BE8EA0();
  return (*(__int64 *)(param_1 + 0x18) - *(__int64 *)(param_1 + 0x20)) + lVar1;
}

