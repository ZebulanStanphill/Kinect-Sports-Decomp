extern int fn_82C2B580();
extern int fn_82E69118();


void fn_82E69188(unsigned int param_1,unsigned __int64 param_2)

{
  unsigned int iVar1;
  
  iVar1 = fn_82C2B580(0x28);
  if (iVar1 != 0) {
    *(unsigned int *)(iVar1 + 0xc) = 0;
    *(unsigned int *)(iVar1 + 0x10) = 0x20;
    *(unsigned int *)(iVar1 + 4) = 0;
    if ((param_1 & 0xffffffff) != 0) {
      fn_82E69118(iVar1,param_1,param_2);
    }
  }
  return;
}

