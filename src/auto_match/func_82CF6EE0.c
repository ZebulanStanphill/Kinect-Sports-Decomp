__int64 fn_82CF6EE0(int param_1)

{
  int *piVar1;
  int *piVar2;
  __int64 lVar3;
  __int64 lVar4;
  int *piVar5;
  int *piVar6;
  __int64 lVar7;
  
  lVar4 = 0;
  lVar3 = 0;
  piVar5 = (int *)(param_1 + 8);
  piVar6 = (int *)(param_1 + 0x90);
  lVar7 = 8;
  do {
    piVar1 = piVar6 + 1;
    piVar2 = piVar5 + 2;
    piVar6 = piVar6 + 2;
    piVar5 = piVar5 + 4;
    lVar4 = (__int64)*piVar1 * (__int64)*piVar2 + lVar4;
    lVar3 = (__int64)*piVar5 * (__int64)*piVar6 + lVar3;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return lVar3 + lVar4 + (__int64)*(int *)(param_1 + 0xd4) * (__int64)*(int *)(param_1 + 0x90);
}

