extern __int64 fn_82A1E650();
extern int fn_82E65FD0();


unsigned __int64 fn_82E49CA8(int param_1,unsigned __int64 param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  iVar2 = fn_82E65FD0();
  if (iVar2 < 0) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uVar1 = fn_82A1E650(*(unsigned int *)(param_1 + 0x24),param_2);
  }
  return uVar1;
}

