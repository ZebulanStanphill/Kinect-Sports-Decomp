extern int fn_822CCD18();
extern int fn_82A81CC0();
extern float lbl_82191FC4;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_831CDCB0;
extern unsigned int lbl_83265A28;


void fn_822C3E68(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  char cVar4;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x14) + 0x8c0);
  if (((piVar1 == (int *)0x0) || (iVar3 = (**(int (***)())(*piVar1 + 0x60))(), iVar3 == 0)) ||
     (cVar4 = fn_82A81CC0(), cVar4 != '\x02')) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    fVar2 = ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_82191FC4;
  }
  else {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    fVar2 = ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_82191FC4 +
            lbl_82191FC4;
  }
  *(int *)(param_1 + 0x208) = (int)fVar2;
  fn_822CCD18(*(unsigned int *)(param_1 + 0x18),0xffffffff821ace60,
                    (&lbl_831CDCB0)[(int)fVar2]);
  return;
}

