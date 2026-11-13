typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82D0B6F0();
extern unsigned int lbl_8323B1A0;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


unsigned __int64 fn_82D1EA60(unsigned __int64 param_1,int param_2)

{
  unsigned int *puVar1;
  float *pfVar2;
  unsigned __int64 in_r0;
  int iVar3;
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
  
  pfVar2 = (float *)((unsigned int)(&lbl_8323B1A0 + (int)in_r0) & 0xfffffff0);
  fVar4 = *pfVar2;
  fVar5 = pfVar2[1];
  fVar6 = pfVar2[2];
  fVar7 = pfVar2[3];
  if (*(int *)(param_2 + 0x18) < 1) {
    if (*(int *)(param_2 + 0x7b8) != 0) {
      iVar3 = fn_82D0B6F0();
      pfVar2 = (float *)((int)in_r0 + iVar3 & 0xfffffff0);
      fVar4 = *pfVar2;
      fVar5 = pfVar2[1];
      fVar6 = pfVar2[2];
      fVar7 = pfVar2[3];
    }
    pfVar2 = (float *)((int)in_r0 + (int)param_1 & 0xfffffff0);
    *pfVar2 = fVar4;
    pfVar2[1] = fVar5;
    pfVar2[2] = fVar6;
    pfVar2[3] = fVar7;
  }
  else {
    puVar1 = *(unsigned int **)(param_2 + 0x14);
    while (puVar1 != (unsigned int *)0x0) {
      puVar1 = (unsigned int *)*puVar1;{ V16 _vt0 = vectorAddFloatingPoint(in_vs32,in_vs45); memcpy(in_vs32, &_vt0, 16); }
    }
    loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x20);
    pfVar2 = (float *)((int)in_r0 + (int)param_1 & 0xfffffff0);
    *pfVar2 = fVar4 * in_register_000100c0;
    pfVar2[1] = fVar5 * in_register_000100c4;
    pfVar2[2] = fVar6 * in_register_000100c8;
    pfVar2[3] = fVar7 * in_vr12;
  }
  return param_1;
}

