extern int fn_83039928();
extern int fn_8303A630();
extern int fn_8303A688();


void fn_8301BBB0(int param_1)

{
  unsigned int uVar1;
  
  if (*(int *)(param_1 + 8) == 3) {
    fn_83039928(*(int *)(param_1 + 0xc) + 0x10);
    fn_8303A688(*(unsigned int *)(*(int *)(param_1 + 0xc) + 0xfc));
    uVar1 = 1;
  }
  else {
    fn_8303A630(*(unsigned int *)(*(int *)(param_1 + 0xc) + 0xfc));
    uVar1 = 2;
  }
  *(unsigned int *)(param_1 + 8) = uVar1;
  return;
}

