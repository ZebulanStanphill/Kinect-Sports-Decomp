typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorPackSignedHalfWordUnsignedSaturate();
extern void *memcpy(void *, const void *, unsigned int);


void fn_830E2088(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  __int64 lVar4;
  __int64 lVar5;
  __int64 lVar6;
  __int64 lVar7;
  __int64 lVar8;
  __int64 lVar9;
  __int64 lVar10;
  unsigned char in_vs33 [16];
  unsigned char in_vs34 [16];
  unsigned char in_vs35 [16];
  unsigned char in_vs36 [16];
  unsigned char in_vs37 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs40 [16];
  unsigned char auVar11 [16];
  unsigned char auVar12 [16];
  unsigned char auVar13 [16];
  unsigned char auVar14 [16];
  unsigned char auVar15 [16];
  unsigned char auVar16 [16];
  unsigned char auVar17 [16];{ V16 _vt0 = vectorPackSignedHalfWordUnsignedSaturate(in_vs33,in_vs33); memcpy(auVar11, &_vt0, 16); }{ V16 _vt1 = vectorPackSignedHalfWordUnsignedSaturate(in_vs34,in_vs34); memcpy(auVar12, &_vt1, 16); }{ V16 _vt2 = vectorPackSignedHalfWordUnsignedSaturate(in_vs35,in_vs35); memcpy(auVar13, &_vt2, 16); }
  lVar5 = (param_3 & 0x7fffffff) * 2;{ V16 _vt3 = vectorPackSignedHalfWordUnsignedSaturate(in_vs36,in_vs36); memcpy(auVar14, &_vt3, 16); }
  lVar4 = param_1 + 4;
  uVar2 = (unsigned int)param_1;
  uVar1 = storeVectorElementWordIndexed(auVar11,0,param_1);
  *(unsigned int *)(uVar2 & 0xfffffffc) = uVar1;
  lVar6 = param_3 + lVar5;{ V16 _vt4 = vectorPackSignedHalfWordUnsignedSaturate(in_vs37,in_vs37); memcpy(auVar15, &_vt4, 16); }
  lVar7 = (param_3 & 0x3fffffff) * 4;{ V16 _vt5 = vectorPackSignedHalfWordUnsignedSaturate(in_vs38,in_vs38); memcpy(auVar16, &_vt5, 16); }
  lVar8 = param_3 + lVar7;{ V16 _vt6 = vectorPackSignedHalfWordUnsignedSaturate(in_vs39,in_vs39); memcpy(auVar17, &_vt6, 16); }
  uVar3 = (unsigned int)lVar4;
  uVar1 = storeVectorElementWordIndexed(auVar11,0,lVar4);
  *(unsigned int *)(uVar3 & 0xfffffffc) = uVar1;
  lVar9 = lVar5 + lVar7;
  uVar1 = storeVectorElementWordIndexed(auVar12,param_1,param_3);
  *(unsigned int *)(uVar2 + (int)param_3 & 0xfffffffc) = uVar1;{ V16 _vt7 = vectorPackSignedHalfWordUnsignedSaturate(in_vs40,in_vs40); memcpy(auVar11, &_vt7, 16); }
  uVar1 = storeVectorElementWordIndexed(auVar12,lVar4,param_3);
  *(unsigned int *)(uVar3 + (int)param_3 & 0xfffffffc) = uVar1;
  lVar10 = lVar6 + lVar7;
  uVar1 = storeVectorElementWordIndexed(auVar13,param_1,lVar5);
  *(unsigned int *)(uVar2 + (int)lVar5 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar13,lVar4,lVar5);
  *(unsigned int *)(uVar3 + (int)lVar5 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar14,param_1,lVar6);
  *(unsigned int *)(uVar2 + (int)lVar6 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar14,lVar4,lVar6);
  *(unsigned int *)(uVar3 + (int)lVar6 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar15,param_1,lVar7);
  *(unsigned int *)(uVar2 + (int)lVar7 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar15,lVar4,lVar7);
  *(unsigned int *)(uVar3 + (int)lVar7 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar16,param_1,lVar8);
  *(unsigned int *)(uVar2 + (int)lVar8 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar16,lVar4,lVar8);
  *(unsigned int *)(uVar3 + (int)lVar8 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar17,param_1,lVar9);
  *(unsigned int *)(uVar2 + (int)lVar9 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar17,lVar4,lVar9);
  *(unsigned int *)(uVar3 + (int)lVar9 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar11,param_1,lVar10);
  *(unsigned int *)(uVar2 + (int)lVar10 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar11,lVar4,lVar10);
  *(unsigned int *)(uVar3 + (int)lVar10 & 0xfffffffc) = uVar1;
  return;
}

