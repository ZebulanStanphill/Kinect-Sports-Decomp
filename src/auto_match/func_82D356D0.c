typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_a0;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern unsigned int fStack_68;
extern int fn_82D34280();
extern int fn_82D35128();
extern int fn_82D351D8();
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_46;
extern unsigned int uStack_48;
extern unsigned int uStack_4a;
extern unsigned int uStack_4c;
extern unsigned int uStack_4e;
extern unsigned int uStack_50;
extern unsigned int uStack_70;
extern V16 vectorAddFloatingPoint();
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMinimumFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


unsigned __int64 fn_82D356D0(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  int iVar2;
  int in_r0;
  unsigned __int64 uVar3;
  int *piVar4;
  int *piVar5;
  unsigned short *puVar6;
  unsigned char in_vs32 [16];
  unsigned char auVar7 [16];
  unsigned char auVar8 [16];
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
  unsigned short auStack_a0;
  __int64 lStack_98;
  __int64 lStack_90;
  __int64 lStack_88;
  __int64 lStack_80;
  unsigned __int64 uStack_70;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  unsigned short uStack_50;
  unsigned short uStack_4e;
  unsigned short uStack_4c;
  unsigned short uStack_4a;
  unsigned short uStack_48;
  unsigned short uStack_46;
  unsigned int uStack_44;
  unsigned short uStack_40;
  
  vectorAddFloatingPoint(in_vs32,in_vs45);
  vectorAddFloatingPoint(in_vs42,in_vs44);
  puVar6 = (unsigned short *)(param_1 + 0x14);
  uStack_40 = 0x8000;
  piVar5 = (int *)(param_1 + 0x10);
  piVar4 = (int *)(param_1 + 0x1c);{ V16 _vt0 = vectorMinimumFloatingPoint(in_vs38,in_vs39); memcpy(auVar8, &_vt0, 16); }{ V16 _vt1 = vectorMinimumFloatingPoint(in_vs37,in_vs39); memcpy(auVar7, &_vt1, 16); }
  vectorMaximumFloatingPoint(auVar8,in_vs32);
  vectorMaximumFloatingPoint(auVar7,in_vs32);
  puVar1 = (unsigned int *)((int)&fStack_60 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  puVar1 = (unsigned int *)((int)&uStack_70 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  lStack_98 = (__int64)(int)fStack_58;
  lStack_90 = (__int64)(int)(((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF);
  lStack_80 = (__int64)(int)fStack_5c;
  lStack_88 = (__int64)(int)(((unsigned __int64)(uStack_70) >> 32) & 0xFFFFFFFF);
  uStack_4e = (unsigned short)((unsigned int)(int)(((unsigned __int64)(uStack_70) >> 32) & 0xFFFFFFFF) >> 0xf);
  uStack_4c = (unsigned short)((unsigned int)(int)fStack_68 >> 0xf);
  uStack_46 = (unsigned short)((unsigned int)(int)fStack_58 >> 0xf);
  uStack_48 = (unsigned short)((unsigned int)(int)fStack_5c >> 0xf);
  uStack_4a = (unsigned short)((unsigned int)(int)fStack_60 >> 0xf);
  uStack_50 = (unsigned short)((unsigned int)(int)(((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF) >> 0xf);
  uStack_70 = (__int64)(int)fStack_60;
  uStack_44 = param_3;
  uVar3 = fn_82D35128(piVar4,piVar5,puVar6,&uStack_50);
  if (*(short *)(param_1 + 0x14) == 0x7fff) {
    iVar2 = (((unsigned int)uVar3 & 0xffff) + ((unsigned int)uVar3 & 0xffff) * 4) * 4 + *piVar4;
    *(unsigned short *)(iVar2 + 0x12) = 0x7fff;
    *(unsigned short *)(iVar2 + 0x10) = *(unsigned short *)(iVar2 + 0x10) | 0x7fff;
    *piVar5 = iVar2;
    *puVar6 = (short)uVar3;
  }
  else {
    fn_82D351D8(piVar4,piVar5,puVar6,&auStack_a0);
    fn_82D34280(param_1,*puVar6,uVar3,auStack_a0);
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return uVar3;
}

