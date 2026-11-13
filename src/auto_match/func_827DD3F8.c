extern int fn_82A1E650();
extern int fn_82A1E658();


void fn_827DD3F8(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  unsigned int iVar2;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  iVar2 = *(int *)(iVar1 + 0x10);
  if (iVar2 != 0) {
    fn_82A1E650(iVar2,0xffffffffffffffff);
    fn_82A1E658(*(unsigned int *)(iVar1 + 0x10));
  }
  return;
}

