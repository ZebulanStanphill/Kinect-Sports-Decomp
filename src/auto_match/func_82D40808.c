extern float fRam831819c0;
extern float fRam831819c4;
extern unsigned int lbl_82002AE0;
extern float lbl_8213855C;
extern unsigned int lbl_82186E6C;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82D40808(unsigned int param_1)

{
  fRam831819c0 = ((float)(__int64)
                         (int)(((int)param_1 >> 3) + (unsigned int)((int)param_1 < 0 && (param_1 & 7) != 0))
                 - lbl_82186E6C) * lbl_8213855C;
  fRam831819c4 = lbl_82002AE0 / fRam831819c0;
  return;
}

