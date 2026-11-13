extern int fn_82AB15D0();
extern int fn_82AB50D0();
extern int fn_82AB5180();


void fn_82AB9130(int param_1,int param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  if (param_1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6858,0xffffffff820d7400,0x12d);
  }
  if (param_2 != 0) {
    do {
      if ((unsigned __int64)*(unsigned int *)(param_1 + 0x28) < (uVar2 & 0xffffffff)) break;
      uVar2 = uVar2 + 1;
      iVar1 = fn_82AB50D0(*(unsigned int *)(param_1 + 0x24),uVar2);
    } while (iVar1 != param_2);
    if (((iVar1 == param_2) && ((uVar2 & 0xffffffff) != 0)) &&
       ((uVar2 & 0xffffffff) <= (unsigned __int64)*(unsigned int *)(param_1 + 0x28))) goto LAB_82ab91e8;
  }
  fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7460,0xffffffff820d7400,0x13c);
LAB_82ab91e8:
  fn_82AB5180(*(unsigned int *)(param_1 + 0x24),uVar2);
  return;
}

