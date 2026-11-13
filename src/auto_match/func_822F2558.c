extern int fn_822C16B8();
extern int fn_8265CA20();


void fn_822F2558(int param_1)

{
  unsigned int uVar1;
  
  uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x24);
  if (uVar1 != 0) {
    fn_822C16B8(uVar1 + 8);
    fn_8265CA20(uVar1);
    *(unsigned int *)(param_1 + 0x24) = 0;
  }
  return;
}

