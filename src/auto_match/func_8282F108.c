extern int fn_8282EBF8();
extern int fn_8282EC60();
extern int fn_8282EE40();
extern int fn_8282F098();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_8282F108(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  
  iVar1 = (int)param_2 - (int)param_1 >> 2;
  uVar4 = param_2;
  if (0x20 < iVar1) {
    do {
      iVar3 = (int)param_3;
      param_2 = uVar4;
      if (iVar3 < 1) break;
      fn_8282EE40(&stack_pair_40.first,param_1,uVar4,param_4);
      param_3 = (__int64)(iVar3 >> 1) + (unsigned __int64)(iVar3 < 0 && (param_3 & 1) != 0);
      param_3 = (__int64)((int)param_3 >> 1) + (unsigned __int64)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      uVar2 = (unsigned __int64)stack_pair_40.second;
      param_2 = (unsigned __int64)stack_pair_40.first;
      if ((int)(stack_pair_40.first - (int)param_1 & 0xfffffffc) < (int)((int)uVar4 - stack_pair_40.second & 0xfffffffc))
      {
        fn_8282F108(param_1,param_2,param_3,param_4);
        param_1 = uVar2;
        param_2 = uVar4;
      }
      else {
        fn_8282F108(uVar2,uVar4,param_3,param_4);
      }
      iVar1 = (int)param_2 - (int)param_1 >> 2;
      uVar4 = param_2;
    } while (0x20 < iVar1);
    if (0x20 < iVar1) {
      if (1 < iVar1) {
        fn_8282EBF8(param_1,param_2,param_4,0,0);
      }
      fn_8282F098(param_1,param_2,param_4);
      return;
    }
  }
  if (1 < iVar1) {
    fn_8282EC60(param_1,param_2,param_4,0);
  }
  return;
}

