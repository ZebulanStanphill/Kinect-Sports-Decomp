extern unsigned int lbl_82192488;
extern unsigned int lbl_82193A34;


void fn_822A02D8(double param_1,unsigned __int64 param_2,unsigned int *param_3,int *param_4,int *param_5)

{
  float fVar1;
  unsigned int uVar2;
  double dVar3;
  
  fVar1 = lbl_82192488;
  dVar3 = (double)lbl_82193A34;
  *param_4 = (int)param_1 % 0x3c;
  uVar2 = (unsigned int)(param_1 * dVar3);
  *param_3 = uVar2;
  uVar2 = -((int)uVar2 >> 0x1f) - 1U & uVar2;
  *param_5 = (int)((float)(param_1 - (double)(__int64)(int)param_1) * fVar1);
  if (0x62 < (int)uVar2) {
    uVar2 = 99;
  }
  *param_3 = uVar2;
  return;
}

