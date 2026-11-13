extern int fn_82A3F6F0();
extern int fn_82A40AD8();
extern int fn_82A412D8();
extern int fn_82A4F4E0();


void fn_82A5C8F8(__int64 param_1)

{
  unsigned int iVar1;
  
  while (iVar1 = fn_82A40AD8(param_1 + 8), iVar1 != 0) {
    if (*(unsigned int *)(iVar1 + 8) != 5) {
      fn_82A4F4E0();
    }
  }
  fn_82A412D8(param_1 + 8);
  fn_82A3F6F0(param_1);
  return;
}

