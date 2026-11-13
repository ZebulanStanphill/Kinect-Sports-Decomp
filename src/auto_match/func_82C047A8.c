extern int fn_82A1E968();
extern int fn_82A1F160();
extern unsigned int uStack_20;


__int64 fn_82C047A8(void)

{
  unsigned __int64 uVar1;
  unsigned __int64 uStack_20;
  __int64 alStack_18;
  
  fn_82A1F160(&alStack_18);
  fn_82A1E968(&uStack_20);
  uVar1 = alStack_18 / 1000;
  trapDoubleWordImmediate(6,uVar1,0);
  trapDoubleWordImmediate(5,uVar1 & ~((uStack_20 << 1 | uStack_20 >> 0x3f) - 1),0xffff);
  return (__int64)uStack_20 / (__int64)uVar1;
}

