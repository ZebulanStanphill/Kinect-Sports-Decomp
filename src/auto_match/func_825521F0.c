#define NAN(x) ((x) != (x))
extern float fRam831d44fc;
extern float fRam831d4500;
extern float fRam831d4504;
extern int fn_8227CB30();
extern int fn_82359C18();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D44F8;
extern unsigned int lbl_831D4508;


unsigned __int64
fn_825521F0(double param_1,double param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5
             )

{
  unsigned __int64 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = (double)ltcg_pool_0_0f;
  if (dVar2 < param_2) {
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((param_1 < dVar2) << 2) | (unsigned int)(NAN(param_1) || NAN(dVar2)) << 2))
        < 0.0) {
      param_1 = dVar2;
    }
    fRam831d4504 = (float)param_2;
    dVar4 = (double)(float)(param_1 - (double)lbl_821CA460);
    dVar3 = (double)lbl_821CA460;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((dVar4 < dVar2) << 2) | (unsigned int)(NAN(dVar4) || NAN(dVar2)) << 2)) <
        0.0) {
      dVar3 = param_1;
    }
    fRam831d44fc = (float)dVar3;
    fRam831d4500 = (float)((double)(float)(dVar3 - (double)lbl_831D44F8) / param_2);
    fn_8227CB30(0xffffffff831d4510,param_5);
    uVar1 = 1;
    lbl_831D4508 = 1;
  }
  else {
    uVar1 = 0;
  }
  fn_82359C18(param_5);
  return uVar1;
}

