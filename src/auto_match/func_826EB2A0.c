extern unsigned int lbl_8200D89C;
extern unsigned int lbl_8200D8A0;


void fn_826EB2A0(unsigned __int64 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = lbl_8200D8A0;
  fVar3 = lbl_8200D89C;
  if (lbl_8200D8A0 < ABS(*param_2)) {
    fVar2 = lbl_8200D89C;
    if (lbl_8200D8A0 < *param_2) {
      fVar2 = lbl_8200D8A0;
    }
    *param_2 = fVar2;
  }
  if (fVar1 < ABS(param_2[1])) {
    if (param_2[1] <= fVar1) {
      fVar1 = fVar3;
    }
    param_2[1] = fVar1;
    return;
  }
  return;
}

