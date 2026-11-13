typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_58;
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_825E68F0();
extern int fn_825E69E0();
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();
extern V16 vectorSubtractFloatingPoint();


unsigned __int64 fn_825E67C8(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  float *pfVar1;
  int iVar2;
  unsigned __int64 in_r0;
  unsigned __int64 uVar3;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_register_000100c0;
  float in_register_000100c4;
  float in_register_000100c8;
  float in_vr12;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int auStack_58 [2];
  float afStack_50 [4];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float afStack_20 [4];
  
  iVar2 = (int)in_r0;
  pfVar1 = (float *)(iVar2 + param_2 & 0xfffffff0);
  fVar4 = *pfVar1;
  fVar5 = pfVar1[1];
  fVar6 = pfVar1[2];
  fVar7 = pfVar1[3];
  loadVectorLeftIndexed128(in_r0,0xffffffff8218e8e8);
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  vectorAddFloatingPoint(in_vs45,in_vs32);
  pfVar1 = (float *)(iVar2 + (int)afStack_50 & 0xfffffff0);
  *pfVar1 = in_register_000100c0;
  pfVar1[1] = in_register_000100c4;
  pfVar1[2] = in_register_000100c8;
  pfVar1[3] = in_vr12;
  pfVar1 = (float *)(iVar2 + (int)afStack_20 & 0xfffffff0);
  *pfVar1 = fVar4 * in_register_000100c0;
  pfVar1[1] = fVar5 * in_register_000100c4;
  pfVar1[2] = fVar6 * in_register_000100c8;
  pfVar1[3] = fVar7 * in_vr12;
  uVar3 = fn_825E68F0(param_1,param_3,auStack_58,&uStack_5c,&uStack_60,afStack_20,afStack_50,
                            0xffffffff8218e8e8);
  fn_825E69E0(uVar3,auStack_58[0],uStack_5c,uStack_60,&fStack_40,&fStack_30);
  if (((((fStack_40 <= afStack_50[0]) && (afStack_50[0] <= fStack_30)) &&
       (fStack_3c <= afStack_50[1])) &&
      ((((afStack_50[1] <= fStack_2c && (fStack_38 <= afStack_50[2])) &&
        ((afStack_50[2] <= fStack_28 &&
         ((fStack_40 <= afStack_20[0] && (afStack_20[0] <= fStack_30)))))) &&
       (fStack_3c <= afStack_20[1])))) &&
     (((afStack_20[1] <= fStack_2c && (fStack_38 <= afStack_20[2])) && (afStack_20[2] <= fStack_28))
     )) {
    return 1;
  }
  return 0;
}

