typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_8255DA40();
extern int fn_825A27B8();
extern int fn_825D3378();
extern V16 vectorSubtractFloatingPoint();


unsigned __int64
fn_825F6F38(double param_1,int param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned int uVar1;
  float *pfVar2;
  int in_r0;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  __int64 lVar6;
  double dVar7;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  float fVar8;
  float fVar9;
  float afStack_50 [20];
  
  lVar3 = fn_825A27B8();
  if ((lVar3 != 0) && (param_5 = *(unsigned int *)(param_2 + 0x8ac) & param_5, param_5 != 0)) {
    dVar7 = (double)fn_8255DA40(param_2);
    uVar1 = in_r0 + param_3 & 0xfffffff0;
    fVar8 = *(float *)(uVar1 + 4);
    fVar9 = *(float *)(uVar1 + 8);
    vectorSubtractFloatingPoint(in_vs45,in_vs32);
    fVar8 = fVar8 * fVar8 + 0.0 + fVar9 * fVar9;
    pfVar2 = (float *)((int)afStack_50 + in_r0 & 0xfffffff0);
    *pfVar2 = fVar8;
    pfVar2[1] = fVar8;
    pfVar2[2] = fVar8;
    pfVar2[3] = fVar8;
    if (afStack_50[0] <= (float)(dVar7 + param_1) * (float)(dVar7 + param_1)) {
      lVar6 = (unsigned __int64)*(unsigned int *)(param_2 + 0x8c0) + 0x144;
      if ((unsigned __int64)*(unsigned int *)(param_2 + 0x8c0) == 0) {
        lVar6 = 0;
      }
      if ((*(int *)(param_2 + 0x4c) == 0) || (*(int *)(param_2 + 0x8c0) == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(unsigned int *)
                 ((*(int *)(*(int *)(param_2 + 0x4c) + 0x44) + 0x20) * 4 + *(int *)(param_2 + 0x8c0)
                 );
      }
      uVar4 = fn_825D3378(param_1,lVar3,param_2 + 0xf0,param_2 + 0x130,uVar5,param_3,param_7,
                                param_5,lVar6);
      return uVar4;
    }
  }
  return 0;
}

