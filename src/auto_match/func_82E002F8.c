typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int fStack_10;
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorAddFloatingPoint();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82E002F8(unsigned __int64 param_1,int param_2,unsigned int param_3,int param_4,int param_5)

{
  float fVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  __int64 lVar4;
  int iVar5;
  unsigned char in_vs34 [16];
  unsigned char in_vs36 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned char in_vs50 [16];
  unsigned char auVar6 [16];
  unsigned char auVar7 [16];
  unsigned char in_vs56 [16];
  unsigned char in_vs57 [16];
  unsigned char in_vs58 [16];
  unsigned char in_vs59 [16];
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  float fStack_10;
  
  puVar2 = (unsigned int *)(in_r0 + param_4 & 0xfffffff0);
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  fVar1 = *(float *)(*(int *)(*(int *)(param_2 + 0x34) + 8) +
                     ((param_3 & 0xff) + (param_3 & 0xff) * 2) * 0x10 + 0x20);
  puVar3 = (unsigned int *)(in_r0 + param_5 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar8;
  puVar3[2] = uVar9;
  puVar3[3] = uVar10;
  puVar2 = (unsigned int *)(param_4 + 0x10U & 0xfffffff0);
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  puVar3 = (unsigned int *)(in_r0 + param_5 + 0x10 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar8;
  puVar3[2] = uVar9;
  puVar3[3] = uVar10;
  iVar5 = *(int *)(param_4 + 0x28);
  if (*(char *)(iVar5 + 0x18) == '\x01') {
    iVar5 = *(char *)(iVar5 + 0x10) + iVar5;
  }
  else {
    iVar5 = 0;
  }
  *(int *)(param_5 + 0x24) = iVar5;
  *(unsigned int *)(param_5 + 0x20) = *(unsigned int *)(iVar5 + 0x90);
  *(unsigned int *)(param_5 + 0x28) = *(unsigned int *)(param_4 + 0x2c);
  *(unsigned int *)(param_5 + 0x2c) = 0xffffffff;
  *(float *)(param_5 + 0x48) = *(float *)(param_4 + 0x1c) * fVar1;
  lVar4 = ZEXT48(&stack0x00000000) - 0x10;
  uVar8 = storeVectorElementWordIndexed(in_vs44,0,lVar4);
  *(unsigned int *)lVar4 = uVar8;
  if (fStack_10 < -*(float *)(*(int *)(param_2 + 0x1c) + 0x84)) {
    lVar4 = ZEXT48(&stack0x00000000) - 0x10;
    vectorSubtractFloatingPoint(in_vs45,in_vs44);
    vectorSubtractFloatingPoint(in_vs45,in_vs43);{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs57,in_vs59); memcpy(auVar7, &_vt0, 16); }{ V16 _vt1 = vectorSubtractFloatingPoint(in_vs56,in_vs58); memcpy(auVar6, &_vt1, 16); }{ V16 _vt2 = vectorAddFloatingPoint(auVar7,in_vs36); memcpy(auVar7, &_vt2, 16); }{ V16 _vt3 = vectorAddFloatingPoint(auVar6,in_vs34); memcpy(auVar6, &_vt3, 16); }
    vectorSubtractFloatingPoint(auVar6,auVar7);
    uVar8 = storeVectorElementWordIndexed(in_vs50,0,lVar4);
    *(unsigned int *)lVar4 = uVar8;
    fVar1 = lbl_8200133C / fStack_10;
    *(float *)(param_5 + 0x50) = fVar1;
    *(float *)(param_5 + 0x4c) = fStack_10 * fVar1;
    return;
  }
  *(unsigned int *)(param_5 + 0x4c) = lbl_821AAD20;
  *(float *)(param_5 + 0x50) = lbl_82002AE0 / *(float *)(*(int *)(param_2 + 0x1c) + 0x84);
  return;
}

