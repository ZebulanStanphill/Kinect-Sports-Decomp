extern int fn_826E96C8();
extern int fn_82F6BAB8();


unsigned __int64  fn_826E9938(int param_1)

{
  int lVar1;
  unsigned int uVar2;
  
  lVar1 = fn_82F6BAB8(*(unsigned int *)(param_1 + 0x10));
  if (lVar1 < 0) {
    uVar2 = fn_826E96C8();
    *(unsigned int *)(param_1 + 0x18) = uVar2;
  }
  return (int)lVar1;
}

