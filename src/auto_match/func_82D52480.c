typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82CE5040();
extern V16 vectorAddFloatingPoint();
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMinimumFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D52480(double param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5)

{
  unsigned int *puVar1;
  float *pfVar2;
  int in_r0;
  int iVar3;
  unsigned char in_vs32 [16];
  unsigned char in_vs35 [16];
  unsigned char in_vs39 [16];
  unsigned char auVar4 [16];
  unsigned char auVar5 [16];
  unsigned char auVar6 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  float fVar7;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  float in_register_00010040;
  float in_register_00010044;
  float in_register_00010048;
  float in_vr4;
  unsigned int in_register_00010050;
  unsigned int in_register_00010054;
  unsigned int in_register_00010058;
  unsigned int in_vr5;
  unsigned int in_register_00010080;
  unsigned int in_register_00010084;
  unsigned int in_register_00010088;
  unsigned int in_vr8;
  unsigned int in_register_00010090;
  unsigned int in_register_00010094;
  unsigned int in_register_00010098;
  unsigned int in_vr9;
  float in_register_000101e0;
  float in_register_000101e4;
  float in_register_000101e8;
  float in_vr30;
  float fVar8;
  float fVar9;
  float fVar10;
  float afStack_60 [4];
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [64];
  
  afStack_60[0] = (float)((double)*(float *)(param_2 + 0x10) + param_1);
  fVar7 = *(float *)((int)afStack_60 + in_r0 & 0xfffffff0);
  fVar10 = fVar7;
  fVar9 = fVar7;
  fVar8 = fVar7;
  fn_82CE5040(auStack_50,param_3,param_2 + 0x20);
  fn_82CE5040(afStack_60,param_3,param_2 + 0x30);
  fn_82CE5040(auStack_40,param_3,param_2 + 0x40);
  iVar3 = param_5 + 0x10;{ V16 _vt0 = vectorMinimumFloatingPoint(in_vs32,in_vs45); memcpy(auVar6, &_vt0, 16); }{ V16 _vt1 = vectorMaximumFloatingPoint(in_vs32,in_vs45); memcpy(auVar5, &_vt1, 16); }{ V16 _vt2 = vectorMinimumFloatingPoint(auVar6,in_vs44); memcpy(auVar4, &_vt2, 16); }{ V16 _vt3 = vectorMaximumFloatingPoint(auVar5,in_vs44); memcpy(auVar6, &_vt3, 16); }
  puVar1 = (unsigned int *)(in_r0 + param_5 & 0xfffffff0);
  *puVar1 = in_register_00010090;
  puVar1[1] = in_register_00010094;
  puVar1[2] = in_register_00010098;
  puVar1[3] = in_vr9;
  puVar1 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
  *puVar1 = in_register_00010080;
  puVar1[1] = in_register_00010084;
  puVar1[2] = in_register_00010088;
  puVar1[3] = in_vr8;{ V16 _vt4 = vectorAddFloatingPoint(auVar4,in_vs39); memcpy(auVar5, &_vt4, 16); }
  vectorMinimumFloatingPoint(auVar4,auVar5);
  puVar1 = (unsigned int *)(in_r0 + param_5 & 0xfffffff0);
  *puVar1 = in_register_00010050;
  puVar1[1] = in_register_00010054;
  puVar1[2] = in_register_00010058;
  puVar1[3] = in_vr5;{ V16 _vt5 = vectorAddFloatingPoint(auVar6,in_vs35); memcpy(auVar5, &_vt5, 16); }
  vectorMaximumFloatingPoint(auVar6,auVar5);
  puVar1 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  pfVar2 = (float *)(in_r0 + param_5 & 0xfffffff0);
  *pfVar2 = in_register_00010040 - fVar8;
  pfVar2[1] = in_register_00010044 - fVar9;
  pfVar2[2] = in_register_00010048 - fVar10;
  pfVar2[3] = in_vr4 - fVar7;
  pfVar2 = (float *)(in_r0 + iVar3 & 0xfffffff0);
  *pfVar2 = in_register_000101e0 + fVar8;
  pfVar2[1] = in_register_000101e4 + fVar9;
  pfVar2[2] = in_register_000101e8 + fVar10;
  pfVar2[3] = in_vr30 + fVar7;
  return;
}

