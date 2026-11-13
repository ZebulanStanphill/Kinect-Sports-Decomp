extern int fn_82CE5410();
extern int fn_82CE6310();


void fn_8308B898(int *param_1,unsigned __int64 param_2,unsigned int param_3,unsigned short param_4,unsigned short param_5,
                  short *param_6,short *param_7)

{
  unsigned short uVar1;
  int iVar2;
  int iVar3;
  unsigned short *puVar4;
  int iVar5;
  unsigned short *puVar6;
  unsigned short *puVar7;
  int iVar8;
  
  iVar2 = param_1[1];
  iVar8 = iVar2 + 2;
  iVar3 = fn_82CE5410();
  if ((int)(param_1[2] & 0x3fffffffU) < iVar8) {
    iVar5 = (param_1[2] & 0x3fffffffU) << 1;
    if (iVar5 <= iVar8) {
      iVar5 = iVar8;
    }
    fn_82CE6310(*(unsigned int *)(iVar3 + 0x10),param_1,iVar5,4);
  }
  param_1[1] = iVar8;
  puVar6 = (unsigned short *)((iVar2 + -1) * 4 + *param_1);
  puVar6[4] = *puVar6;
  puVar6[5] = puVar6[1];
  puVar7 = puVar6 + -2;
  if (param_5 < *puVar7) {
    puVar4 = puVar6 + 4;
    do {
      uVar1 = puVar7[1];
      puVar4[-2] = *puVar7;
      puVar4[-1] = uVar1;
      puVar7 = puVar7 + -2;
      puVar4 = puVar4 + -2;
    } while (param_5 < *puVar7);
  }
  if (param_5 == *puVar7) {
    puVar4 = puVar7 + 6;
    do {
      if (puVar4[-5] <= param_3) break;
      uVar1 = puVar7[1];
      puVar4[-2] = *puVar7;
      puVar4[-1] = uVar1;
      puVar7 = puVar7 + -2;
      puVar4 = puVar4 + -2;
    } while (param_5 == *puVar7);
  }
  puVar7[4] = param_5;
  puVar7[5] = (unsigned short)param_3;
  *param_7 = (short)((int)puVar7 - *param_1 >> 2) + 2;
  if (param_4 < *puVar7) {
    puVar4 = puVar7 + 4;
    do {
      uVar1 = puVar7[1];
      puVar4[-2] = *puVar7;
      puVar4[-1] = uVar1;
      puVar7 = puVar7 + -2;
      puVar4 = puVar4 + -2;
    } while (param_4 < *puVar7);
  }
  if (param_4 == *puVar7) {
    puVar4 = puVar7 + 4;
    do {
      if (puVar4[-3] <= param_3) break;
      uVar1 = puVar7[1];
      puVar4[-2] = *puVar7;
      puVar4[-1] = uVar1;
      puVar7 = puVar7 + -2;
      puVar4 = puVar4 + -2;
    } while (param_4 == *puVar7);
  }
  puVar7[3] = (unsigned short)param_3;
  puVar7[2] = param_4;
  *param_6 = (short)((int)puVar7 - *param_1 >> 2) + 1;
  return;
}

