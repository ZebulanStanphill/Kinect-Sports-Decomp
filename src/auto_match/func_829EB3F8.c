extern int fn_829EA4C0();
extern int fn_829EE638();
extern int fn_829EE660();


void fn_829EB3F8(int param_1,int param_2,int param_3,unsigned __int64 param_4,int param_5,
                  __int64 param_6,unsigned __int64 param_7,unsigned int *param_8)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  
  if (0 < (int)param_6) {
    uVar2 = (unsigned __int64)in_stack_0000005c;
    do {
      iVar7 = in_stack_00000054 * 0xc + param_8[2];
      fn_829EA4C0(param_1,*(unsigned int *)(in_stack_00000054 * 0xc + param_8[2]) + uVar2,
                    *(unsigned int *)(iVar7 + 4),param_7);
      pfVar5 = *(float **)(iVar7 + 8);
      lVar3 = (__int64)param_3 * (__int64)*(int *)(param_2 + 0x1c) +
              (__int64)param_5 * (__int64)*(int *)(param_2 + 0x24) +
              (unsigned __int64)*(unsigned int *)(param_2 + 0x28);
      if (*(int *)(iVar7 + 4) < 2) {
        if (*(int *)(iVar7 + 4) == 1) {
          fn_829EE638((double)*pfVar5,**(unsigned int **)(param_1 + 0x174),lVar3);
        }
      }
      else {
        uVar1 = *(unsigned int *)(param_1 + 0x1dc);
        fn_829EE638((double)*pfVar5,**(unsigned int **)(param_1 + 0x174),uVar1);
        pfVar5 = pfVar5 + 1;
        iVar6 = 1;
        if (1 < *(int *)(iVar7 + 4) + -1) {
          iVar4 = 4;
          do {
            fn_829EE660((double)*pfVar5,uVar1,*(unsigned int *)(*(int *)(param_1 + 0x174) + iVar4)
                            ,uVar1);
            iVar6 = iVar6 + 1;
            iVar4 = iVar4 + 4;
            pfVar5 = pfVar5 + 1;
          } while (iVar6 < *(int *)(iVar7 + 4) + -1);
        }
        fn_829EE660((double)*pfVar5,uVar1,*(unsigned int *)(iVar6 * 4 + *(int *)(param_1 + 0x174))
                        ,lVar3);
      }
      in_stack_00000054 = in_stack_00000054 + 1;
      if ((unsigned int)((int)(param_8[3] - param_8[2]) / 0xc) <= in_stack_00000054) {
        in_stack_00000054 = 0;
        uVar2 = *param_8 + uVar2;
      }
      param_6 = param_6 + -1;
      param_5 = param_5 + 1;
    } while (param_6 != 0);
  }
  return;
}

