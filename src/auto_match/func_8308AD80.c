typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern unsigned int iStack_24;
extern unsigned int iStack_28;
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int uStack_50;
extern V16 vectorAddFloatingPoint();
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMinimumFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_8308AD80(int *param_1,unsigned __int64 param_2)

{
  int (**pcVar1)();
  unsigned int *puVar2;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char auVar3 [16];
  unsigned char auVar4 [16];
  unsigned char in_vs37 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  unsigned __int64 uStack_50;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  vectorAddFloatingPoint(in_vs32,in_vs45);
  vectorAddFloatingPoint(in_vs42,in_vs44);
  pcVar1 = *(int (***)())(*param_1 + 0x14);{ V16 _vt0 = vectorMinimumFloatingPoint(in_vs38,in_vs39); memcpy(auVar4, &_vt0, 16); }{ V16 _vt1 = vectorMinimumFloatingPoint(in_vs37,in_vs39); memcpy(auVar3, &_vt1, 16); }
  vectorMaximumFloatingPoint(auVar4,in_vs32);
  vectorMaximumFloatingPoint(auVar3,in_vs32);
  puVar2 = (unsigned int *)((int)&fStack_40 + in_r0 & 0xfffffff0);
  *puVar2 = in_register_00010020;
  puVar2[1] = in_register_00010024;
  puVar2[2] = in_register_00010028;
  puVar2[3] = in_vr2;
  fStack_34 = (float)(int)fStack_34;
  puVar2 = (unsigned int *)((int)&uStack_50 + in_r0 & 0xfffffff0);
  *puVar2 = in_register_00010010;
  puVar2[1] = in_register_00010014;
  puVar2[2] = in_register_00010018;
  puVar2[3] = in_vr1;
  iStack_2c = (int)(((unsigned __int64)(uStack_50) >> 32) & 0xFFFFFFFF);
  iStack_30 = (int)(((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF);
  fStack_38 = (float)(int)fStack_38;
  iStack_28 = (int)fStack_48;
  iStack_24 = (int)fStack_44;
  fStack_40 = (float)(int)fStack_40;
  uStack_50 = (__int64)(int)fStack_40;
  fStack_3c = (float)(int)fStack_3c;
  (*pcVar1)(param_1,param_2,&fStack_40);
  return;
}

