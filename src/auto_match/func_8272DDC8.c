extern int fn_8269AFB8();
extern int fn_8269B930();
extern int fn_827A0C20();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;


int * fn_8272DDC8(int param_1,int *param_2,char param_3)

{
  double dVar1;
  double dVar2;
  float *pfVar3;
  double dVar4;
  double dVar5;
  
  fn_8269AFB8();
  if ((param_3 != '\0') || ((*(unsigned short *)(param_1 + 200) & 0x2000) != 0)) {
    pfVar3 = (float *)fn_827A0C20(*(unsigned int *)(param_1 + 0xa0));
    dVar2 = lbl_82005730;
    dVar1 = lbl_82005710;
    dVar5 = (double)*pfVar3 * (double)*(float *)(param_1 + 0x44) +
            (double)pfVar3[1] * (double)*(float *)(param_1 + 0x48) +
            (double)*(float *)(param_1 + 0x4c);
    dVar4 = (double)*pfVar3 * (double)*(float *)(param_1 + 0x50) +
            (double)pfVar3[1] * (double)*(float *)(param_1 + 0x54) +
            (double)*(float *)(param_1 + 0x58);
    if (dVar5 <= lbl_82005710) {
      dVar5 = dVar5 - lbl_82005730;
    }
    else {
      dVar5 = dVar5 + lbl_82005730;
    }
    *param_2 = (int)dVar5;
    if (dVar4 <= dVar1) {
      dVar4 = dVar4 - dVar2;
    }
    else {
      dVar4 = dVar4 + dVar2;
    }
    param_2[1] = (int)dVar4;
    fn_8269B930(param_1,param_2);
    *(unsigned short *)(param_1 + 200) = *(unsigned short *)(param_1 + 200) & 0xdfff;
  }
  return param_2;
}

