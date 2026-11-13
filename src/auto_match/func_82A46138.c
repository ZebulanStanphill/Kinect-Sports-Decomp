extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;


unsigned __int64 fn_82A46138(double param_1,unsigned int param_2,unsigned __int64 param_3,int param_4)

{
  if (param_4 != 0) {
    return ((__int64)((double)(float)((double)param_2 * param_1) + lbl_82005758) & 0xffffffffU) + 1
    ;
  }
  return (__int64)((double)(float)((double)param_2 * param_1) + lbl_82005730) & 0xffffffff;
}

