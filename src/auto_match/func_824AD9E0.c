extern int fn_824ADA90();
extern int fn_824ADBF0();


void fn_824AD9E0(int param_1)

{
  unsigned char uVar1;
  
  fn_824ADA90();
  uVar1 = fn_824ADBF0(param_1);
  *(unsigned char *)(*(int *)(param_1 + 0x3c) + 0x1c) = uVar1;
  return;
}

