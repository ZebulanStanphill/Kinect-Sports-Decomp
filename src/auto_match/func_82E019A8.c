typedef struct { unsigned __int64 lo, hi; } V16;
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMinimumFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82E019A8(unsigned __int64 param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  int in_r0;
  int iVar2;
  int iVar3;
  unsigned char in_vs32 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char auVar4 [16];
  unsigned char auVar5 [16];
  unsigned char in_vs45 [16];
  unsigned int in_register_00010050;
  unsigned int in_register_00010054;
  unsigned int in_register_00010058;
  unsigned int in_vr5;
  unsigned int in_register_00010070;
  unsigned int in_register_00010074;
  unsigned int in_register_00010078;
  unsigned int in_vr7;
  unsigned int in_register_00010090;
  unsigned int in_register_00010094;
  unsigned int in_register_00010098;
  unsigned int in_vr9;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int in_register_000100c0;
  unsigned int in_register_000100c4;
  unsigned int in_register_000100c8;
  unsigned int in_vr12;
  
  iVar3 = param_3 + 0x10;
  iVar2 = 1;{ V16 _vt0 = vectorMinimumFloatingPoint(in_vs45,in_vs32); memcpy(auVar5, &_vt0, 16); }
  puVar1 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
  *puVar1 = in_register_000100c0;
  puVar1[1] = in_register_000100c4;
  puVar1[2] = in_register_000100c8;
  puVar1[3] = in_vr12;
  puVar1 = (unsigned int *)(*(int *)(param_2 + 0x48) + 0x60U & 0xfffffff0);
  uVar6 = *puVar1;
  uVar7 = puVar1[1];
  uVar8 = puVar1[2];
  uVar9 = puVar1[3];
  vectorMaximumFloatingPoint(in_vs42,in_vs43);
  puVar1 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
  *puVar1 = in_register_00010090;
  puVar1[1] = in_register_00010094;
  puVar1[2] = in_register_00010098;
  puVar1[3] = in_vr9;
  if ('\x01' < *(char *)(*(int *)(param_2 + 0x1c) + 0x20)) {
    do {
      iVar2 = iVar2 + 1;{ V16 _vt1 = vectorMinimumFloatingPoint(in_vs32,auVar5); memcpy(auVar4, &_vt1, 16); }
      puVar1 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      vectorMinimumFloatingPoint(auVar4,in_vs42);
      puVar1 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
      *puVar1 = in_register_00010090;
      puVar1[1] = in_register_00010094;
      puVar1[2] = in_register_00010098;
      puVar1[3] = in_vr9;{ V16 _vt2 = vectorMaximumFloatingPoint(in_vs45,in_vs40); memcpy(auVar4, &_vt2, 16); }
      puVar1 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
      *puVar1 = in_register_00010070;
      puVar1[1] = in_register_00010074;
      puVar1[2] = in_register_00010078;
      puVar1[3] = in_vr7;
      vectorMaximumFloatingPoint(auVar4,in_vs38);
      puVar1 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
      *puVar1 = in_register_00010050;
      puVar1[1] = in_register_00010054;
      puVar1[2] = in_register_00010058;
      puVar1[3] = in_vr5;
    } while (iVar2 < *(char *)(*(int *)(param_2 + 0x1c) + 0x20));
    return;
  }
  return;
}

