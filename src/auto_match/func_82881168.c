extern int fn_8265CA20();
extern int fn_82880710();
extern int fn_82F63CA0();


unsigned int * fn_82881168(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  char cVar4;
  int iVar3;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  
  if (param_1 != param_2) {
    uVar5 = (unsigned __int64)*param_2;
    uVar6 = param_2[1] - uVar5;
    if (uVar6 == 0) {
      uVar1 = *param_1;
      if (uVar1 != param_1[1]) {
        fn_82F63CA0(uVar1,param_1[1],0);
        param_1[1] = uVar1;
      }
    }
    else {
      uVar2 = (unsigned __int64)*param_1;
      if ((param_1[1] - uVar2 & 0xffffffff) < (uVar6 & 0xffffffff)) {
        if ((param_1[2] - uVar2 & 0xffffffff) < (uVar6 & 0xffffffff)) {
          if (uVar2 != 0) {
            fn_8265CA20();
          }
          cVar4 = fn_82880710(param_1,(unsigned __int64)param_2[1] - (unsigned __int64)*param_2);
          if (cVar4 == '\0') {
            return param_1;
          }
          uVar6 = (unsigned __int64)*param_2;
          uVar1 = *param_1;
          lVar7 = param_2[1] - uVar6;
        }
        else {
          uVar6 = (param_1[1] - uVar2) + uVar5;
          fn_82F63CA0(uVar2,uVar5,uVar6 - uVar5);
          uVar1 = param_1[1];
          lVar7 = param_2[1] - uVar6;
        }
        iVar3 = fn_82F63CA0(uVar1,uVar6,lVar7);
        param_1[1] = iVar3 + (int)lVar7;
      }
      else {
        fn_82F63CA0(uVar2,uVar5,param_2[1] - uVar5);
        param_1[1] = (param_2[1] - *param_2) + *param_1;
      }
    }
  }
  return param_1;
}

