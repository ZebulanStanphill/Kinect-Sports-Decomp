extern int fn_82C53970();
extern int fn_82C7F8F8();
extern int fn_82C7FCA0();


int fn_82C80278(unsigned char *param_1)

{
  int uVar1;
  
  if (param_1 == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x128) == 0) {
    uVar1 = fn_82C7FCA0(param_1);
    return uVar1;
  }
  fn_82C7F8F8(param_1);
  fn_82C53970(param_1);
  return 0;
}

