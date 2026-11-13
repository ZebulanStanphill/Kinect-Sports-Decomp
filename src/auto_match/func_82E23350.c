extern int fn_82E23248();
extern unsigned int fn_82A1F470();
extern int fn_82A1E650();
extern int fn_82A1E6A0();
extern int fn_82A33490();


unsigned int  fn_82E23350(int param_1)

{
  unsigned int iVar2;
  unsigned int uVar1;
  
  iVar2 = fn_82A1E6A0(0,0,0,0);
  *(int *)(param_1 + 0x200) = iVar2;
  if (iVar2 == 0) return fn_82A1F470();
  {
    iVar2 = fn_82A33490(0,0,fn_82E23248,param_1,0,*(unsigned int *)(param_1 + 0x1c),0);
    *(int *)(param_1 + 0x1fc) = iVar2;
    if (iVar2 == 0) return fn_82A1F470();
    {
      fn_82A1E650(*(unsigned int *)(param_1 + 0x200),0xffffffff);
      return 0;
    }
  }
  uVar1 = fn_82A1F470();
  return uVar1;
}

