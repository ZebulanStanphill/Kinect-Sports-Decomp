#define NAN(x) ((x) != (x))
extern int fn_8257E190();
extern int fn_8265C9E0();
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_8260EDE8(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  float fVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  double dVar4;
  
  if (param_5 == 0) {
    dVar4 = (double)(*(float *)(param_3 + 8) - *(float *)(param_3 + 4));
    uVar2 = **(unsigned int **)(param_1 + 0x60);
    uVar3 = fn_8265C9E0(0x80);
    if ((uVar3 & 0xffffffff) != 0) {
      fVar1 = (float)(dVar4 - (double)lbl_82193AF0);
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                    (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
        dVar4 = (double)lbl_82193AF0;
      }
      fn_8257E190(dVar4,(double)*(float *)(param_3 + 0x10),uVar3,uVar2);
    }
  }
  return;
}

