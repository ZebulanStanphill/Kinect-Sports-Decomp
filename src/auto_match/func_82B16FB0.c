extern unsigned int lbl_82005710;


unsigned __int64
fn_82B16FB0(double param_1,unsigned int *param_2,char param_3,unsigned __int64 param_4,double *param_5)

{
  unsigned int uVar1;
  double dVar2;
  
  uVar1 = *param_2;
  if ((uVar1 & 2) == 0) {
    if ((uVar1 & 4) == 0) {
      dVar2 = *(double *)(param_2 + 2);
      if (dVar2 == *(double *)(param_2 + 4)) goto LAB_82b17010;
    }
    else if (((param_3 != '\0') && ((param_1 <= lbl_82005710 || ((uVar1 & 0x10) != 0)))) &&
            ((dVar2 = lbl_82005710, lbl_82005710 <= param_1 || ((uVar1 & 8) != 0)))) {
LAB_82b17010:
      *param_5 = dVar2;
      return 1;
    }
  }
  return 0;
}

