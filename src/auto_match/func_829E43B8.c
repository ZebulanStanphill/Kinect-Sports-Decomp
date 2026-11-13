extern int fn_829E3D98();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005730;


unsigned __int64
fn_829E43B8(double param_1,double param_2,int *param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             int param_6,int param_7)

{
  unsigned __int64 uVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = (double)(float)param_3[0x3e];
  uVar1 = 0;
  if ((double)lbl_82002AE0 <= dVar3) {
    return 0;
  }
  if ((param_6 != 0) || (param_7 != 3)) {
    if (param_1 < param_2) {
      return 0;
    }
    dVar2 = (double)fn_829E3D98(param_3,(__int64)
                                          ((double)((float)*(unsigned char *)(*param_3 + 200) /
                                                   (float)(param_1 / param_2)) + lbl_82005730) &
                                          0xff);
    if (dVar2 <= dVar3) {
      return uVar1;
    }
  }
  return 1;
}

