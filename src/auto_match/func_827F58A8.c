typedef unsigned char bool;
extern int fn_827F4868();
extern unsigned int lbl_82196288;


void fn_827F58A8(double param_1,double param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  double dVar6;
  
  *(short *)(param_3 + 0x22) = (short)(param_4 / 6);
  *(short *)(param_3 + 0x20) = (short)param_4 + (short)(param_4 / 6) * -6;
  dVar6 = (double)fn_827F4868();
  fVar1 = (float)(param_1 - dVar6);
  *(float *)(param_3 + 0x24) = (float)param_1;
  *(float *)(param_3 + 0x28) = fVar1;
  fVar2 = lbl_82196288;
  bVar4 = fVar1 != lbl_82196288;
  bVar5 = fVar1 == lbl_82196288;
  *(float *)(param_3 + 0x30) = lbl_82196288;
  fVar1 = (float)((double)bVar4 * param_2);
  *(float *)(param_3 + 0x2c) = fVar1;
  if ((bVar5) || (cVar3 = '\0', fVar1 <= fVar2)) {
    cVar3 = '\x01';
  }
  *(unsigned char *)(param_3 + 0xdc) = *(unsigned char *)(param_3 + 0xdc) & 0xdf | cVar3 << 5;
  return;
}

