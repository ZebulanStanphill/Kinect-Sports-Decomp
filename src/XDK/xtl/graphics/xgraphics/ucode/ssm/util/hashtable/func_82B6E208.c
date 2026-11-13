extern int fn_82AB15D0();
extern int fn_82B6B340();


int * fn_82B6E208(unsigned __int64 param_1,int (**param_2)(),int param_3,unsigned __int64 param_4,
                   unsigned __int64 param_5)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  
  piVar1 = (int *)(*param_2)(param_1,0x18);
  if (piVar1 == (int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da2f0,0xffffffff820da300,0x5e);
  }
  piVar1[1] = (int)param_1;
  piVar1[2] = (int)param_2;
  piVar1[3] = param_3;
  piVar1[4] = (int)param_4;
  piVar1[5] = (int)param_5;
  iVar2 = (*param_2)(param_1,(param_5 & 0x3fffffff) << 2);
  *piVar1 = iVar2;
  if ((param_5 & 0xffffffff) != 0) {
    iVar2 = 0;
    do {
      uVar3 = fn_82B6B340(param_4);
      *(unsigned int *)(*piVar1 + iVar2) = uVar3;
      if (*(int *)(*piVar1 + iVar2) == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da2d4,0xffffffff820da300,0x6e);
      }
      param_5 = param_5 - 1;
      iVar2 = iVar2 + 4;
    } while (param_5 != 0);
  }
  return piVar1;
}

