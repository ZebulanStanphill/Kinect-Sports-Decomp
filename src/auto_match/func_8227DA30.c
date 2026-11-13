#define NAN(x) ((x) != (x))
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82672C20();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_8227DA30(double param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  double dStack_28;
  
  dVar1 = (double)ltcg_pool_0_0f;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((param_1 < dVar1) << 2) | (unsigned int)(NAN(param_1) || NAN(dVar1)) << 2)) <
      0.0) {
    param_1 = dVar1;
  }
  dVar2 = (double)(float)(param_1 - (double)lbl_821CA460);
  dVar3 = (double)lbl_821CA460;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((dVar2 < dVar1) << 2) | (unsigned int)(NAN(dVar2) || NAN(dVar1)) << 2)) < 0.0)
  {
    dVar3 = param_1;
  }
  if (dVar3 != (double)*(float *)(param_2 + 0x48)) {
    *(float *)(param_2 + 0x48) = (float)dVar3;
    uStack_30 = 0;
    uStack_2c = 0;
    fn_82273CD8(&uStack_30,3);
    dStack_28 = dVar3;
    fn_82672C20(*(unsigned int *)(param_2 + 0x3c),0xffffffff821a8744,&uStack_30,1);
    fn_82273C88(&uStack_30);
  }
  return;
}

