#define true 1
extern unsigned int lbl_82005758;


double fn_8302A978(double param_1)

{
  unsigned __int64 uVar1;
  double dVar2;
  
  uVar1 = 3;
  dVar2 = lbl_82005758;
  while( true ) {
    if ((uVar1 & 1) != 0) {
      dVar2 = dVar2 * param_1;
    }
    uVar1 = uVar1 >> 1;
    if (uVar1 == 0) break;
    param_1 = param_1 * param_1;
  }
  return (double)(float)dVar2;
}

