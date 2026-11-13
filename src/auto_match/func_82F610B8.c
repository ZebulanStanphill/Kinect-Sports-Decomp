extern int fn_82A1E650();


unsigned __int64 fn_82F610B8(int param_1)

{
  unsigned int iVar1;
  unsigned __int64 uVar2;
  
  uVar2 = 0;
  iVar1 = fn_82A1E650(*(unsigned int *)(param_1 + 0x24));
  if ((iVar1 == 0) && (iVar1 = fn_82A1E650(*(unsigned int *)(param_1 + 0x28),0), iVar1 == 0x102)) {
    uVar2 = 1;
  }
  return uVar2;
}

