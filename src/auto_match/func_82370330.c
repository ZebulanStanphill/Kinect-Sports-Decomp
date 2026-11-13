extern int fn_8236FB68();
extern int fn_82375E60();
extern int fn_82508078();


void fn_82370330(int param_1)

{
  int lVar1;
  
  fn_82375E60();
  lVar1 = fn_8236FB68(0x17);
  if (lVar1 != 0) {
    fn_82508078(*(unsigned int *)(param_1 + 0xa4),lVar1,0);
  }
  return;
}

