extern int fn_82A3F758();
extern int fn_82F41B70();
extern int fn_82F64CE0();


unsigned __int64 fn_82F41BD0(int param_1,unsigned __int64 param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  iVar2 = fn_82F64CE0(param_2);
  if (iVar2 + 1U < 0x10000) {
    uVar1 = fn_82F41B70(param_1,iVar2 + 1U & 0xffff);
    if (-1 < (int)uVar1) {
      if ((unsigned __int64)*(unsigned short *)(param_1 + 0x16) < 0x80000000) {
        uVar1 = fn_82A3F758(*(unsigned int *)(param_1 + 0x18),(unsigned __int64)*(unsigned short *)(param_1 + 0x16),
                             param_2);
      }
      else {
        uVar1 = 0xffffffff80070057;
      }
    }
  }
  else {
    uVar1 = 0xffffffff80004005;
  }
  return uVar1;
}

