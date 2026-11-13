extern int fn_82427540();


unsigned __int64 fn_824277D8(unsigned int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  
  uVar6 = (unsigned __int64)*param_1;
  if (2 < (uVar6 + 1 & 0xffffffff)) {
    uVar3 = fn_82427540(param_1,uVar6);
    uVar4 = fn_82427540(param_1,uVar6 - 1);
    puVar1 = (unsigned int *)param_2[1];
    uVar8 = 1;
    uVar7 = 1;
    for (param_2 = (unsigned int *)*param_2; param_2 != puVar1; param_2 = param_2 + 1) {
      uVar2 = *param_2;
      uVar5 = fn_82427540(uVar2,uVar6);
      uVar8 = -(unsigned int)(uVar5 <= uVar3) & uVar8;
      uVar5 = fn_82427540(uVar2,uVar6 - 1);
      uVar7 = -(unsigned int)(uVar5 <= uVar4) & uVar7;
    }
    if ((uVar8 == param_3) && (uVar7 == param_4)) {
      return 1;
    }
  }
  return 0;
}

