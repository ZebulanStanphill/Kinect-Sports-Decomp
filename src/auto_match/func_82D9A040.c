typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern V16 vectorAddFloatingPoint();
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMinimumFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D9A040(int param_1)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char in_vs33 [16];
  unsigned char in_vs35 [16];
  unsigned char in_vs36 [16];
  unsigned char auVar2 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int in_register_00010060;
  unsigned int in_register_00010064;
  unsigned int in_register_00010068;
  unsigned int in_vr6;
  unsigned int in_register_000101e0;
  unsigned int in_register_000101e4;
  unsigned int in_register_000101e8;
  unsigned int in_vr30;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  vectorAddFloatingPoint(in_vs45,in_vs43);{ V16 _vt0 = vectorMinimumFloatingPoint(in_vs40,in_vs44); memcpy(auVar2, &_vt0, 16); }
  vectorMaximumFloatingPoint(auVar2,in_vs32);
  puVar1 = (unsigned int *)((int)&fStack_50 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_00010060;
  puVar1[1] = in_register_00010064;
  puVar1[2] = in_register_00010068;
  puVar1[3] = in_vr6;
  *(int *)(param_1 + 0x30) = (int)fStack_50;
  *(int *)(param_1 + 0x34) = (int)fStack_4c;
  *(int *)(param_1 + 0x38) = (int)fStack_48;
  *(int *)(param_1 + 0x3c) = (int)fStack_44;
  vectorAddFloatingPoint(in_vs35,in_vs36);{ V16 _vt1 = vectorMinimumFloatingPoint(in_vs33,in_vs44); memcpy(auVar2, &_vt1, 16); }
  vectorMaximumFloatingPoint(auVar2,in_vs32);
  puVar1 = (unsigned int *)((int)&fStack_50 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_000101e0;
  puVar1[1] = in_register_000101e4;
  puVar1[2] = in_register_000101e8;
  puVar1[3] = in_vr30;
  *(int *)(param_1 + 0x40) = (int)fStack_50;
  *(int *)(param_1 + 0x44) = (int)fStack_4c;
  *(int *)(param_1 + 0x48) = (int)fStack_48;
  *(int *)(param_1 + 0x4c) = (int)fStack_44;
  *(unsigned char *)(param_1 + 0x3f) = 0;
  *(unsigned char *)(param_1 + 0x3c) = 0;
  *(unsigned char *)(param_1 + 0x3d) = 0;
  *(unsigned char *)(param_1 + 0x3e) = 0;
  *(unsigned char *)(param_1 + 0x4c) = 0;
  *(unsigned char *)(param_1 + 0x4d) = 0;
  *(unsigned char *)(param_1 + 0x4e) = 0;
  return;
}

