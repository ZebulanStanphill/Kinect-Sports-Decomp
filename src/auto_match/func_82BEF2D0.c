extern int fn_82BE1A10();
extern int fn_82BE1FA8();
extern int fn_82BF0E40();


unsigned __int64 fn_82BEF2D0(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  
  uVar1 = fn_82BE1A10();
  iVar2 = fn_82BE1FA8(uVar1,1);
  if ((iVar2 == 0) && (*(unsigned int *)(param_1 + 0x2c) != 0)) {
    fn_82BF0E40(*(int *)(param_1 + 0x2c),0);
  }
  *(unsigned int *)(param_1 + 0x10) = 2;
  return 0;
}

