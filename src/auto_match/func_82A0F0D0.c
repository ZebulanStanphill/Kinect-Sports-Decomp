extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_82F67DE8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82006848;
extern unsigned int lbl_8200DFF4;
extern unsigned int lbl_8207F710;
extern unsigned int lbl_8207F718;
extern unsigned int lbl_821AAD20;


void fn_82A0F0D0(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  double dVar6;
  
  param_1[1] = param_3;
  *param_1 = param_2;
  uVar5 = lbl_8200DFF4;
  uVar4 = lbl_82006848;
  param_1[0x16] = lbl_8207F718;
  param_1[0x17] = uVar5;
  param_1[0x18] = uVar4;
  dVar6 = (double)fn_82F67DE8(lbl_8207F710);
  param_1[8] = param_1[0x18];
  uVar4 = lbl_821AAD20;
  fVar2 = lbl_82002C5C;
  param_1[0xc] = lbl_821AAD20;
  param_1[0xd] = uVar4;
  param_1[0x14] = uVar4;
  param_1[0x15] = uVar4;
  fVar3 = lbl_82002AE0;
  param_1[9] = (unsigned int)lbl_82002AE0;
  param_1[0x10] = param_1[0x17];
  param_1[0x11] = (unsigned int)fVar3;
  fVar1 = (SQRT((float)(param_2 * param_2 + param_3 * param_3)) * fVar2) / (float)dVar6;
  param_1[2] = (unsigned int)fVar1;
  param_1[0xe] = (unsigned int)fVar1;
  fVar3 = fVar3 / fVar1;
  param_1[3] = (unsigned int)fVar3;
  param_1[6] = (unsigned int)fVar3;
  param_1[0xf] = (unsigned int)-fVar1;
  fVar1 = fVar2 - (float)param_3 * fVar2;
  param_1[5] = (unsigned int)fVar1;
  param_1[7] = (unsigned int)-fVar3;
  fVar2 = fVar2 - (float)param_2 * fVar2;
  param_1[4] = (unsigned int)fVar2;
  param_1[0x13] = (unsigned int)-fVar1;
  param_1[10] = (unsigned int)(fVar3 * fVar2);
  param_1[0x12] = (unsigned int)-fVar2;
  param_1[0xb] = (unsigned int)-(fVar3 * fVar1);
  return;
}

