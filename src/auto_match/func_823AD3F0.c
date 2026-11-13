extern unsigned int lbl_831D2C98;
extern unsigned int lbl_831D2CB8;
extern unsigned int lbl_831D2CD8;
extern unsigned int lbl_831D2CF8;
extern unsigned int lbl_831D2D18;
extern unsigned int lbl_831D2D38;


double fn_823AD3F0(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = lbl_831D2D38;
  if ((*(int *)(param_1 + 0x50) == 0) && (fVar1 = lbl_831D2CB8, *(int *)(param_1 + 0x54) != 0)) {
    fVar1 = lbl_831D2CF8;
  }
  fVar2 = lbl_831D2D18;
  if ((*(int *)(param_1 + 0x50) == 0) && (fVar2 = lbl_831D2C98, *(int *)(param_1 + 0x54) != 0)) {
    fVar2 = lbl_831D2CD8;
  }
  return (double)((fVar1 - fVar2) * *(float *)(param_1 + 0x48) + fVar2);
}

