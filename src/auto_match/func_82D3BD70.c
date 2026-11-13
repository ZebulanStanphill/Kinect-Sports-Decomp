typedef struct { unsigned __int64 lo, hi; } V16;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();


void fn_82D3BD70(unsigned __int64 param_1,int param_2)

{
  float *pfVar1;
  unsigned __int64 in_r0;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  float in_register_000100a0;
  float in_register_000100a4;
  float in_register_000100a8;
  float in_vr10;
  float in_register_000100c0;
  float in_register_000100c4;
  float in_register_000100c8;
  float in_vr12;
  
  vectorAddFloatingPoint(in_vs45,in_vs32);
  loadVectorLeftIndexed128(in_r0,0xffffffff82002c5c);
  pfVar1 = (float *)((int)in_r0 + param_2 & 0xfffffff0);
  *pfVar1 = in_register_000100c0 * in_register_000100a0;
  pfVar1[1] = in_register_000100c4 * in_register_000100a4;
  pfVar1[2] = in_register_000100c8 * in_register_000100a8;
  pfVar1[3] = in_vr12 * in_vr10;
  return;
}

