typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_10;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorLeftIndexed128();
extern unsigned __int64 storeVectorRightIndexed128();
extern V16 vectorCompareEqualToFloatingPoint();
extern V16 vectorConditionalSelect();
extern V16 vectorConvertFromSignedFixedPoint128();
extern V16 vectorMultiplyAddFloatingPoint();
extern V16 vectorNegativeMultiplySubtractFloatingPoint();
extern V16 vectorReciprocalEstimateFloatingPoint();
extern V16 vectorSplatImmediateSignedWord128();
extern V16 vectorUnpackD3D128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82A108B0(void)

{
  unsigned int *puVar1;
  unsigned __int64 in_r0;
  unsigned char auVar2 [16];
  unsigned char in_vs33 [16];
  unsigned char in_vs35 [16];
  unsigned char in_vs36 [16];
  unsigned char in_vs37 [16];
  unsigned char auVar3 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs43 [16];
  unsigned int in_register_00010050;
  unsigned int in_register_00010054;
  unsigned int in_register_00010058;
  unsigned int in_vr5;
  unsigned char auVar4 [16];
  unsigned char auVar5 [16];
  unsigned char auStack_10 [16];{ V16 _vt0 = vectorSplatImmediateSignedWord128(0); memcpy(auVar5, &_vt0, 16); }{ V16 _vt1 = vectorReciprocalEstimateFloatingPoint(in_vs36); memcpy(auVar2, &_vt1, 16); }
  vectorUnpackD3D128(auVar5,4);
  puVar1 = (unsigned int *)((unsigned int)(auStack_10 + (int)in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010050;
  puVar1[1] = in_register_00010054;
  puVar1[2] = in_register_00010058;
  puVar1[3] = in_vr5;
  storeVectorLeftIndexed128(in_vs35,in_r0,ZEXT48(&stack0x00000000) - 0x30);
  storeVectorRightIndexed128(in_vs35,ZEXT48(&stack0x00000000) - 0x30,0x10);{ V16 _vt2 = vectorSplatImmediateSignedWord128(1); memcpy(auVar4, &_vt2, 16); }{ V16 _vt3 = vectorNegativeMultiplySubtractFloatingPoint(in_vs36,auVar2,in_vs40); memcpy(auVar3, &_vt3, 16); }{ V16 _vt4 = vectorMultiplyAddFloatingPoint(auVar2,auVar3,auVar2); memcpy(auVar5, &_vt4, 16); }
  vectorConvertFromSignedFixedPoint128(auVar4,0);
  altv300_21(auVar5,auVar3);
  altv300_23(in_vs43,in_vs37);{ V16 _vt5 = vectorNegativeMultiplySubtractFloatingPoint(in_vs36,auVar5,in_vs40); memcpy(auVar4, &_vt5, 16); }
  altv300_21(auVar5,auVar2);{ V16 _vt6 = vectorCompareEqualToFloatingPoint(auVar5,auVar5); memcpy(auVar3, &_vt6, 16); }{ V16 _vt7 = vectorMultiplyAddFloatingPoint(auVar5,auVar4,auVar5); memcpy(auVar5, &_vt7, 16); }
  vectorConditionalSelect(auVar2,auVar5,auVar3);{ V16 _vt8 = vectorReciprocalEstimateFloatingPoint(in_vs43); memcpy(auVar2, &_vt8, 16); }{ V16 _vt9 = vectorNegativeMultiplySubtractFloatingPoint(in_vs43,auVar2,in_vs41); memcpy(auVar5, &_vt9, 16); }{ V16 _vt10 = vectorMultiplyAddFloatingPoint(auVar2,auVar5,auVar2); memcpy(auVar5, &_vt10, 16); }{ V16 _vt11 = vectorNegativeMultiplySubtractFloatingPoint(in_vs43,auVar5,in_vs41); memcpy(auVar3, &_vt11, 16); }{ V16 _vt12 = vectorCompareEqualToFloatingPoint(auVar5,auVar5); memcpy(auVar4, &_vt12, 16); }{ V16 _vt13 = vectorMultiplyAddFloatingPoint(auVar5,auVar3,auVar5); memcpy(auVar5, &_vt13, 16); }
  vectorConditionalSelect(auVar2,auVar5,auVar4);
  vectorMultiplyAddFloatingPoint(in_vs33,auVar5,in_vs39);
  altv300_21(auVar5,in_vs39);
  return;
}

