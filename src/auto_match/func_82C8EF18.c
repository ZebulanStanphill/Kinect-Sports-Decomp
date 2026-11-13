typedef struct { unsigned __int64 lo, hi; } V16;
extern V16 vectorAddSignedByteSaturate();
extern V16 vectorShiftLeftIntegerByte();
extern V16 vectorSplatImmediateSignedByte();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82C8EF18(int param_1,int param_2,int param_3,int param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  __int64 lVar3;
  unsigned char auVar4 [16];
  unsigned char in_vs37 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int in_register_00010000;
  unsigned int in_ACC;
  unsigned int in_register_00010008;
  unsigned int in_vr0;
  unsigned int in_register_00010060;
  unsigned int in_register_00010064;
  unsigned int in_register_00010068;
  unsigned int in_vr6;
  unsigned int in_register_00010070;
  unsigned int in_register_00010074;
  unsigned int in_register_00010078;
  unsigned int in_vr7;
  unsigned int in_register_000103c0;
  unsigned int in_register_000103c4;
  unsigned int in_register_000103c8;
  unsigned int in_vr60;
  unsigned int in_register_000103d0;
  unsigned int in_register_000103d4;
  unsigned int in_register_000103d8;
  unsigned int in_vr61;
  unsigned int in_register_000103e0;
  unsigned int in_register_000103e4;
  unsigned int in_register_000103e8;
  unsigned int in_vr62;
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;{ V16 _vt0 = vectorSplatImmediateSignedByte(0xf); memcpy(auVar4, &_vt0, 16); }
  lVar3 = (__int64)(param_4 >> 4);{ V16 _vt1 = vectorShiftLeftIntegerByte(auVar4,auVar4); memcpy(auVar4, &_vt1, 16); }
  if (lVar3 < 1) {
    return;
  }
  param_1 = param_1 + 0x20;
  param_2 = param_2 - param_3;
  do {
    altv207_13(in_vs43,in_vs40);
    altv207_13(in_vs43,in_vs39);
    altv207_13(auVar4,in_vs43);
    altv207_13(in_vs43,in_vs41);
    altv207_13(in_vs42,in_vs37);
    altv207_13(auVar4,in_vs37);{ V16 _vt2 = vectorAddSignedByteSaturate(in_vs45,in_vs45); memcpy(in_vs45, &_vt2, 16); }{ V16 _vt3 = vectorAddSignedByteSaturate(in_vs44,in_vs44); memcpy(in_vs44, &_vt3, 16); }{ V16 _vt4 = vectorAddSignedByteSaturate(in_vs43,in_vs43); memcpy(in_vs43, &_vt4, 16); }{ V16 _vt5 = vectorAddSignedByteSaturate(in_vs40,in_vs40); memcpy(in_vs40, &_vt5, 16); }{ V16 _vt6 = vectorAddSignedByteSaturate(in_vs42,in_vs42); memcpy(in_vs39, &_vt6, 16); }
    vectorAddSignedByteSaturate(in_vs41,in_vs41);
    puVar1 = (unsigned int *)(param_1 - 0x20U & 0xfffffff0);
    *puVar1 = in_register_000103f0;
    puVar1[1] = in_register_000103f4;
    puVar1[2] = in_register_000103f8;
    puVar1[3] = in_vr63;
    puVar1 = (unsigned int *)(param_1 - 0x10U & 0xfffffff0);
    *puVar1 = in_register_000103e0;
    puVar1[1] = in_register_000103e4;
    puVar1[2] = in_register_000103e8;
    puVar1[3] = in_vr62;
    puVar1 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
    *puVar1 = in_register_000103d0;
    puVar1[1] = in_register_000103d4;
    puVar1[2] = in_register_000103d8;
    puVar1[3] = in_vr61;
    puVar1 = (unsigned int *)(param_1 + 0x10U & 0xfffffff0);
    *puVar1 = in_register_000103c0;
    puVar1[1] = in_register_000103c4;
    puVar1[2] = in_register_000103c8;
    puVar1[3] = in_vr60;
    param_1 = param_1 + 0x40;
    puVar2 = (unsigned int *)(param_2 + param_3 & 0xfffffff0);
    *puVar2 = in_register_00010070 ^ in_register_00010000;
    puVar2[1] = in_register_00010074 ^ in_ACC;
    puVar2[2] = in_register_00010078 ^ in_register_00010008;
    puVar2[3] = in_vr7 ^ in_vr0;
    puVar2 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
    *puVar2 = in_register_00010060 ^ in_register_00010000;
    puVar2[1] = in_register_00010064 ^ in_ACC;
    puVar2[2] = in_register_00010068 ^ in_register_00010008;
    puVar2[3] = in_vr6 ^ in_vr0;
    param_3 = param_3 + 0x10;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

