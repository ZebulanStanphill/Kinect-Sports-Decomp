extern int fn_82412D20();
extern int fn_82417F58();


void fn_8235D1D8(int param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned __int64 uVar3;
  
  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2b20);
  if ((uVar3 != 0) && (iVar2 = fn_82417F58(uVar3), iVar2 != 0)) {
    uVar1 = fn_82417F58(uVar3);
    fn_82412D20(*(unsigned int *)(param_1 + 0x194),uVar3,uVar1);
  }
  return;
}

