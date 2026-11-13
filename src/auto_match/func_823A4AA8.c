extern int fn_822C16B8();
extern int fn_8265CA20();


void fn_823A4AA8(int param_1)

{
  unsigned int uVar1;
  
  uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc);
  if (uVar1 != 0) {
    fn_822C16B8(uVar1 + 8);
    fn_8265CA20(uVar1);
    *(unsigned int *)(param_1 + 0xc) = 0;
  }
  return;
}

