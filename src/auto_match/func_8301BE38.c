extern int fn_8303A630();
extern int fn_8303A720();


void fn_8301BE38(int param_1)

{
  unsigned int uVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    fn_8303A720(*(unsigned int *)(*(int *)(param_1 + 0xc) + 0xfc));
    uVar1 = 1;
  }
  else {
    if (*(int *)(param_1 + 8) == 2) {
      return;
    }
    fn_8303A630(*(unsigned int *)(*(int *)(param_1 + 0xc) + 0xfc));
    uVar1 = 2;
  }
  *(unsigned int *)(param_1 + 8) = uVar1;
  return;
}

