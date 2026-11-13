extern int fn_82EEB088();


unsigned __int64
fn_82E75158(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4,
             unsigned short *param_5)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  uVar2 = 0;
  if ((param_4 == (unsigned int *)0x0) || (param_5 == (unsigned short *)0x0)) {
    uVar2 = 0xffffffff80004003;
  }
  else {
    *param_4 = 0;
    *param_5 = 1;
    if ((*(int *)(param_1 + 0x70) != 0) && (iVar1 = fn_82EEB088(), -1 < iVar1)) {
      *param_4 = 1;
    }
  }
  return uVar2;
}

