extern int fn_827F6898();
extern int fn_827F68A0();
extern int fn_827F7028();


void fn_827F3B30(int param_1,unsigned int param_2)

{
  unsigned __int64 uVar1;
  
  fn_827F6898(*(unsigned int *)(param_1 + 8));
  if ((param_2 & 0xffffffff) != 0) {
    uVar1 = fn_827F7028(*(unsigned int *)(param_1 + 8));
    param_2 = (uVar1 & 0xfffffffc) + param_2;
  }
  fn_827F68A0(*(unsigned int *)(param_1 + 8),param_2);
  return;
}

