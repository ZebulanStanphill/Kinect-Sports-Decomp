extern unsigned int *auStack_20;
extern int fn_82930318();
extern int fn_829317C0();
extern int fn_829334D8();
extern int fn_82980C18();
extern int fn_82986DF0();


unsigned __int64 fn_82986E98(unsigned __int64 param_1,int param_2)

{
  int iVar3;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar4;
  unsigned int auStack_20 [2];
  
  if (*(int *)(param_2 + 4) == 0xe) {
    iVar3 = *(int *)(param_2 + 0x10);
    auStack_20[0] = 0;
    if (((iVar3 == 0) || (*(int *)(iVar3 + 4) != 9)) || (*(int *)(iVar3 + 0x10) != 0)) {
      uVar4 = 0xffffffff8204e3e8;
    }
    else {
      iVar3 = fn_82986DF0(param_1,param_2,auStack_20);
      if (-1 < iVar3) {
        uVar1 = fn_82930318(0x40);
        if ((uVar1 & 0xffffffff) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = fn_829334D8(uVar1,2,auStack_20[0],param_2 + 0x30);
        }
        if ((uVar1 & 0xffffffff) == 0) {
          return 0;
        }
        uVar2 = fn_82930318(0x14);
        if ((uVar2 & 0xffffffff) == 0) {
          return 0;
        }
        uVar4 = fn_829317C0(uVar2,uVar1);
        return uVar4;
      }
      uVar4 = 0xffffffff8204e3cc;
    }
    fn_82980C18(param_1,param_2 + 0x30,0xbcc,uVar4);
  }
  return 0;
}

