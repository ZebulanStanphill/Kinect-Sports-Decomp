#define NAN(x) ((x) != (x))
extern int fn_82809950();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_82193CC0;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831E4E38;


void fn_824408A8(unsigned __int64 param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = (double)fn_82F6A544();
  dVar5 = (double)ltcg_pool_0_0f;
  dVar6 = (double)lbl_821CA460;
  dVar3 = (double)(float)(dVar6 / param_3);
  dVar4 = (double)lbl_831E4E38;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)(((double)(float)(dVar1 - param_3) < dVar5) << 2) |
                (unsigned int)(NAN((double)(float)(dVar1 - param_3)) || NAN(dVar5)) << 2)) < 0.0) {
    param_3 = dVar1;
  }
  dVar2 = (double)fn_82809950((double)(float)((double)(float)(param_3 * dVar3) * dVar4));
  dVar3 = (double)fn_82809950((double)(float)((double)(float)(dVar3 * param_2) * dVar4));
  dVar4 = (double)(float)((double)lbl_82193CC0 - dVar3);
  dVar1 = (double)lbl_82193CC0;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((dVar4 < dVar5) << 2) | (unsigned int)(NAN(dVar4) || NAN(dVar5)) << 2)) < 0.0)
  {
    dVar1 = dVar3;
  }
  fn_82F6A590((double)(float)((double)(float)((double)(float)(dVar6 / dVar1) * dVar2) * param_2));
  return;
}

