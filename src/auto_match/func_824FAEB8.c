extern int fn_825604A0();
extern int fn_8265CA20();


void fn_824FAEB8(int param_1)

{
  unsigned int uVar1;
  
  uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x70);
  if (uVar1 != 0) {
    fn_825604A0(uVar1 + 0x30);
    fn_8265CA20(uVar1);
    *(unsigned int *)(param_1 + 0x70) = 0;
  }
  return;
}

