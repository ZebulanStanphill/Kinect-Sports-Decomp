void fn_826EBBE0(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  __int64 lVar7;
  
  *param_1 = *param_2;
  puVar6 = param_1 + 7;
  lVar7 = 9;
  puVar4 = param_2 + -8;
  puVar5 = param_2;
  do {
    uVar1 = puVar5[4];
    uVar2 = puVar5[3];
    uVar3 = puVar5[2];
    puVar4 = puVar4 + 9;
    puVar6[-6] = *puVar4;
    puVar6[-5] = uVar3;
    puVar6[-4] = uVar2;
    puVar6[-3] = uVar1;
    uVar1 = puVar5[8];
    uVar3 = *(unsigned int *)(((int)param_2 - (int)param_1) + (int)puVar6);
    uVar2 = puVar5[6];
    puVar6[-2] = puVar5[5];
    puVar6[-1] = uVar2;
    *puVar6 = uVar3;
    puVar6[1] = uVar1;
    puVar5 = puVar5 + 9;
    puVar6[2] = *puVar5;
    puVar6 = puVar6 + 9;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  param_1[0x52] = param_2[0x52];
  param_1[0x53] = param_2[0x53];
  param_1[0x54] = param_2[0x54];
  return;
}

