extern int fn_82813498();
extern int fn_8281F720();
extern int fn_82A1E6A0();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8320A4D4;


void fn_8281F4C0(double param_1,int param_2,unsigned __int64 param_3,char param_4,char param_5)

{
  float fVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  double dVar4;
  
  uVar3 = (unsigned __int64)lbl_8320A4D4;
  if (uVar3 == 0) {
    uVar3 = fn_82813498();
  }
  dVar4 = (double)fn_8281F720(uVar3,1);
  fVar1 = lbl_821AAD20;
  if (lbl_821AAD20 <= (float)(dVar4 + param_1)) {
    uVar3 = (unsigned __int64)lbl_8320A4D4;
    if (uVar3 == 0) {
      uVar3 = fn_82813498();
    }
    dVar4 = (double)fn_8281F720(uVar3,1);
    fVar1 = (float)(dVar4 + param_1);
  }
  *(float *)(param_2 + 0x10) = fVar1;
  if ((param_4 != '\0') && (param_5 == '\0')) {
    uVar2 = fn_82A1E6A0(0,0,0,0);
    *(unsigned int *)(param_2 + 8) = uVar2;
  }
  *(char *)(param_2 + 0x14) = param_5;
  *(unsigned char *)(param_2 + 0x15) = 0;
  *(unsigned int *)(param_2 + 0xc) = 0;
  *(unsigned int *)(param_2 + 4) = 0;
  return;
}

