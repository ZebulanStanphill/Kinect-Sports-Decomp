#define _fStack00000010 ((*(unsigned __int64*)&fStack00000010))
extern unsigned int fStack00000010;
extern unsigned int fStack00000014;
extern int fn_825308E8();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821CA460;


unsigned __int64 fn_82531E50(double param_1,double param_2,unsigned __int64 param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  float fStack00000010;
  float fStack00000014;
  
  _fStack00000010 = param_3;
  iVar1 = fn_825308E8();
  dVar3 = param_2;
  if (*(unsigned int *)(iVar1 + 0xc) < 0x2d0) {
    dVar2 = (double)lbl_821CA460;
    if (*(int *)(iVar1 + 4) == 0) {
      param_2 = -(double)(float)((double)(float)(dVar2 - param_2) * (double)lbl_821916FC - dVar2);
    }
    else {
      dVar3 = -(double)(float)((double)(float)(dVar2 - param_2) * (double)lbl_821916FC - dVar2);
    }
  }
  if ((-param_1 <= (double)fStack00000010) && ((double)fStack00000010 < param_1)) {
    if ((-dVar3 <= (double)fStack00000014) && ((double)fStack00000014 < param_2)) {
      return 1;
    }
  }
  return 0;
}

