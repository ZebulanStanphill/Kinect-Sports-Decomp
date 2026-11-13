extern int fn_82AB15D0();
extern int fn_82AB50D0();
extern int fn_82AB5180();


void fn_82AB85C8(int param_1,int param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  if (param_2 != 0) {
    do {
      if ((unsigned __int64)*(unsigned int *)(param_1 + 0x4c) < (uVar2 & 0xffffffff)) break;
      uVar2 = uVar2 + 1;
      iVar1 = fn_82AB50D0(*(unsigned int *)(param_1 + 0x48),uVar2);
    } while (iVar1 != param_2);
    if (((iVar1 != 0) && ((uVar2 & 0xffffffff) != 0)) &&
       ((uVar2 & 0xffffffff) <= (unsigned __int64)*(unsigned int *)(param_1 + 0x4c))) goto LAB_82ab8650;
  }
  fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7054,0xffffffff820d7090,0x282);
LAB_82ab8650:
  fn_82AB5180(*(unsigned int *)(param_1 + 0x48),uVar2);
  return;
}

