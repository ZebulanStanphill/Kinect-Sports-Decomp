extern void fn_8303A630();
extern void fn_8303A638();


void fn_8301BB58(int param_1)

{
  unsigned int uVar1;
  
  if (*(int *)(param_1 + 8) != 1) {
    fn_8303A630(*(unsigned int *)(*(int *)(param_1 + 0xc) + 0xfc));
    *(int *)(param_1+8)=2;
  }
  else {
    fn_8303A638(*(unsigned int *)(*(int *)(param_1 + 0xc) + 0xfc));
    *(int *)(param_1+8)=3;
  }

  return;
}

