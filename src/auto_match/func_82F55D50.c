extern unsigned int fStack_20;
extern int fn_82F55CC8();
extern unsigned int lbl_82010E78;
extern unsigned int lbl_82057270;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82F55D50(void)

{
  unsigned __int64 uVar1;
  double dVar2;
  struct { float first; float second; } stack_pair_20;

  
  dVar2 = (double)lbl_821AAD20;
  stack_pair_20.first = lbl_821AAD20;
  stack_pair_20.second = lbl_821AAD20;
  fn_82F55CC8(&stack_pair_20.first,&stack_pair_20.second);
  if (((((double)lbl_82057270 <= (double)stack_pair_20.first) || ((double)stack_pair_20.first <= dVar2)) ||
      ((double)lbl_82010E78 <= (double)stack_pair_20.second)) ||
     (uVar1 = 1, (double)stack_pair_20.second <= dVar2)) {
    uVar1 = 0;
  }
  return uVar1;
}

