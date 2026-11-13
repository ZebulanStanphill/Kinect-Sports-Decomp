typedef struct { unsigned __int64 lo, hi; } V16;
extern V16 vectorAddFloatingPoint();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82DA0080(void)

{
  unsigned int *puVar1;
  int in_r0;
  int in_r8;
  unsigned char in_vs32 [16];
  unsigned char auVar2 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs45 [16];
  unsigned int in_register_00010080;
  unsigned int in_register_00010084;
  unsigned int in_register_00010088;
  unsigned int in_vr8;{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs45,in_vs42); memcpy(auVar2, &_vt0, 16); }
  vectorAddFloatingPoint(in_vs32,auVar2);
  puVar1 = (unsigned int *)(in_r0 + in_r8 & 0xfffffff0);
  *puVar1 = in_register_00010080;
  puVar1[1] = in_register_00010084;
  puVar1[2] = in_register_00010088;
  puVar1[3] = in_vr8;
  return;
}

