#define true 1
extern int fn_828B6E50();
extern int fn_828B74C8();
extern int fn_828B7568();
extern int fn_828B7B80();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_828B81B0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  
  iVar1 = (int)param_2 - (int)param_1;
  do {
    iVar1 = iVar1 >> 3;
    if (iVar1 < 0x21) {
LAB_828b8268:
      if (1 < iVar1) {
        fn_828B7568(param_1,param_2,param_4,0);
      }
      return;
    }
    iVar4 = (int)param_3;
    if (iVar4 < 1) {
      if (0x20 < iVar1) {
        if (1 < iVar1) {
          fn_828B74C8(param_1,param_2,param_4,0,0);
        }
        fn_828B7B80(param_1,param_2,param_4);
        return;
      }
      goto LAB_828b8268;
    }
    fn_828B6E50(&stack_pair_40.first,param_1,param_2,param_4);
    param_3 = (__int64)(iVar4 >> 1) + (unsigned __int64)(iVar4 < 0 && (param_3 & 1) != 0);
    param_3 = (__int64)((int)param_3 >> 1) + (unsigned __int64)((int)param_3 < 0 && (param_3 & 1) != 0) +
              param_3;
    uVar3 = (unsigned __int64)stack_pair_40.second;
    uVar2 = (unsigned __int64)stack_pair_40.first;
    if ((int)(stack_pair_40.first - (int)param_1 & 0xfffffff8) < (int)((int)param_2 - stack_pair_40.second & 0xfffffff8))
    {
      fn_828B81B0(param_1,uVar2,param_3,param_4);
      param_1 = uVar3;
      uVar2 = param_2;
    }
    else {
      fn_828B81B0(uVar3,param_2,param_3,param_4);
    }
    iVar1 = (int)uVar2 - (int)param_1;
    param_2 = uVar2;
  } while( true );
}

