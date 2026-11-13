extern int fn_827E9E08();
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_827EA030(double param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *in_r9;
  double dVar4;
  double dVar5;
  
  fVar2 = lbl_821AAD20;
  fVar1 = (float)param_1;
  dVar5 = (double)lbl_821AAD20;
  iVar3 = fn_827E9E08();
  if (iVar3 != 0) {
    dVar4 = (double)fVar2;
    if ((((dVar4 <= (double)fVar1) && (dVar4 <= param_1)) && (dVar5 <= (double)fVar1)) &&
       (dVar5 <= dVar4)) {
      *in_r9 = fVar2;
      return 1;
    }
  }
  return 0;
}

