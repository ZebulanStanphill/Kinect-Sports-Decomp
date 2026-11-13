typedef struct { unsigned __int64 lo, hi; } V16;
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82CEBF30(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char auVar3 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs45,in_vs32,in_vs44); memcpy(auVar3, &_vt0, 16); }
  puVar2 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs44,auVar3,in_vs45); memcpy(auVar3, &_vt1, 16); }
  puVar2 = (unsigned int *)(in_r0 + param_1 + 0x10 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  vectorMultiplyAddFloatingPoint(in_vs44,auVar3,in_vs45);
  puVar2 = (unsigned int *)(in_r0 + param_1 + 0x20 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  return;
}

