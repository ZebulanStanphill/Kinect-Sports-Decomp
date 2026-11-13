extern unsigned int lbl_8200D8DC;


double fn_82755588(int param_1)

{
  unsigned short uVar1;
  
  uVar1 = *(unsigned short *)(param_1 + 4) & 0xfff;
  if ((*(unsigned short *)(param_1 + 6) & 0x10) == 0) {
    return (double)uVar1;
  }
  return (double)((float)uVar1 * lbl_8200D8DC);
}

