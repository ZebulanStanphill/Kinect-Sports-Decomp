extern int fn_823DC1D0();
extern int fn_823DC240();
extern int fn_823DC330();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


unsigned __int64
fn_823DC098(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5)

{
  unsigned int uVar2;
  unsigned __int64 uVar1;
  int iVar3;
  unsigned int *puVar4;
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  
  iVar3 = (int)param_4;
  if (((param_2 & 0xffffffff) == 0) || (iVar3 == 0)) {
    uVar1 = 0;
  }
  else if ((param_2 & 0xffffffff) == 1) {
    uVar2 = fn_823DC1D0(param_3,param_4);
    ((unsigned int *)param_5)[1] = uVar2;
    uVar1 = 1;
    *(unsigned int *)param_5 = 0;
  }
  else {
    puVar4 = (unsigned int *)param_5;
    if (iVar3 == 1) {
      uVar2 = fn_823DC1D0();
      *puVar4 = uVar2;
      uVar1 = 1;
      puVar4[1] = 0;
    }
    else {
      if ((param_2 & 0xffffffff) != (param_4 & 0xffffffff)) {
        if ((param_2 & 0xffffffff) == 2) {
          if (iVar3 == 3) {
            fn_823DC240(param_1,param_3,&stack_pair_20.first);
            *puVar4 = 0;
            puVar4[2] = 1;
            puVar4[1] = stack_pair_20.first;
            puVar4[3] = stack_pair_20.second;
            return 2;
          }
        }
        else if (((param_2 & 0xffffffff) == 3) && (iVar3 == 2)) {
          fn_823DC240(param_3,param_1,&stack_pair_20.first);
          puVar4[1] = 0;
          puVar4[3] = 1;
          *puVar4 = stack_pair_20.first;
          puVar4[2] = stack_pair_20.second;
          return 2;
        }
      }
      uVar1 = fn_823DC330(param_1,param_2,param_3,iVar3,param_5);
    }
  }
  return uVar1;
}

