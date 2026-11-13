extern int fn_824656C8();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


int * fn_8246B178(int *param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int uVar3;
  
  uVar1 = 0;
  piVar2 = param_1;
  for (uVar3 = param_2; uVar3 != 0; uVar3 = uVar3 - 1) {
    if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
      uVar1 = uVar1 + 1;
    }
    piVar2 = piVar2 + 1;
  }
  if (((int)*param_3 < 0) || (uVar1 < 2)) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar1 = (unsigned int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                  (float)(__int64)(int)uVar1);
  }
  else {
    uVar1 = fn_824656C8(0);
  }
  uVar3 = 0;
  piVar2 = param_1;
  if (param_2 != 0) {
    do {
      if (((piVar2 != (int *)0x0) && (*piVar2 != 0)) && (uVar3 == uVar1)) {
        *param_3 = uVar1;
        return param_1 + uVar3;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar3 < param_2);
  }
  return (int *)0x0;
}

