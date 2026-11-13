typedef struct { unsigned __int64 lo, hi; } V16;
extern V16 vectorSplatImmediateSignedWord128();
extern V16 vectorUnpackD3D128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_83075E30(void)

{
  unsigned char auVar1 [16];{ V16 _vt0 = vectorSplatImmediateSignedWord128(0); memcpy(auVar1, &_vt0, 16); }
  vectorUnpackD3D128(auVar1,4);
  return;
}

