extern int tan();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82079F34;
extern unsigned int lbl_83218BE4;
extern unsigned int lbl_83218BE8;


double fn_829F1A10(double param_1,double param_2,double param_3,unsigned __int64 param_4,
                    unsigned __int64 param_5,unsigned int param_6)

{
  double dVar1;
  
  if ((lbl_83218BE8 & 1) == 0) {
    lbl_83218BE8 = lbl_83218BE8 | 1;
    dVar1 = (double)tan((double)(float)(param_3 * (double)lbl_82079F34));
    lbl_83218BE4 = ((float)param_6 * lbl_82002C5C) / (float)dVar1;
  }
  return (double)(float)((double)(float)((double)lbl_83218BE4 * param_1) / param_2);
}

