extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005340;
extern unsigned int lbl_82005344;


void fn_82861B08(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = lbl_82002AE0;
  fVar1 = param_2[10];
  *(unsigned char *)(param_1 + 0x18) = *(unsigned char *)(param_1 + 0x18) & 0xfc | 2;
  fVar3 = lbl_82005344;
  fVar4 = lbl_82005340;
  fVar6 = lbl_82002C5C;
  fVar2 = param_2[0xe] * (fVar5 / fVar1);
  *(float *)(param_1 + 0x110) = fVar2;
  *(float *)(param_1 + 0x10c) = fVar2 + fVar5 / fVar1;
  fVar1 = (fVar5 / param_2[5]) * fVar3;
  fVar3 = (fVar5 / *param_2) * fVar3;
  fVar2 = param_2[0xd] * (fVar5 / param_2[5]) * fVar4;
  fVar4 = param_2[0xc] * (fVar5 / *param_2) * fVar4;
  *(float *)(param_1 + 0xfc) = (fVar1 + fVar2) * fVar6;
  *(float *)(param_1 + 0x100) = (fVar2 - fVar1) * fVar6;
  *(float *)(param_1 + 0x104) = (fVar4 - fVar3) * fVar6;
  *(float *)(param_1 + 0x108) = (fVar3 + fVar4) * fVar6;
  return;
}

