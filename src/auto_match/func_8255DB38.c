typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_8255DBB8();
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMinimumFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_8255DB38(unsigned __int64 param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned char *puVar3;
  __int64 lVar4;
  unsigned char in_vs32 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned char auStack_a0 [16];
  unsigned char auStack_90 [120];
  
  fn_8255DBB8(param_1,auStack_a0);
  puVar3 = auStack_90;
  puVar1 = (unsigned int *)((unsigned int)(auStack_a0 + in_r0) & 0xfffffff0);
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  lVar4 = 7;
  puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  puVar1 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  do {
    puVar1 = (unsigned int *)((unsigned int)(puVar3 + in_r0) & 0xfffffff0);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    puVar3 = puVar3 + 0x10;
    puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
    uVar9 = puVar1[1];
    uVar10 = puVar1[2];
    uVar11 = puVar1[3];{ V16 _vt0 = vectorMinimumFloatingPoint(in_vs45,in_vs32); memcpy(in_vs45, &_vt0, 16); }{ V16 _vt1 = vectorMaximumFloatingPoint(in_vs44,in_vs32); memcpy(in_vs32, &_vt1, 16); }
    puVar2 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar9;
    puVar2[2] = uVar10;
    puVar2[3] = uVar11;
    puVar1 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}

