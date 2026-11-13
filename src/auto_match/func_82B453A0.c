typedef unsigned char bool;
#define true 1
#define false 0


double fn_82B453A0(double param_1)

{
  bool bVar1;
  
  if (ABS((float)param_1) != 0.0) {
    bVar1 = false;
    if (((unsigned int)(float)param_1 & 0x7f800000) == 0) goto LAB_82b453c4;
  }
  bVar1 = true;
LAB_82b453c4:
  if (bVar1) {
    return param_1;
  }
  return (double)(float)((unsigned int)(float)param_1 & 0x80000000);
}

