extern int fn_826E96C8();
extern int fn_82F6BAB8();


int  fn_826E98E8(int param_1)

{
  int lVar1;
  unsigned int uVar2;
  
  lVar1 = fn_82F6BAB8(*(unsigned int *)(param_1 + 0x10));
  if (lVar1 < 0) {
    uVar2 = fn_826E96C8();
    *(unsigned int *)(param_1 + 0x18) = uVar2;
  }
  return lVar1;
}

