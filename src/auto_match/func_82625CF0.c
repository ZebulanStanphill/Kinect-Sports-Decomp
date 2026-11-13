extern int fn_8255A160();
extern int fn_825C2F80();
extern unsigned int lbl_82193E50;
extern unsigned int lbl_821956BC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_82625CF0(float *param_1,int param_2,float *param_3)

{
  float fVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned __int64 uVar3;
  double dVar4;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  fVar1 = lbl_821CA460;
  if (param_2 == 0) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    fVar1 = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460;
  }
  dVar4 = (double)fVar1;
  uVar3 = fn_825C2F80((double)lbl_821956BC,(double)lbl_82193E50);
  fn_8255A160(uVar3,dVar4);
  puVar2 = (unsigned int *)(in_r0 + (int)param_1 & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  fVar1 = param_3[1];
  *param_1 = *param_1 * *param_3;
  param_1[2] = fVar1 * param_1[2];
  return;
}

