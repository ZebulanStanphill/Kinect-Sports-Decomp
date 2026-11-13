extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int lbl_831BB450;
extern unsigned int lbl_831BB454;
extern unsigned int lbl_831BB458;
extern unsigned int lbl_831BB45C;
extern unsigned int lbl_831BB460;
extern unsigned int lbl_831BB470;
extern unsigned int lbl_831BB480;
extern unsigned int lbl_831BB488;
extern unsigned int lbl_831BB490;
extern unsigned int lbl_831BB498;
extern unsigned int lbl_831BB4A0;
extern unsigned int lbl_831BB4A8;
extern unsigned int lbl_831BB4B0;
extern unsigned int lbl_831BB4B8;
extern unsigned int lbl_831BB4C0;
extern unsigned int lbl_831BB4C8;


double fn_82F65C58(double param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = ABS(param_1);
  if (dVar3 <= (double)lbl_831BB45C) {
    dVar2 = dVar3 * dVar3;
    iVar1 = param_3;
    if ((param_3 == 0) && (param_1 == (double)lbl_831BB450)) {
      return param_1;
    }
  }
  else {
    dVar2 = ((double)lbl_831BB454 - dVar3) * (double)lbl_831BB45C;
    dVar3 = -(SQRT(dVar2) * (double)lbl_831BB458);
    iVar1 = 1 - param_3;
  }
  dVar3 = (((((lbl_831BB4A0 * dVar2 + lbl_831BB498) * dVar2 + lbl_831BB490) * dVar2 + lbl_831BB488)
            * dVar2 + lbl_831BB480) * dVar2 * dVar3) /
          (((((lbl_831BB4C8 + dVar2) * dVar2 + lbl_831BB4C0) * dVar2 + lbl_831BB4B8) * dVar2 +
           lbl_831BB4B0) * dVar2 + lbl_831BB4A8) + dVar3;
  if (param_3 == 0) {
    dVar2 = (double)(&lbl_831BB460)[iVar1] + dVar3;
    if (param_1 < 0.0) {
      dVar2 = -((double)(&lbl_831BB460)[iVar1] + dVar3);
    }
    return dVar2;
  }
  dVar2 = (double)(&lbl_831BB460)[iVar1] - dVar3;
  if (param_1 < 0.0) {
    dVar2 = *(double *)(&lbl_831BB470 + iVar1 * 8) + dVar3;
  }
  return dVar2;
}

