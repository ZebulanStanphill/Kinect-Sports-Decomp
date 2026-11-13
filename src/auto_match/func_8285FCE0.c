extern int fn_82862320();
extern int fn_82864650();


void fn_8285FCE0(int param_1,unsigned __int64 param_2,__int64 param_3)

{
  unsigned int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 != 0) {
    fn_82862320(iVar1,param_2,param_3 + 0x88);
    fn_82864650(iVar1,param_2);
  }
  return;
}

