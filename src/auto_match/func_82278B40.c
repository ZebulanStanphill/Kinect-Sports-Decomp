typedef unsigned char bool;
extern unsigned int lbl_82192734;
extern unsigned int lbl_82193CC0;
extern unsigned int lbl_82195634;
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_82278B40(float *param_1)

{
  float fVar1;
  bool bVar2;
  
  fVar1 = lbl_82192734;
  param_1[4] = 2.8026e-45;
  bVar2 = lbl_82195634 <= param_1[3];
  param_1[2] = ltcg_pool_0_0f;
  param_1[1] = fVar1 / *param_1;
  if ((bVar2) && (param_1[3] <= lbl_82193CC0)) {
    return 1;
  }
  return 0;
}

