extern int fn_82813498();
extern unsigned int lbl_8320A4D4;
extern unsigned int lbl_8320A63C;


void fn_8281FB48(void)

{
  float fVar1;
  unsigned int iVar2;
  float dVar3;
  
  fVar1 = 1.0f;
  for (iVar2 = lbl_8320A63C; dVar3 = (double)fVar1, iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
    fVar1 = (float)((float)*(float *)(iVar2 + 4) * dVar3);
  }
  iVar2 = lbl_8320A4D4;
  if (lbl_8320A4D4 == 0) {
    iVar2 = fn_82813498();
  }
  *(float *)(iVar2 + 0x88) = (float)dVar3;
  return;
}

