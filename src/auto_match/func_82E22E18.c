extern int fn_82A1E650();
extern int fn_82A1E658();


void fn_82E22E18(int param_1)

{
  unsigned int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1fc);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(unsigned int *)(param_1 + 0x1f8) = 1;
    fn_82A1E650(iVar1,0xffffffffffffffff);
    fn_82A1E658(*(unsigned int *)(param_1 + 0x1fc));
  }
  if ((*(unsigned int *)(param_1 + 0x200) != 0) && (*(int *)(param_1 + 0x200) != -1)) {
    fn_82A1E658(*(unsigned int *)(param_1 + 0x200));
  }
  return;
}

