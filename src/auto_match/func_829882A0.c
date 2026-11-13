extern unsigned int *auStack_20;
extern int fn_82930318();
extern int fn_82931BC0();
extern int fn_82980C18();
extern int fn_82986DF0();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;


int fn_829882A0(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar3;
  unsigned __int64 uVar2;
  int *piVar4;
  int iStack0000001c;
  unsigned int auStack_20 [2];
  
  iStack0000001c = param_2;
  iVar3 = fn_82986DF0(param_1,param_3,auStack_20);
  if (iVar3 < 0) {
    fn_82980C18(param_1,0,0xbf2,0xffffffff8204e730);
  }
  else {
    uVar2 = fn_82930318(0x18);
    if ((uVar2 & 0xffffffff) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_82931BC0(uVar2,0,auStack_20[0]);
    }
    if (iVar3 != 0) {
      piVar4 = &stack0x0000001c;
      while ((param_2 != 0 && (iVar1 = *piVar4, *(int *)(iVar1 + 4) == 8))) {
        param_2 = *(int *)(iVar1 + 0x10);
        piVar4 = (int *)(iVar1 + 0x10);
      }
      *(int *)(iVar3 + 0x10) = *piVar4;
      *piVar4 = iVar3;
      return iStack0000001c;
    }
  }
  return 0;
}

