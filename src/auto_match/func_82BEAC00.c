extern int fn_82BE5240();
extern int fn_82BE52B8();
extern int fn_82BE56B0();
extern int fn_82BEB628();


unsigned __int64 fn_82BEAC00(int param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  
  if (((param_2 & 0xffffffff) == 0) || (*(int *)(param_1 + 0x40) == 0)) {
    fn_82BE5240(param_1,0x130,0xffffffff820ead08,*(unsigned int *)(param_1 + 0x38));
    *(unsigned int *)(param_1 + 0x10) = 0;
  }
  else {
    uVar1 = fn_82BE56B0(0xc);
    if ((uVar1 & 0xffffffff) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_82BEB628(uVar1,param_2);
    }
    if (iVar2 == 0) {
      uVar3 = 0x65;
      uVar4 = 0xffffffff820ead74;
    }
    else {
      iVar2 = fn_82BE52B8(*(unsigned int *)(param_1 + 0x40));
      if (iVar2 != 0) {
        return 1;
      }
      uVar3 = 100;
      uVar4 = 0xffffffff820ead4c;
    }
    fn_82BE5240(param_1,uVar3,uVar4);
    *(unsigned int *)(param_1 + 0x10) = 0;
  }
  return 0;
}

