extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201DFB0;
extern unsigned int lbl_8201DFB4;
extern unsigned int lbl_8201DFB8;
extern unsigned int lbl_8201DFBC;
extern unsigned int lbl_8201DFC0;
extern unsigned int lbl_8201DFC4;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8280A470(short param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  unsigned short uVar3;
  
  uVar3 = param_1 + 0x2000U & 0xc000;
  fVar2 = (float)(__int64)(short)(param_1 << 2);
  fVar1 = fVar2 * fVar2;
  fVar2 = ((fVar1 * lbl_8201DFC4 - lbl_8201DFC0) * fVar1 + lbl_8201DFBC) * fVar2;
  fVar1 = (-(fVar1 * lbl_8201DFB8 - lbl_8201DFB4) * fVar1 - lbl_8201DFB0) * fVar1 + lbl_82002AE0;
  if (uVar3 == 0) {
    *param_2 = fVar2;
    *param_3 = fVar1;
    return;
  }
  if (uVar3 == 0x4000) {
    fVar2 = -fVar2;
  }
  else {
    if (uVar3 == 0x8000) {
      *param_2 = -fVar2;
      fVar2 = -fVar1;
      goto code_r0x8280a520;
    }
    fVar1 = -fVar1;
  }
  *param_2 = fVar1;
code_r0x8280a520:
  *param_3 = fVar2;
  return;
}

