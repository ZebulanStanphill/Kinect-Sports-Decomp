extern int fn_82268638();
extern int fn_82538DC0();
extern int fn_82538E40();
extern int fn_82539150();
extern int fn_828EDC38();


unsigned __int64 fn_82538AB8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                       int param_5)

{
  unsigned int uVar1;
  char cVar5;
  int iVar4;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  
  iVar6 = (int)param_4;
  if (iVar6 != 0) {
    if (iVar6 != 1) {
      iVar4 = fn_82538E40(param_5);
      if (iVar6 <= iVar4) {
        (*(unsigned int **)(param_5 + 0x10))[1] = **(unsigned int **)(param_5 + 0x10);
        for (uVar8 = param_1; (uVar8 & 0xffffffff) != (param_2 & 0xffffffff); uVar8 = uVar8 + 0x38)
        {
          cVar5 = fn_828EDC38(uVar8 + 0x28);
          if (cVar5 == '\0') {
            fn_82538DC0(param_5,uVar8);
          }
          else {
            fn_82268638(param_1);
            param_1 = param_1 + 0x38;
          }
        }
        uVar1 = (*(unsigned int **)(param_5 + 0x10))[1];
        uVar8 = param_1;
        for (uVar9 = (unsigned __int64)**(unsigned int **)(param_5 + 0x10);
            (uVar9 & 0xffffffff) != (unsigned __int64)uVar1; uVar9 = uVar9 + 0x38) {
          fn_82268638(uVar8,uVar9);
          uVar8 = uVar8 + 0x38;
        }
        return param_1;
      }
      lVar7 = (__int64)(iVar6 >> 1) + (unsigned __int64)(iVar6 < 0 && (param_4 & 1) != 0);
      lVar10 = lVar7 * 0x38 + param_1;
      uVar2 = fn_82538AB8(param_1,lVar10,param_3,lVar7,param_5);
      uVar3 = fn_82538AB8(lVar10,param_2,param_3,param_4 - lVar7,param_5);
      uVar8 = fn_82539150(uVar2,lVar10,uVar3,((int)lVar10 - (int)uVar2) / 0x38,
                                ((int)uVar3 - (int)lVar10) / 0x38,param_5);
      return uVar8;
    }
    cVar5 = fn_828EDC38(param_1 + 0x28);
    if (cVar5 != '\0') {
      return param_2;
    }
  }
  return param_1;
}

