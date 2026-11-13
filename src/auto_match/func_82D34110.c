void fn_82D34110(int param_1,unsigned short *param_2,unsigned short param_3,unsigned __int64 param_4)

{
  unsigned short uVar1;
  unsigned short *puVar2;
  unsigned short *puVar3;
  
  param_2[9] = (unsigned short)param_4;
  if ((param_2[8] & 0x8000) == 0) {
    puVar3 = (unsigned short *)((unsigned int)param_2[6] * 0x14 + *(int *)(param_1 + 0x1c));
    puVar2 = (unsigned short *)((unsigned int)param_2[7] * 0x14 + *(int *)(param_1 + 0x1c));
    puVar3[8] = puVar3[8] & 0x8000 | param_3;
    puVar2[8] = puVar2[8] & 0x8000 | param_3;
    fn_82D34110(param_1,puVar3,param_2[6],param_2[7]);
    fn_82D34110(param_1,puVar2,param_2[7],param_4);
    uVar1 = puVar2[3];
    if (puVar3[3] < puVar2[3]) {
      uVar1 = puVar3[3];
    }
    param_2[3] = uVar1;
    uVar1 = *puVar2;
    if (*puVar2 < *puVar3) {
      uVar1 = *puVar3;
    }
    *param_2 = uVar1;
    uVar1 = puVar2[4];
    if (puVar3[4] < puVar2[4]) {
      uVar1 = puVar3[4];
    }
    param_2[4] = uVar1;
    uVar1 = puVar2[1];
    if (puVar2[1] < puVar3[1]) {
      uVar1 = puVar3[1];
    }
    param_2[1] = uVar1;
    uVar1 = puVar2[5];
    if (puVar3[5] < puVar2[5]) {
      uVar1 = puVar3[5];
    }
    param_2[5] = uVar1;
    uVar1 = puVar2[2];
    if (puVar2[2] < puVar3[2]) {
      uVar1 = puVar3[2];
    }
    param_2[2] = uVar1;
  }
  return;
}

