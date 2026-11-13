extern int fn_82A9A428();


void fn_82A9CC40(int *param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  
  if (param_1[1] + 1U > (unsigned int)param_1[2]) {
    fn_82A9A428(param_1,param_1[1] + 1U);
  }
  puVar1 = (unsigned int *)(param_2 + -4);
  lVar3 = 5;
  puVar2 = (unsigned int *)(param_1[1] * 0x14 + *param_1 + -4);
  do {
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_1[1] = param_1[1] + 1;
  return;
}

