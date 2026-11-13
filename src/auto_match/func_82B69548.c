extern int fn_82AA0840();
extern int fn_82AB71F0();


void fn_82B69548(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int iVar1;
  unsigned int iVar2;
  unsigned __int64 uVar3;
  
  iVar1 = fn_82AB71F0(param_1,0x4f,param_2);
  iVar2 = fn_82AB71F0(param_1,0x1b,param_2);
  if (iVar1 == 3) {
    if (iVar2 == 1) {
      return;
    }
    uVar3 = 1;
  }
  else {
    if (iVar2 == 0) {
      return;
    }
    uVar3 = 0;
  }
  fn_82AA0840(param_1,0x1b,param_2,uVar3);
  return;
}

