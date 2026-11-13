extern int fn_8233F9F8();
extern int fn_8233FD78();
extern int fn_8233FFA0();
extern unsigned int iStack_40;
extern unsigned int uStack_3c;


void fn_8233F530(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  __int64 lVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned int *puVar7;
  int iStack_40;
  unsigned int uStack_3c;
  
  uVar3 = param_2 - (int)param_1 >> 3;
  if (0x20 < (int)uVar3) {
    do {
      iVar5 = (int)param_3;
      if (iVar5 < 1) break;
      fn_8233F9F8(&iStack_40,param_1,param_2,param_4);
      iVar2 = iStack_40;
      param_3 = (__int64)(iVar5 >> 1) + (unsigned __int64)(iVar5 < 0 && (param_3 & 1) != 0);
      param_3 = (__int64)((int)param_3 >> 1) + (unsigned __int64)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      uVar6 = (unsigned __int64)uStack_3c;
      if ((int)(iStack_40 - (int)param_1 & 0xfffffff8U) < (int)(param_2 - uStack_3c & 0xfffffff8)) {
        fn_8233F530(param_1,iStack_40,param_3,param_4);
        param_1 = uVar6;
      }
      else {
        fn_8233F530(uVar6,param_2,param_3,param_4);
        param_2 = iVar2;
      }
      uVar3 = param_2 - (int)param_1 >> 3;
    } while (0x20 < (int)uVar3);
    if (0x20 < (int)uVar3) {
      if ((int)uVar3 < 2) {
        return;
      }
      uVar6 = (__int64)((int)uVar3 >> 1) + (unsigned __int64)((int)uVar3 < 0 && (uVar3 & 1) != 0);
      if (0 < (__int64)uVar6) {
        lVar4 = (uVar6 & 0x1fffffff) * 8 + param_1;
        do {
          lVar4 = lVar4 + -8;
          iStack_40 = *(int *)lVar4;
          uVar6 = uVar6 - 1;
          uStack_3c = ((int *)lVar4)[1];
          fn_8233FFA0(param_1,uVar6,uVar3,&iStack_40,param_4);
        } while (0 < (int)uVar6);
      }
      if ((int)uVar3 < 2) {
        return;
      }
      puVar1 = (unsigned int *)param_1;
      puVar7 = (unsigned int *)(param_2 + -4);
      do {
        uStack_3c = *puVar7;
        iStack_40 = puVar7[-1];
        puVar7[-1] = *puVar1;
        *puVar7 = puVar1[1];
        fn_8233FFA0(param_1,0,(-4 - (int)puVar1) + (int)puVar7 >> 3,&iStack_40,param_4);
        puVar7 = puVar7 + -2;
      } while (8 < (int)((4 - (int)puVar1) + (int)puVar7 & 0xfffffff8U));
      return;
    }
  }
  if (1 < (int)uVar3) {
    fn_8233FD78(param_1,param_2,param_4);
  }
  return;
}

