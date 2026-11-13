extern int fn_82CEAC20();
extern int fn_82CFBBF0();
extern int fn_83082610();


unsigned int fn_82E14300(unsigned int *param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar2;
  unsigned __int64 uVar5;
  __int64 lVar6;
  __int64 lVar7;
  
  uVar5 = 0;
  iVar3 = 0;
  do {
    if ((param_3 == 0) || ((int)param_1[1] <= (int)uVar5)) break;
    uVar5 = uVar5 + 1;
    iVar1 = iVar3 + *param_1;
    iVar3 = iVar3 + 0xc;
  } while (*(int *)(iVar1 + 8) != param_3);
  if ((int)uVar5 < (int)param_1[1]) {
    lVar6 = (uVar5 + (uVar5 & 0x7fffffff) * 2 & 0x3fffffff) << 2;
    do {
      uVar4 = *param_1;
      lVar7 = lVar6 + (unsigned __int64)uVar4 + 8;
      iVar3 = fn_83082610(lVar7);
      if (iVar3 == 0) {
        uVar4 = *(unsigned int *)((int)(lVar6 + (unsigned __int64)uVar4) + 4) & 0xfffffffe;
      }
      else {
        fn_83082610(lVar7);
        uVar4 = fn_82CEAC20();
      }
      if (uVar4 != 0) {
        uVar4 = *param_1;
        lVar7 = lVar6 + (unsigned __int64)uVar4 + 8;
        iVar3 = fn_83082610(lVar7);
        if (iVar3 == 0) {
          uVar2 = (unsigned __int64)*(unsigned int *)((int)(lVar6 + (unsigned __int64)uVar4) + 4) & 0xfffffffe;
        }
        else {
          fn_83082610(lVar7);
          uVar2 = fn_82CEAC20();
        }
        iVar3 = fn_82CFBBF0(param_2,uVar2);
        if (iVar3 == 0) {
          return *(unsigned int *)
                  ((int)((uVar5 + (uVar5 & 0x7fffffff) * 2 & 0xffffffff) << 2) + *param_1 + 8);
        }
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0xc;
    } while ((int)uVar5 < (int)param_1[1]);
  }
  return 0;
}

