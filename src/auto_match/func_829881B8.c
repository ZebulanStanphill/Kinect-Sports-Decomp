extern unsigned int *auStack_2c;
extern int fn_82930318();
extern int fn_82931D88();
extern int fn_82980C18();
extern int fn_82986DF0();
extern unsigned int uStack_30;


unsigned __int64 fn_829881B8(__int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar3;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int uStack_30;
  unsigned int auStack_2c [11];
  
  if (param_2 != 0) {
    iVar3 = fn_82986DF0(param_1,param_3,&uStack_30);
    if ((iVar3 < 0) || (iVar3 = fn_82986DF0(param_1,param_4,auStack_2c), iVar3 < 0)) {
      fn_82980C18(param_1,param_1 + 0x28,0xbf5,0xffffffff8204e6cc);
    }
    else if ((((uStack_30 == 0) || (4 < uStack_30)) || (auStack_2c[0] == 0)) || (4 < auStack_2c[0]))
    {
      fn_82980C18(param_1,param_1 + 0x28,0xbed,0xffffffff8204e704,4);
    }
    else {
      uVar1 = fn_82930318(0x28);
      if ((uVar1 & 0xffffffff) != 0) {
        uVar2 = fn_82931D88(uVar1,2,*(unsigned int *)(param_2 + 0x14),0,uStack_30,auStack_2c[0],0);
        return uVar2;
      }
    }
  }
  return 0;
}

