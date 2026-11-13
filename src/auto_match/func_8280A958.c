extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005C8C;
extern unsigned int lbl_8201DF74;
extern unsigned int lbl_8201DF78;
extern unsigned int lbl_8201DF7C;
extern unsigned int lbl_8201DF80;
extern unsigned int lbl_8201DF84;
extern unsigned int lbl_8201DF88;
extern unsigned int lbl_8201DF8C;
extern unsigned int lbl_8201DF90;
extern unsigned int lbl_8201DF94;
extern unsigned int lbl_821AAD20;


double fn_8280A958(double param_1)

{
  float fVar1;
  
  if (param_1 <= (double)lbl_821AAD20) {
    return (double)lbl_82005C8C;
  }
  fVar1 = (float)((unsigned int)(float)param_1 & 0x7fffff | 0x3f800000) - lbl_82002AE0;
  return (double)(((((((-(fVar1 * lbl_8201DF94 - lbl_8201DF90) * fVar1 - lbl_8201DF8C) * fVar1 +
                      lbl_8201DF88) * fVar1 - lbl_8201DF84) * fVar1 + lbl_8201DF80) * fVar1 -
                   lbl_8201DF7C) * fVar1 + lbl_8201DF78) * fVar1 + lbl_8201DF74 +
                 (float)(__int64)(short)(((unsigned short)((unsigned int)(float)param_1 >> 0x17) & 0xff) - 0x7f));
}

