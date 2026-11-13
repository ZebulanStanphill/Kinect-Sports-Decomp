extern int fn_827D4FA8();
extern int fn_827D5068();


void fn_8256BED8(int param_1)

{
  unsigned int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    fn_827D5068(iVar1);
    fn_827D4FA8(iVar1);
  }
  return;
}

