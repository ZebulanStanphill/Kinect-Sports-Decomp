typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorAddSignedHalfWordSaturate();
extern V16 vectorAverageUnsignedHalfWord();
extern V16 vectorPackSignedHalfWordUnsignedSaturate();
extern void *memcpy(void *, const void *, unsigned int);


void fn_830BA0B0(__int64 param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned __int64 in_r7;
  __int64 lVar5;
  __int64 lVar6;
  __int64 lVar7;
  __int64 lVar8;
  unsigned char in_vs33 [16];
  unsigned char auVar9 [16];
  unsigned char in_vs34 [16];
  unsigned char auVar10 [16];
  unsigned char in_vs35 [16];
  unsigned char auVar11 [16];
  unsigned char in_vs36 [16];
  unsigned char auVar12 [16];
  unsigned char in_vs37 [16];
  unsigned char auVar13 [16];
  unsigned char in_vs38 [16];
  unsigned char auVar14 [16];
  unsigned char in_vs39 [16];
  unsigned char auVar15 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned char in_vs46 [16];
  unsigned char in_vs47 [16];
  unsigned char in_vs48 [16];
  unsigned char in_vs49 [16];
  unsigned char in_vs50 [16];
  unsigned char in_vs51 [16];
  unsigned char in_vs52 [16];
  unsigned char in_vs53 [16];
  unsigned char in_vs54 [16];
  unsigned char in_vs55 [16];
  unsigned char auVar16 [16];
  unsigned char auVar17 [16];
  unsigned char auVar18 [16];
  
  lVar8 = (in_r7 & 0x7fffffff) * 2;{ V16 _vt0 = vectorAverageUnsignedHalfWord(in_vs36,in_vs46); memcpy(auVar12, &_vt0, 16); }{ V16 _vt1 = vectorAverageUnsignedHalfWord(in_vs33,in_vs43); memcpy(auVar9, &_vt1, 16); }{ V16 _vt2 = vectorAverageUnsignedHalfWord(in_vs34,in_vs44); memcpy(auVar10, &_vt2, 16); }{ V16 _vt3 = vectorAverageUnsignedHalfWord(in_vs35,in_vs45); memcpy(auVar11, &_vt3, 16); }{ V16 _vt4 = vectorAverageUnsignedHalfWord(in_vs37,in_vs47); memcpy(auVar13, &_vt4, 16); }
  lVar4 = param_1 + 4;{ V16 _vt5 = vectorAverageUnsignedHalfWord(in_vs38,in_vs48); memcpy(auVar14, &_vt5, 16); }{ V16 _vt6 = vectorAverageUnsignedHalfWord(in_vs39,in_vs49); memcpy(auVar15, &_vt6, 16); }{ V16 _vt7 = vectorAddSignedHalfWordSaturate(auVar9,in_vs48); memcpy(auVar16, &_vt7, 16); }{ V16 _vt8 = vectorAverageUnsignedHalfWord(in_vs40,in_vs50); memcpy(auVar9, &_vt8, 16); }{ V16 _vt9 = vectorAddSignedHalfWordSaturate(auVar10,in_vs49); memcpy(auVar17, &_vt9, 16); }{ V16 _vt10 = vectorAddSignedHalfWordSaturate(auVar11,in_vs50); memcpy(auVar18, &_vt10, 16); }{ V16 _vt11 = vectorPackSignedHalfWordUnsignedSaturate(auVar16,auVar16); memcpy(auVar10, &_vt11, 16); }{ V16 _vt12 = vectorAddSignedHalfWordSaturate(auVar12,in_vs51); memcpy(auVar16, &_vt12, 16); }{ V16 _vt13 = vectorPackSignedHalfWordUnsignedSaturate(auVar17,auVar17); memcpy(auVar11, &_vt13, 16); }{ V16 _vt14 = vectorAddSignedHalfWordSaturate(auVar13,in_vs52); memcpy(auVar17, &_vt14, 16); }{ V16 _vt15 = vectorPackSignedHalfWordUnsignedSaturate(auVar18,auVar18); memcpy(auVar12, &_vt15, 16); }{ V16 _vt16 = vectorPackSignedHalfWordUnsignedSaturate(auVar16,auVar16); memcpy(auVar13, &_vt16, 16); }
  lVar5 = in_r7 + lVar8;{ V16 _vt17 = vectorPackSignedHalfWordUnsignedSaturate(auVar17,auVar17); memcpy(auVar16, &_vt17, 16); }
  uVar2 = (unsigned int)param_1;
  uVar1 = storeVectorElementWordIndexed(auVar10,0,param_1);
  *(unsigned int *)(uVar2 & 0xfffffffc) = uVar1;
  lVar6 = (in_r7 & 0x3fffffff) * 4;
  uVar3 = (unsigned int)lVar4;
  uVar1 = storeVectorElementWordIndexed(auVar10,0,lVar4);
  *(unsigned int *)(uVar3 & 0xfffffffc) = uVar1;{ V16 _vt18 = vectorAddSignedHalfWordSaturate(auVar14,in_vs53); memcpy(auVar10, &_vt18, 16); }
  uVar1 = storeVectorElementWordIndexed(auVar11,param_1,in_r7);
  *(unsigned int *)(uVar2 + (int)in_r7 & 0xfffffffc) = uVar1;{ V16 _vt19 = vectorAddSignedHalfWordSaturate(auVar15,in_vs54); memcpy(auVar14, &_vt19, 16); }
  uVar1 = storeVectorElementWordIndexed(auVar11,lVar4,in_r7);
  *(unsigned int *)(uVar3 + (int)in_r7 & 0xfffffffc) = uVar1;{ V16 _vt20 = vectorAddSignedHalfWordSaturate(auVar9,in_vs55); memcpy(auVar11, &_vt20, 16); }
  uVar1 = storeVectorElementWordIndexed(auVar12,param_1,lVar8);
  *(unsigned int *)(uVar2 + (int)lVar8 & 0xfffffffc) = uVar1;
  lVar7 = in_r7 + lVar6;
  uVar1 = storeVectorElementWordIndexed(auVar12,lVar4,lVar8);
  *(unsigned int *)(uVar3 + (int)lVar8 & 0xfffffffc) = uVar1;{ V16 _vt21 = vectorPackSignedHalfWordUnsignedSaturate(auVar10,auVar10); memcpy(auVar9, &_vt21, 16); }
  uVar1 = storeVectorElementWordIndexed(auVar13,param_1,lVar5);
  *(unsigned int *)(uVar2 + (int)lVar5 & 0xfffffffc) = uVar1;{ V16 _vt22 = vectorPackSignedHalfWordUnsignedSaturate(auVar14,auVar14); memcpy(auVar10, &_vt22, 16); }
  uVar1 = storeVectorElementWordIndexed(auVar13,lVar4,lVar5);
  *(unsigned int *)(uVar3 + (int)lVar5 & 0xfffffffc) = uVar1;
  lVar8 = lVar8 + lVar6;
  uVar1 = storeVectorElementWordIndexed(auVar16,param_1,lVar6);
  *(unsigned int *)(uVar2 + (int)lVar6 & 0xfffffffc) = uVar1;{ V16 _vt23 = vectorPackSignedHalfWordUnsignedSaturate(auVar11,auVar11); memcpy(auVar11, &_vt23, 16); }
  lVar5 = lVar5 + lVar6;
  uVar1 = storeVectorElementWordIndexed(auVar16,lVar4,lVar6);
  *(unsigned int *)(uVar3 + (int)lVar6 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar9,param_1,lVar7);
  *(unsigned int *)(uVar2 + (int)lVar7 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar9,lVar4,lVar7);
  *(unsigned int *)(uVar3 + (int)lVar7 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar10,param_1,lVar8);
  *(unsigned int *)(uVar2 + (int)lVar8 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar10,lVar4,lVar8);
  *(unsigned int *)(uVar3 + (int)lVar8 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar11,param_1,lVar5);
  *(unsigned int *)(uVar2 + (int)lVar5 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar11,lVar4,lVar5);
  *(unsigned int *)(uVar3 + (int)lVar5 & 0xfffffffc) = uVar1;
  return;
}

