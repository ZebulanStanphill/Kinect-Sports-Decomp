typedef struct { unsigned __int64 lo, hi; } V16;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D1EA20(int param_1)

{
  float *pfVar1;
  unsigned __int64 in_r0;
  unsigned char in_vs32 [16];
  unsigned char in_vs43 [16];
  unsigned char auVar2 [16];
  unsigned char in_vs45 [16];
  float in_register_00010080;
  float in_register_00010084;
  float in_register_00010088;
  float in_vr8;
  float in_register_00010090;
  float in_register_00010094;
  float in_register_00010098;
  float in_vr9;{ V16 _vt0 = vectorAddFloatingPoint(in_vs45,in_vs32); memcpy(auVar2, &_vt0, 16); }
  loadVectorLeftIndexed128(in_r0,0xffffffff82015be0);
  vectorAddFloatingPoint(auVar2,in_vs43);
  pfVar1 = (float *)((int)in_r0 + param_1 & 0xfffffff0);
  *pfVar1 = in_register_00010080 * in_register_00010090;
  pfVar1[1] = in_register_00010084 * in_register_00010094;
  pfVar1[2] = in_register_00010088 * in_register_00010098;
  pfVar1[3] = in_vr8 * in_vr9;
  return;
}

