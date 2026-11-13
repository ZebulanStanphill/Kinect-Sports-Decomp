typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 loadVectorLeftIndexed128();
extern V16 vectorSubtractFloatingPoint();


void fn_82CEC1F8(int param_1)

{
  unsigned int uVar1;
  float *pfVar2;
  int iVar3;
  unsigned __int64 in_r0;
  __int64 lVar4;
  unsigned char in_vs33 [16];
  unsigned char in_vs52 [16];
  unsigned char in_vs56 [16];
  unsigned char in_vs57 [16];
  unsigned char in_vs58 [16];
  unsigned char in_vs59 [16];
  unsigned char in_vs62 [16];
  float in_register_00010120;
  float in_register_00010124;
  float in_register_00010128;
  float in_vr18;
  float in_register_00010150;
  float in_register_00010154;
  float in_register_00010158;
  float in_vr21;
  float in_register_00010160;
  float in_register_00010164;
  float in_register_00010168;
  float in_vr22;
  float in_register_00010170;
  float in_register_00010174;
  float in_register_00010178;
  float in_vr23;
  
  lVar4 = ZEXT48(&stack0x00000000) - 0x10;
  vectorSubtractFloatingPoint(in_vs62,in_vs33);
  vectorSubtractFloatingPoint(in_vs59,in_vs58);
  vectorSubtractFloatingPoint(in_vs57,in_vs56);
  uVar1 = storeVectorElementWordIndexed(in_vs52,0,lVar4);
  *(unsigned int *)lVar4 = uVar1;
  loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x10);
  iVar3 = (int)in_r0;
  pfVar2 = (float *)(iVar3 + param_1 & 0xfffffff0);
  *pfVar2 = in_register_00010170 * in_register_00010120;
  pfVar2[1] = in_register_00010174 * in_register_00010124;
  pfVar2[2] = in_register_00010178 * in_register_00010128;
  pfVar2[3] = in_vr23 * in_vr18;
  pfVar2 = (float *)(iVar3 + param_1 + 0x10 & 0xfffffff0);
  *pfVar2 = in_register_00010160 * in_register_00010120;
  pfVar2[1] = in_register_00010164 * in_register_00010124;
  pfVar2[2] = in_register_00010168 * in_register_00010128;
  pfVar2[3] = in_vr22 * in_vr18;
  pfVar2 = (float *)(iVar3 + param_1 + 0x20 & 0xfffffff0);
  *pfVar2 = in_register_00010150 * in_register_00010120;
  pfVar2[1] = in_register_00010154 * in_register_00010124;
  pfVar2[2] = in_register_00010158 * in_register_00010128;
  pfVar2[3] = in_vr21 * in_vr18;
  return;
}

