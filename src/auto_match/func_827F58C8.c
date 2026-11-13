extern int fn_827F4868();
extern int fn_82809CB0();
extern unsigned int lbl_82196288;


void fn_827F58C8(double param_1,double param_2,int param_3,int param_4)

{
  float fVar1;
  unsigned char bVar2;
  double dVar3;
  double dVar4;
  
  *(short *)(param_3 + 0x22) = (short)(param_4 / 6);
  *(short *)(param_3 + 0x20) = (short)param_4 + (short)(param_4 / 6) * -6;
  dVar3 = (double)fn_827F4868();
  fVar1 = lbl_82196288;
  dVar4 = (double)lbl_82196288;
  if (param_2 <= dVar4) {
    *(float *)(param_3 + 0x24) = (float)dVar3;
    *(float *)(param_3 + 0x28) = fVar1;
    *(float *)(param_3 + 0x2c) = fVar1;
    *(float *)(param_3 + 0x30) = fVar1;
    bVar2 = *(unsigned char *)(param_3 + 0xdc) | 0x20;
  }
  else {
    *(float *)(param_3 + 0x28) = (float)(param_1 - dVar3);
    *(float *)(param_3 + 0x24) = (float)param_1;
    dVar3 = (double)fn_82809CB0();
    *(float *)(param_3 + 0x2c) = (float)(dVar3 / param_2);
    *(float *)(param_3 + 0x30) = (float)dVar4;
    bVar2 = *(unsigned char *)(param_3 + 0xdc) & 0xdf | ((double)*(float *)(param_3 + 0x28) == dVar4) << 5;
  }
  *(unsigned char *)(param_3 + 0xdc) = bVar2;
  return;
}

