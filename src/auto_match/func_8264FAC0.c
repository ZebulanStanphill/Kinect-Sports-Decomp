extern int fn_82A1E968();


int  fn_8264FAC0(int param_1)

{
  __int64 alStack_20 [2];
  
  fn_82A1E968(alStack_20);
  return (alStack_20[0] >> 10 & 0xffffffffU) - (unsigned __int64)*(unsigned int *)(param_1 + 0x5584);
}

