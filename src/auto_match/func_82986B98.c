extern int fn_82930318();
extern int fn_82930458();
extern int fn_829304E0();
extern int fn_82980D80();
extern int fn_829843D0();


unsigned __int64 fn_82986B98(int param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  int iVar4;
  
  uVar1 = fn_82930318(0x14);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_829304E0(uVar1,0,*(unsigned int *)(param_1 + 0x18),0xffffffff8204e3c0);
  }
  if (iVar3 == 0) {
LAB_82986be8:
    fn_82980D80(param_1,0);
    uVar2 = 0xffffffff8007000e;
  }
  else {
    *(int *)(param_1 + 0x18) = iVar3;
    if ((param_2 & 0xffffffff) != 0) {
      iVar4 = fn_82930458(param_2);
      *(int *)(iVar3 + 8) = iVar4;
      if (iVar4 == 0) goto LAB_82986be8;
      uVar2 = fn_829843D0(param_1,iVar4,*(unsigned int *)(iVar4 + 0x18));
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      *(unsigned int *)(iVar4 + 0x10) = *(unsigned int *)(iVar4 + 0x10) & 0xfffff1ff;
    }
    uVar2 = 0;
  }
  return uVar2;
}

