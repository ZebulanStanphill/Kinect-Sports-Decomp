extern int fn_82BD3FC0();
extern int fn_82BD75C0();
extern int fn_82BD8D78();


int  fn_82BD44D8(int param_1)

{
  int lVar1;
  
  if ((*(int *)(param_1 + 0x18) == 0) && (*(int *)(param_1 + 0x24) == 1)) {
    fn_82BD8D78(*(unsigned int *)(param_1 + 0x4c));
  }
  lVar1 = fn_82BD75C0(param_1);
  if (lVar1 < 0) {
    fn_82BD3FC0(param_1);
  }
  return lVar1;
}

