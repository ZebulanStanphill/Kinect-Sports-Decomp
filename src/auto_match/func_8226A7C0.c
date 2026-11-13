extern unsigned int lbl_82193E50;
extern unsigned int lbl_821A7E24;
extern unsigned int lbl_821A7E38;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_8226A7C0(double param_1,double param_2,double param_3,unsigned int *param_4,
                  unsigned int *param_5,unsigned int *param_6)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  int in_r9;
  unsigned int *puVar6;
  __int64 lVar7;
  
  param_4[6] = 0xffffffff;
  *param_4 = &lbl_821A7E24;
  uVar1 = ltcg_pool_0_0f;
  if (in_r9 == 0) {
    *(unsigned char *)(param_4 + 1) = 0;
    uVar3 = lbl_821CA460;
    uVar2 = lbl_82193E50;
    param_4[2] = uVar1;
    param_4[3] = uVar1;
    param_4[4] = uVar3;
    param_4[5] = uVar2;
  }
  else {
    puVar6 = (unsigned int *)(in_r9 + -4);
    lVar7 = 5;
    puVar5 = param_4;
    do {
      puVar6 = puVar6 + 1;
      puVar5 = puVar5 + 1;
      *puVar5 = *puVar6;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  uVar1 = *param_5;
  uVar2 = param_5[1];
  param_4[0xb] = (float)param_1;
  uVar3 = *param_6;
  uVar4 = param_6[1];
  param_4[0xc] = (float)param_2;
  param_4[0xd] = (float)param_3;
  *param_4 = &lbl_821A7E38;
  param_4[7] = uVar1;
  param_4[8] = uVar2;
  param_4[9] = uVar3;
  param_4[10] = uVar4;
  param_4[0xe] = uVar1;
  param_4[0xf] = uVar2;
  param_4[0x10] =
       -((float)param_4[0xf] * (float)param_4[10] + (float)param_4[0xe] * (float)param_4[9]);
  return;
}

