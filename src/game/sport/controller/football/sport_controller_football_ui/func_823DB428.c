#define NAN(x) ((x) != (x))
extern int fn_8229AAF8();
extern int fn_823DB7C8();
extern int fn_823DB9B0();
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;
extern int (*lbl_83276778)();


void fn_823DB428(double param_1,int *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  fn_823DB7C8(param_2 + 4);
  if (param_2[0x20] != 0) {
    fn_823DB9B0(param_2 + 0x18);
  }
  dVar4 = (double)ltcg_pool_0_0f;
  if ((((param_2[0x35] != 0) && (dVar4 < (double)(float)param_2[0x36])) &&
      (fVar1 = (float)((double)(float)param_2[0x36] - param_1), param_2[0x36] = (int)fVar1,
      (double)fVar1 <= dVar4)) && (lbl_83276778 != (int (**)())0x0)) {
    (*lbl_83276778)(0,0,1,0xffffffff821b6718,0xffffffff821b66a8,0x1dc);
  }
  if (param_2[0x37] != 0) {
    dVar3 = -(double)(float)((double)(float)param_2[0x37] - param_1);
    dVar2 = dVar4;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((dVar3 < dVar4) << 2) | (unsigned int)(NAN(dVar3) || NAN(dVar4)) << 2)) <
        0.0) {
      dVar2 = (double)(float)((double)(float)param_2[0x37] - param_1);
    }
    param_2[0x37] = (int)(float)dVar2;
    if (dVar2 == dVar4) {
      fn_8229AAF8(*(unsigned int *)(*param_2 + 0xd4));
    }
  }
  return;
}

