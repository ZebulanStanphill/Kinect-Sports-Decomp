extern int fn_82268638();
extern int fn_82538DC0();
extern int fn_82538E40();
extern int fn_82539150();


int fn_82538958(int param_1,int param_2,unsigned __int64 param_3,unsigned int param_4,int param_5)

{
  unsigned int uVar1;
  int iVar4;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar5;
  int iVar6;
  
  if (param_4 != 0) {
    if (param_4 != 1) {
      iVar4 = fn_82538E40(param_5);
      if ((int)param_4 <= iVar4) {
        (*(unsigned int **)(param_5 + 0x10))[1] = **(unsigned int **)(param_5 + 0x10);
        for (iVar4 = param_1; iVar4 != param_2; iVar4 = iVar4 + 0x38) {
          if (*(int *)(iVar4 + 0x24) == 0x4d5308c9) {
            fn_82268638(param_1);
            param_1 = param_1 + 0x38;
          }
          else {
            fn_82538DC0(param_5,iVar4);
          }
        }
        uVar1 = (*(unsigned int **)(param_5 + 0x10))[1];
        iVar4 = param_1;
        for (uVar5 = (unsigned __int64)**(unsigned int **)(param_5 + 0x10);
            (uVar5 & 0xffffffff) != (unsigned __int64)uVar1; uVar5 = uVar5 + 0x38) {
          fn_82268638(iVar4,uVar5);
          iVar4 = iVar4 + 0x38;
        }
        return param_1;
      }
      iVar4 = ((int)param_4 >> 1) + (unsigned int)((int)param_4 < 0 && (param_4 & 1) != 0);
      iVar6 = iVar4 * 0x38 + param_1;
      uVar2 = fn_82538958(param_1,iVar6,param_3,iVar4,param_5);
      uVar3 = fn_82538958(iVar6,param_2,param_3,param_4 - iVar4,param_5);
      iVar4 = fn_82539150(uVar2,iVar6,uVar3,(iVar6 - (int)uVar2) / 0x38,
                                ((int)uVar3 - iVar6) / 0x38,param_5);
      return iVar4;
    }
    if (*(int *)(param_1 + 0x24) == 0x4d5308c9) {
      return param_2;
    }
  }
  return param_1;
}

