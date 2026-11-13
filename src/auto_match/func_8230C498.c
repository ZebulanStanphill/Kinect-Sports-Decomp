extern unsigned int *auStack_30;
extern float fRam831cc4d8;
extern float fRam831cc4dc;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82250A18();
extern int fn_822FB198();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int lbl_832975B0;


void fn_8230C498(int param_1)

{
  float fVar1;
  int iVar2;
  unsigned char auStack_30 [32];
  
  fn_82230110(auStack_30,0xffffffff821aef0c);
  fn_822FB198(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0xc0),auStack_30);
  fn_82230300(auStack_30,1,0);
  iVar2 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar2 = fn_82250A18();
  }
  fVar1 = fRam831cc4dc;
  if (*(char *)(iVar2 + 4) == '\0') {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    fVar1 = (fRam831cc4dc - fRam831cc4d8) *
            ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) + fRam831cc4d8;
  }
  *(float *)(param_1 + 0x38) = fVar1;
  *(unsigned int *)(param_1 + 0x3c) = 1;
  return;
}

