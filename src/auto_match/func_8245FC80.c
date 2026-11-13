#define NAN(x) ((x) != (x))
extern int fn_82292AE8();
extern int fn_822931D8();
extern int fn_824655B8();
extern int fn_8246F9F0();
extern int fn_82512B70();
extern int fn_8266C6D8();
extern int fn_8266C708();
extern int fn_8266EC60();
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_8245FC80(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  unsigned int *puVar6;
  unsigned __int64 uVar5;
  
  if ((*(int *)(param_2 + 0xa8) == 0) && (**(int **)(param_2 + 0x4c) == 4)) {
    puVar6 = (unsigned int *)fn_82292AE8();
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    fn_822931D8();
    iVar2 = *(int *)(param_2 + 0x38);
    fn_8246F9F0(iVar2,iVar2 + 0x15c);
    fn_8246F9F0(iVar2,iVar2 + 0x178);
    fn_8246F9F0(iVar2,iVar2 + 0x160);
    fn_824655B8(*(unsigned int *)(iVar2 + 0x98),0);
    uVar5 = fn_8266EC60();
    fn_8266C6D8(uVar5,0x40,1);
    uVar5 = fn_8266EC60();
    fn_8266C708(uVar5,0x40,1);
    if (*(int *)(param_2 + 0xc4) != 0) {
      fn_82512B70();
      *(unsigned int *)(param_2 + 0xc4) = 0;
    }
    *(unsigned int *)(param_2 + 0xa8) = 1;
  }
  iVar2 = *(int *)(param_2 + 0x38);
  if (*(int *)(iVar2 + 0x80) != 0) {
    fVar1 = (float)((double)*(float *)(iVar2 + 0x80) - param_1);
    fVar3 = -fVar1;
    fVar4 = ltcg_pool_0_0f;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar3 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar3) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fVar4 = fVar1;
    }
    *(float *)(iVar2 + 0x80) = fVar4;
  }
  return;
}

