#define NAN(x) ((x) != (x))
extern int fn_8234B0C8();
extern int fn_827F5708();
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_8234B338(double param_1,int param_2)

{
  unsigned int *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (*(int *)(param_2 + 0x30) != 0) {
    dVar2 = (double)(float)((double)*(float *)(param_2 + 0x30) - param_1);
    dVar5 = (double)ltcg_pool_0_0f;
    dVar4 = -dVar2;
    dVar3 = dVar5;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((dVar4 < dVar5) << 2) | (unsigned int)(NAN(dVar4) || NAN(dVar5)) << 2)) <
        0.0) {
      dVar3 = dVar2;
    }
    *(float *)(param_2 + 0x30) = (float)dVar3;
    if (dVar3 == dVar5) {
      puVar1 = (unsigned int *)(param_2 + 4);
      if (0xf < *(unsigned int *)(param_2 + 0x18)) {
        puVar1 = (unsigned int *)*puVar1;
      }
      fn_8234B0C8(dVar5,param_2,puVar1);
      if ((*(int *)(param_2 + 0x34) != 0) && (*(int *)(param_2 + 0x24) != 0)) {
        fn_827F5708(dVar5);
      }
    }
  }
  return;
}

