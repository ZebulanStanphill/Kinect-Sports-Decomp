extern int fn_8259A230();
extern int fn_82A1BB18();


__int64 fn_82599C60(void)

{
  unsigned __int64 uVar1;
  
  fn_82A1BB18();
  uVar1 = fn_8259A230();
  return (uVar1 & 0x1fffffff) * 8 + -0x7cd90b58;
}

