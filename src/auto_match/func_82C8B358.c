typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorAddSignedHalfWordSaturate();
extern V16 vectorPackSignedHalfWordUnsignedSaturate();
extern V16 vectorShiftLeftIntegerByte();
extern V16 vectorSplatImmediateSignedHalfWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82C8B358(unsigned __int64 param_1,__int64 param_2,__int64 param_3,unsigned __int64 param_4,
                  __int64 param_5)

{
  unsigned int uVar1;
  __int64 lVar2;
  __int64 lVar3;
  __int64 lVar4;
  __int64 lVar5;
  __int64 lVar6;
  __int64 lVar7;
  unsigned char in_vs32 [16];
  unsigned char in_vs33 [16];
  unsigned char in_vs34 [16];
  unsigned char in_vs35 [16];
  unsigned char in_vs36 [16];
  unsigned char in_vs37 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs39 [16];
  unsigned char auVar8 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned char in_vs46 [16];
  unsigned char auVar9 [16];
  unsigned char auVar10 [16];
  unsigned char auVar11 [16];
  unsigned char auVar12 [16];
  unsigned char auVar13 [16];
  unsigned char auVar14 [16];
  unsigned char auVar15 [16];
  unsigned char auVar16 [16];
  unsigned char auVar17 [16];
  unsigned char auVar18 [16];
  unsigned char auVar19 [16];
  unsigned char auVar20 [16];
  unsigned char auVar21 [16];{ V16 _vt0 = vectorSplatImmediateSignedHalfWord(0xf); memcpy(auVar9, &_vt0, 16); }{ V16 _vt1 = vectorShiftLeftIntegerByte(auVar9,auVar9); memcpy(auVar8, &_vt1, 16); }{ V16 _vt2 = vectorAddSignedHalfWordSaturate(in_vs32,auVar8); memcpy(auVar10, &_vt2, 16); }{ V16 _vt3 = vectorAddSignedHalfWordSaturate(in_vs33,auVar8); memcpy(auVar11, &_vt3, 16); }{ V16 _vt4 = vectorAddSignedHalfWordSaturate(in_vs34,auVar8); memcpy(auVar12, &_vt4, 16); }{ V16 _vt5 = vectorPackSignedHalfWordUnsignedSaturate(auVar10,auVar10); memcpy(auVar10, &_vt5, 16); }{ V16 _vt6 = vectorAddSignedHalfWordSaturate(in_vs35,auVar8); memcpy(auVar13, &_vt6, 16); }{ V16 _vt7 = vectorPackSignedHalfWordUnsignedSaturate(auVar11,auVar11); memcpy(auVar11, &_vt7, 16); }{ V16 _vt8 = vectorAddSignedHalfWordSaturate(in_vs36,auVar8); memcpy(auVar14, &_vt8, 16); }{ V16 _vt9 = vectorPackSignedHalfWordUnsignedSaturate(auVar12,auVar12); memcpy(auVar12, &_vt9, 16); }{ V16 _vt10 = vectorAddSignedHalfWordSaturate(in_vs37,auVar8); memcpy(auVar15, &_vt10, 16); }
  lVar3 = param_5 + param_2;{ V16 _vt11 = vectorAddSignedHalfWordSaturate(in_vs38,auVar8); memcpy(auVar16, &_vt11, 16); }{ V16 _vt12 = vectorPackSignedHalfWordUnsignedSaturate(auVar13,auVar13); memcpy(auVar13, &_vt12, 16); }{ V16 _vt13 = vectorAddSignedHalfWordSaturate(in_vs39,auVar8); memcpy(auVar17, &_vt13, 16); }
  lVar4 = param_5 + param_3;{ V16 _vt14 = vectorPackSignedHalfWordUnsignedSaturate(auVar14,auVar14); memcpy(auVar14, &_vt14, 16); }
  uVar1 = storeVectorElementWordIndexed(auVar10,0,param_2);
  *(unsigned int *)((unsigned int)param_2 & 0xfffffffc) = uVar1;
  lVar5 = param_5 + lVar3;
  uVar1 = storeVectorElementWordIndexed(auVar10,param_2,4);
  *(unsigned int *)((unsigned int)param_2 + 4 & 0xfffffffc) = uVar1;{ V16 _vt15 = vectorPackSignedHalfWordUnsignedSaturate(auVar15,auVar15); memcpy(auVar10, &_vt15, 16); }
  uVar1 = storeVectorElementWordIndexed(auVar11,0,param_3);
  *(unsigned int *)((unsigned int)param_3 & 0xfffffffc) = uVar1;
  lVar6 = param_5 + lVar4;
  uVar1 = storeVectorElementWordIndexed(auVar11,param_3,4);
  *(unsigned int *)((unsigned int)param_3 + 4 & 0xfffffffc) = uVar1;{ V16 _vt16 = vectorPackSignedHalfWordUnsignedSaturate(auVar16,auVar16); memcpy(auVar11, &_vt16, 16); }
  uVar1 = storeVectorElementWordIndexed(auVar12,0,lVar3);
  *(unsigned int *)((unsigned int)lVar3 & 0xfffffffc) = uVar1;
  lVar2 = param_5 + lVar5;
  uVar1 = storeVectorElementWordIndexed(auVar12,lVar3,4);
  *(unsigned int *)((unsigned int)lVar3 + 4 & 0xfffffffc) = uVar1;{ V16 _vt17 = vectorAddSignedHalfWordSaturate(auVar8,auVar8); memcpy(auVar12, &_vt17, 16); }
  uVar1 = storeVectorElementWordIndexed(auVar13,0,lVar4);
  *(unsigned int *)((unsigned int)lVar4 & 0xfffffffc) = uVar1;{ V16 _vt18 = vectorAddSignedHalfWordSaturate(in_vs41,auVar8); memcpy(auVar15, &_vt18, 16); }
  uVar1 = storeVectorElementWordIndexed(auVar13,lVar4,4);
  *(unsigned int *)((unsigned int)lVar4 + 4 & 0xfffffffc) = uVar1;{ V16 _vt19 = vectorAddSignedHalfWordSaturate(in_vs42,auVar8); memcpy(auVar13, &_vt19, 16); }
  uVar1 = storeVectorElementWordIndexed(auVar14,0,lVar5);
  *(unsigned int *)((unsigned int)lVar5 & 0xfffffffc) = uVar1;{ V16 _vt20 = vectorAddSignedHalfWordSaturate(in_vs43,auVar8); memcpy(auVar16, &_vt20, 16); }{ V16 _vt21 = vectorAddSignedHalfWordSaturate(in_vs44,auVar8); memcpy(auVar18, &_vt21, 16); }
  uVar1 = storeVectorElementWordIndexed(auVar14,lVar5,4);
  *(unsigned int *)((unsigned int)lVar5 + 4 & 0xfffffffc) = uVar1;{ V16 _vt22 = vectorAddSignedHalfWordSaturate(in_vs45,auVar8); memcpy(auVar19, &_vt22, 16); }
  uVar1 = storeVectorElementWordIndexed(auVar10,0,lVar6);
  *(unsigned int *)((unsigned int)lVar6 & 0xfffffffc) = uVar1;{ V16 _vt23 = vectorAddSignedHalfWordSaturate(in_vs46,auVar8); memcpy(auVar20, &_vt23, 16); }
  uVar1 = storeVectorElementWordIndexed(auVar10,lVar6,4);
  *(unsigned int *)((unsigned int)lVar6 + 4 & 0xfffffffc) = uVar1;{ V16 _vt24 = vectorAddSignedHalfWordSaturate(auVar9,auVar8); memcpy(auVar21, &_vt24, 16); }
  uVar1 = storeVectorElementWordIndexed(auVar11,0,lVar2);
  *(unsigned int *)((unsigned int)lVar2 & 0xfffffffc) = uVar1;{ V16 _vt25 = vectorPackSignedHalfWordUnsignedSaturate(auVar17,auVar17); memcpy(auVar10, &_vt25, 16); }
  lVar6 = param_5 + lVar6;{ V16 _vt26 = vectorPackSignedHalfWordUnsignedSaturate(auVar12,auVar12); memcpy(auVar12, &_vt26, 16); }
  uVar1 = storeVectorElementWordIndexed(auVar11,lVar2,4);
  *(unsigned int *)((unsigned int)lVar2 + 4 & 0xfffffffc) = uVar1;{ V16 _vt27 = vectorPackSignedHalfWordUnsignedSaturate(auVar15,auVar15); memcpy(auVar11, &_vt27, 16); }{ V16 _vt28 = vectorPackSignedHalfWordUnsignedSaturate(auVar13,auVar13); memcpy(auVar13, &_vt28, 16); }{ V16 _vt29 = vectorPackSignedHalfWordUnsignedSaturate(auVar16,auVar16); memcpy(auVar14, &_vt29, 16); }{ V16 _vt30 = vectorPackSignedHalfWordUnsignedSaturate(auVar18,auVar18); memcpy(auVar8, &_vt30, 16); }{ V16 _vt31 = vectorPackSignedHalfWordUnsignedSaturate(auVar19,auVar19); memcpy(auVar9, &_vt31, 16); }{ V16 _vt32 = vectorPackSignedHalfWordUnsignedSaturate(auVar20,auVar20); memcpy(auVar15, &_vt32, 16); }{ V16 _vt33 = vectorPackSignedHalfWordUnsignedSaturate(auVar21,auVar21); memcpy(auVar16, &_vt33, 16); }
  lVar2 = param_5 + lVar2;
  uVar1 = storeVectorElementWordIndexed(auVar10,0,lVar6);
  *(unsigned int *)((unsigned int)lVar6 & 0xfffffffc) = uVar1;
  lVar4 = param_5 + lVar6;
  uVar1 = storeVectorElementWordIndexed(auVar10,lVar6,4);
  *(unsigned int *)((unsigned int)lVar6 + 4 & 0xfffffffc) = uVar1;
  lVar5 = param_5 + lVar2;
  lVar7 = param_5 + lVar4;
  lVar6 = param_5 + lVar5;
  uVar1 = storeVectorElementWordIndexed(auVar12,0,lVar2);
  *(unsigned int *)((unsigned int)lVar2 & 0xfffffffc) = uVar1;
  lVar3 = param_5 + lVar7;
  uVar1 = storeVectorElementWordIndexed(auVar12,lVar2,4);
  *(unsigned int *)((unsigned int)lVar2 + 4 & 0xfffffffc) = uVar1;
  lVar2 = param_5 + lVar6;
  uVar1 = storeVectorElementWordIndexed(auVar11,0,lVar4);
  *(unsigned int *)((unsigned int)lVar4 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar11,lVar4,4);
  *(unsigned int *)((unsigned int)lVar4 + 4 & 0xfffffffc) = uVar1;
  param_5 = param_5 + lVar3;
  uVar1 = storeVectorElementWordIndexed(auVar13,0,lVar5);
  *(unsigned int *)((unsigned int)lVar5 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar13,lVar5,4);
  *(unsigned int *)((unsigned int)lVar5 + 4 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar14,0,lVar7);
  *(unsigned int *)((unsigned int)lVar7 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar14,lVar7,4);
  *(unsigned int *)((unsigned int)lVar7 + 4 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar8,0,lVar6);
  *(unsigned int *)((unsigned int)lVar6 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar8,lVar6,4);
  *(unsigned int *)((unsigned int)lVar6 + 4 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar9,0,lVar3);
  *(unsigned int *)((unsigned int)lVar3 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar9,lVar3,4);
  *(unsigned int *)((unsigned int)lVar3 + 4 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar15,0,lVar2);
  *(unsigned int *)((unsigned int)lVar2 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar15,lVar2,4);
  *(unsigned int *)((unsigned int)lVar2 + 4 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar16,0,param_5);
  *(unsigned int *)((unsigned int)param_5 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar16,param_5,4);
  *(unsigned int *)((unsigned int)param_5 + 4 & 0xfffffffc) = uVar1;
  return;
}

