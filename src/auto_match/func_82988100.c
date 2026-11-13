extern unsigned int *auStack_30;
extern int fn_82930318();
extern int fn_82931D88();
extern int fn_82980C18();
extern int fn_82986DF0();


unsigned __int64 fn_82988100(__int64 param_1,int param_2,unsigned __int64 param_3)

{
  int iVar3;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int auStack_30 [12];
  
  if (param_2 != 0) {
    iVar3 = fn_82986DF0(param_1,param_3,auStack_30);
    if (iVar3 < 0) {
      fn_82980C18(param_1,param_1 + 0x28,0xbf4,0xffffffff8204e694);
    }
    else if ((auStack_30[0] == 0) || (4 < auStack_30[0])) {
      fn_82980C18(param_1,param_1 + 0x28,0xbec,0xffffffff8204e668,4);
    }
    else {
      uVar1 = fn_82930318(0x28);
      if ((uVar1 & 0xffffffff) != 0) {
        uVar2 = fn_82931D88(uVar1,1,*(unsigned int *)(param_2 + 0x14),0,1,auStack_30[0],0);
        return uVar2;
      }
    }
  }
  return 0;
}

