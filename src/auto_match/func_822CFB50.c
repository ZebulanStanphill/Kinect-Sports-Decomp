extern unsigned int *auStack_44;
extern unsigned int *auStack_60;
extern unsigned int *auStack_84;
extern unsigned int *auStack_a0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822C1730();
extern int fn_822CCD18();
extern int fn_82A81CC0();
extern float lbl_82192604;
extern unsigned int lbl_821AD4A8;
extern unsigned int lbl_821AD4B4;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_822CFB50(int param_1)

{
  unsigned char *puVar1;
  int iVar2;
  char cVar4;
  unsigned char *puVar3;
  unsigned __int64 uVar5;
  unsigned char auStack_a0 [28];
  unsigned char auStack_84 [36];
  unsigned char auStack_60 [28];
  unsigned char auStack_44 [68];
  
  iVar2 = (**(int (***)())(**(int **)(*(int *)(param_1 + 0x14) + 0x8c0) + 0x60))();
  uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x170);
  if ((iVar2 == 0) || (cVar4 = fn_82A81CC0(), cVar4 != '\x02')) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    iVar2 = (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_82192604);
    fn_822CCD18(*(unsigned int *)(param_1 + 0x18),0xffffffff821acbd0,(&lbl_821AD4B4)[iVar2]
                 );
    if (uVar5 == 0) {
      return;
    }
    puVar1 = (&lbl_821AD4B4)[iVar2];
    fn_82230110(auStack_60,0xffffffff821acbd0);
    fn_82230110(auStack_44,puVar1);
    fn_822C1730(uVar5 + 0x54,auStack_60);
    fn_82230300(auStack_44,1,0);
    puVar3 = auStack_60;
  }
  else {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    iVar2 = (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_82192604);
    fn_822CCD18(*(unsigned int *)(param_1 + 0x18),0xffffffff821acbd0,
                  (&lbl_821AD4A8)[iVar2]);
    if (uVar5 == 0) {
      return;
    }
    puVar1 = (&lbl_821AD4A8)[iVar2];
    fn_82230110(auStack_a0,0xffffffff821acbd0);
    fn_82230110(auStack_84,puVar1);
    fn_822C1730(uVar5 + 0x54,auStack_a0);
    fn_82230300(auStack_84,1,0);
    puVar3 = auStack_a0;
  }
  fn_82230300(puVar3,1,0);
  return;
}

