extern int fn_82859BE8();
extern int fn_8285F118();


void fn_82859C68(unsigned int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int iVar1;
  
  if (((param_1 & 0xffffffff) != 0) && (iVar1 = fn_8285F118(), iVar1 == 0)) {
    fn_82859BE8(param_1,param_2,param_3);
  }
  return;
}

