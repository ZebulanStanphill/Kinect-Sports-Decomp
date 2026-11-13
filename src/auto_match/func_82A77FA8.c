extern int fn_82A774D8();
extern int memcpy();


unsigned __int64 fn_82A77FA8(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  puVar1 = *(unsigned int **)(param_1 + 0xb8);
  uVar2 = *(unsigned int *)(param_1 + 0xbc);
  uVar4 = 0;
  if (((((unsigned __int64)puVar1[7] + (unsigned __int64)puVar1[6]) - (unsigned __int64)uVar2) + (unsigned __int64)*puVar1 &
      0xffffffff) < (param_2 & 0xffffffff)) {
    if (*param_3 == 0) {
      *param_3 = *(unsigned int *)(*(int *)(param_1 + 4) + 0x214);
    }
    uVar3 = (unsigned __int64)*param_3;
    while (((param_2 & 0xffffffff) != 0 && (*(int *)(param_1 + 0xc0) != 0))) {
      puVar1 = *(unsigned int **)(param_1 + 0xb8);
      uVar5 = (((unsigned __int64)puVar1[7] + (unsigned __int64)puVar1[6]) - (unsigned __int64)*(unsigned int *)(param_1 + 0xbc))
              + (unsigned __int64)*puVar1;
      if ((param_2 & 0xffffffff) < (uVar5 & 0xffffffff)) {
        uVar5 = param_2;
      }
      memcpy(uVar3,(unsigned __int64)*(unsigned int *)(param_1 + 0xbc),uVar5);
      param_2 = param_2 - uVar5;
      *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + (int)uVar5;
      uVar4 = uVar5 + uVar4;
      uVar3 = uVar5 + uVar3;
      fn_82A774D8(param_1);
    }
  }
  else {
    if (*param_3 == 0) {
      *param_3 = uVar2;
    }
    else {
      memcpy(*param_3,(unsigned __int64)uVar2,param_2);
    }
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + (int)param_2;
    fn_82A774D8(param_1);
    uVar4 = param_2;
  }
  *(unsigned __int64 *)(param_1 + 200) = (uVar4 & 0xffffffff) + *(__int64 *)(param_1 + 200);
  return uVar4;
}

