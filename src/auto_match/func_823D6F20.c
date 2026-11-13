extern unsigned int *auStack_50;
extern int fn_823D70B0();
extern int fn_823D73A0();
extern int fn_823D7540();
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_823D6F20(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  __int64 lVar2;
  __int64 lVar3;
  int iVar5;
  unsigned __int64 uVar4;
  unsigned __int64 uVar6;
  unsigned __int64 *puVar7;
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned __int64 uStack_58;
  unsigned __int64 auStack_50 [10];
  
  lVar2 = param_2 - param_1;
  uVar1 = (int)lVar2 >> 3;
  uVar4 = param_2;
  if (0x20 < (int)uVar1) {
    do {
      iVar5 = (int)param_3;
      param_2 = uVar4;
      if (iVar5 < 1) break;
      fn_823D70B0(&stack_pair_60.first,param_1,uVar4,param_4);
      param_3 = (__int64)(iVar5 >> 1) + (unsigned __int64)(iVar5 < 0 && (param_3 & 1) != 0);
      param_3 = (__int64)((int)param_3 >> 1) + (unsigned __int64)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      uVar6 = (unsigned __int64)stack_pair_60.second;
      param_2 = (unsigned __int64)stack_pair_60.first;
      if ((int)(stack_pair_60.first - (int)param_1 & 0xfffffff8) < (int)((int)uVar4 - stack_pair_60.second & 0xfffffff8))
      {
        fn_823D6F20(param_1,param_2,param_3,param_4);
        param_2 = uVar4;
        param_1 = uVar6;
      }
      else {
        fn_823D6F20(uVar6,uVar4,param_3,param_4);
      }
      lVar2 = param_2 - param_1;
      uVar1 = (int)lVar2 >> 3;
      uVar4 = param_2;
    } while (0x20 < (int)uVar1);
    if (0x20 < (int)uVar1) {
      if ((int)uVar1 < 2) {
        return;
      }
      uVar4 = (__int64)((int)uVar1 >> 1) + (unsigned __int64)((int)uVar1 < 0 && (uVar1 & 1) != 0);
      if (0 < (__int64)uVar4) {
        lVar3 = (uVar4 & 0x1fffffff) * 8 + param_1;
        do {
          lVar3 = lVar3 + -8;
          uStack_58 = *(unsigned __int64 *)lVar3;
          uVar4 = uVar4 - 1;
          fn_823D7540(param_1,uVar4,uVar1,&uStack_58,param_4);
        } while (0 < (int)uVar4);
      }
      if ((int)uVar1 < 2) {
        return;
      }
      lVar3 = param_2 - 8;
      do {
        puVar7 = (unsigned __int64 *)lVar3;
        auStack_50[0] = *puVar7;
        *(unsigned int *)puVar7 = *(unsigned int *)param_1;
        *(unsigned int *)((int)puVar7 + 4) = ((unsigned int *)param_1)[1];
        fn_823D7540(param_1,0,(int)lVar2 + -8 >> 3,auStack_50,param_4);
        lVar3 = lVar3 + -8;
        lVar2 = (lVar3 - param_1) + 8;
      } while (8 < (int)((unsigned int)lVar2 & 0xfffffff8));
      return;
    }
  }
  if (1 < (int)uVar1) {
    fn_823D73A0(param_1,param_2,param_4);
  }
  return;
}

