#define NAN(x) ((x) != (x))
extern unsigned int lbl_821954D8;
extern unsigned int lbl_82195644;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_825428F8(double param_1)

{
  float fVar1;
  double dVar2;
  
  fVar1 = (float)(param_1 - (double)lbl_821CA460);
  dVar2 = (double)lbl_821CA460;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    dVar2 = param_1;
  }
  return ((__int64)(dVar2 * (double)lbl_82195644) & 0xffU) << 0x18 | 0xffffff;
}

