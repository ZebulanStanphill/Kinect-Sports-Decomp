typedef struct { unsigned __int64 lo, hi; } V16;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D523B8(unsigned __int64 param_1,int param_2)

{
  unsigned int *puVar1;
  float *pfVar2;
  unsigned __int64 in_r0;
  unsigned char in_vs32 [16];
  unsigned char in_vs42 [16];
  unsigned char auVar3 [16];
  unsigned char in_vs45 [16];
  float in_register_00010080;
  float in_register_00010084;
  float in_register_00010088;
  float in_vr8;
  float in_register_00010090;
  float in_register_00010094;
  float in_register_00010098;
  float in_vr9;
  unsigned int in_register_000100c0;
  unsigned int in_register_000100c4;
  unsigned int in_register_000100c8;
  unsigned int in_vr12;{ V16 _vt0 = vectorAddFloatingPoint(in_vs45,in_vs32); memcpy(auVar3, &_vt0, 16); }
  puVar1 = (unsigned int *)((int)in_r0 + param_2 & 0xfffffff0);
  *puVar1 = in_register_000100c0;
  puVar1[1] = in_register_000100c4;
  puVar1[2] = in_register_000100c8;
  puVar1[3] = in_vr12;
  loadVectorLeftIndexed128(in_r0,0xffffffff82015be0);
  vectorAddFloatingPoint(auVar3,in_vs42);
  pfVar2 = (float *)((int)in_r0 + param_2 & 0xfffffff0);
  *pfVar2 = in_register_00010090 * in_register_00010080;
  pfVar2[1] = in_register_00010094 * in_register_00010084;
  pfVar2[2] = in_register_00010098 * in_register_00010088;
  pfVar2[3] = in_vr9 * in_vr8;
  return;
}

