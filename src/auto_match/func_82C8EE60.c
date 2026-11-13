typedef struct { unsigned __int64 lo, hi; } V16;
extern V16 vectorShiftLeftIntegerByte();
extern V16 vectorShiftRightAlgebraicByte();
extern V16 vectorSplatImmediateSignedByte();
extern V16 vectorSubtractUnsignedByteModulo();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82C8EE60(int param_1,int param_2,int param_3,int param_4)

{
  unsigned int *puVar1;
  int in_r0;
  __int64 lVar2;
  unsigned char auVar3 [16];
  unsigned char auVar4 [16];
  unsigned char auVar5 [16];
  unsigned char in_vs35 [16];
  unsigned char auVar6 [16];
  unsigned char in_vs37 [16];
  unsigned char auVar7 [16];
  unsigned char in_vs39 [16];
  unsigned char auVar8 [16];
  unsigned char in_vs41 [16];
  unsigned char auVar9 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char auVar10 [16];
  unsigned int in_register_00010140;
  unsigned int in_register_00010144;
  unsigned int in_register_00010148;
  unsigned int in_vr20;
  unsigned int in_register_00010150;
  unsigned int in_register_00010154;
  unsigned int in_register_00010158;
  unsigned int in_vr21;
  unsigned int in_register_00010160;
  unsigned int in_register_00010164;
  unsigned int in_register_00010168;
  unsigned int in_vr22;
  unsigned int in_register_00010170;
  unsigned int in_register_00010174;
  unsigned int in_register_00010178;
  unsigned int in_vr23;
  unsigned int in_register_00010180;
  unsigned int in_register_00010184;
  unsigned int in_register_00010188;
  unsigned int in_vr24;
  unsigned int in_register_00010190;
  unsigned int in_register_00010194;
  unsigned int in_register_00010198;
  unsigned int in_vr25;{ V16 _vt0 = vectorSplatImmediateSignedByte(0xf); memcpy(auVar3, &_vt0, 16); }
  lVar2 = (__int64)(param_4 >> 4);{ V16 _vt1 = vectorSplatImmediateSignedByte(1); memcpy(auVar10, &_vt1, 16); }{ V16 _vt2 = vectorShiftLeftIntegerByte(auVar3,auVar3); memcpy(auVar3, &_vt2, 16); }
  if (lVar2 < 1) {
    return;
  }
  param_1 = param_1 + 0x20;
  param_2 = param_2 - param_3;
  do {{ V16 _vt3 = vectorSubtractUnsignedByteModulo(in_vs44,auVar3); memcpy(auVar9, &_vt3, 16); }{ V16 _vt4 = vectorSubtractUnsignedByteModulo(in_vs43,auVar3); memcpy(auVar8, &_vt4, 16); }{ V16 _vt5 = vectorSubtractUnsignedByteModulo(in_vs41,auVar3); memcpy(auVar7, &_vt5, 16); }{ V16 _vt6 = vectorSubtractUnsignedByteModulo(in_vs39,auVar3); memcpy(auVar6, &_vt6, 16); }{ V16 _vt7 = vectorSubtractUnsignedByteModulo(in_vs37,auVar3); memcpy(auVar5, &_vt7, 16); }{ V16 _vt8 = vectorSubtractUnsignedByteModulo(in_vs35,auVar3); memcpy(auVar4, &_vt8, 16); }
    vectorShiftRightAlgebraicByte(auVar9,auVar10);
    vectorShiftRightAlgebraicByte(auVar8,auVar10);
    vectorShiftRightAlgebraicByte(auVar7,auVar10);
    vectorShiftRightAlgebraicByte(auVar6,auVar10);
    vectorShiftRightAlgebraicByte(auVar5,auVar10);
    vectorShiftRightAlgebraicByte(auVar4,auVar10);
    puVar1 = (unsigned int *)(param_1 - 0x20U & 0xfffffff0);
    *puVar1 = in_register_00010190;
    puVar1[1] = in_register_00010194;
    puVar1[2] = in_register_00010198;
    puVar1[3] = in_vr25;
    puVar1 = (unsigned int *)(param_1 - 0x10U & 0xfffffff0);
    *puVar1 = in_register_00010180;
    puVar1[1] = in_register_00010184;
    puVar1[2] = in_register_00010188;
    puVar1[3] = in_vr24;
    puVar1 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
    *puVar1 = in_register_00010170;
    puVar1[1] = in_register_00010174;
    puVar1[2] = in_register_00010178;
    puVar1[3] = in_vr23;
    puVar1 = (unsigned int *)(param_1 + 0x10U & 0xfffffff0);
    *puVar1 = in_register_00010160;
    puVar1[1] = in_register_00010164;
    puVar1[2] = in_register_00010168;
    puVar1[3] = in_vr22;
    param_1 = param_1 + 0x40;
    puVar1 = (unsigned int *)(param_2 + param_3 & 0xfffffff0);
    *puVar1 = in_register_00010150;
    puVar1[1] = in_register_00010154;
    puVar1[2] = in_register_00010158;
    puVar1[3] = in_vr21;
    puVar1 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
    *puVar1 = in_register_00010140;
    puVar1[1] = in_register_00010144;
    puVar1[2] = in_register_00010148;
    puVar1[3] = in_vr20;
    param_3 = param_3 + 0x10;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

