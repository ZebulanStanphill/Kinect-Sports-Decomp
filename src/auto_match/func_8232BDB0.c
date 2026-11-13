#define true 1
extern int fn_82520780();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;


unsigned __int64 fn_8232BDB0(float *param_1)

{
  float fVar1;
  float fVar2;
  __int64 lVar3;
  float *pfVar4;
  unsigned int uVar5;
  float afStack_28 [4];
  
  lVar3 = fn_82520780((double)param_1[3],0xffffffff83265a28);
  fVar1 = param_1[4];
  afStack_28[0] = *param_1;
  afStack_28[1] = param_1[1];
  afStack_28[2] = param_1[2];
  if ((int)lVar3 == 0) {
    afStack_28[2] = ltcg_pool_0_0f;
    fVar1 = fVar1 - param_1[2];
  }
  pfVar4 = afStack_28;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar5 = 0;
  fVar2 = ltcg_pool_0_0f;
  do {
    fVar2 = *pfVar4 + fVar2;
    if (((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * fVar1 < fVar2) {
      if (uVar5 == 0) {
        return -(unsigned __int64)(lVar3 == 0) & 2;
      }
      if (uVar5 == 1) {
        return (-(unsigned __int64)(lVar3 != 0) & 0xfffffffe) + 3;
      }
      if (uVar5 < 3) {
        return 4;
      }
    }
    uVar5 = uVar5 + 1;
    pfVar4 = pfVar4 + 1;
    if (2 < (int)uVar5) {
      return 5;
    }
  } while( true );
}

