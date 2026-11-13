#define NAN(x) ((x) != (x))
extern int fn_82F655D8();
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_82192488;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821956A8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


double fn_8253FFE0(double param_1)

{
  unsigned char bVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = (double)ltcg_pool_0_0f;
  bVar1 = ((double)(float)(param_1 - (double)lbl_8218EC10) < dVar3) << 3 |
          (NAN((double)(float)(param_1 - (double)lbl_8218EC10)) || NAN(dVar3));
  dVar2 = (double)fn_82F655D8(lbl_821956A8,(double)(float)(param_1 * (double)lbl_82192488));
  dVar2 = (double)(lbl_821CA460 - (float)dVar2);
  if (*(float *)(&lbl_821954D8 + ((bVar1 & 0xf) >> 1 & 4 | ((bVar1 & 0xf) & 1) << 2)) < 0.0) {
    dVar2 = dVar3;
  }
  return dVar2;
}

