typedef struct { unsigned __int64 lo, hi; } V16;
extern V16 loadVectorForShiftLeft();
extern V16 vectorShiftLeftIntegerByte();
extern V16 vectorSplatImmediateSignedByte();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82A1D9A8(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned int *puVar2;
  unsigned __int64 in_r0;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned char auVar7 [16];
  unsigned char auVar8 [16];
  unsigned int in_register_00010000;
  unsigned int in_ACC;
  unsigned int in_register_00010008;
  unsigned int in_vr0;
  
  uVar5 = (param_3 & 0xffffffff) >> 7;
  iVar4 = (int)(param_2 & 0xff);
  if (iVar4 == 0) {
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      dataCacheBlockClearToZero(param_1);
      param_1 = param_1 + 0x80;
    }
  }
  else {
    uVar6 = (unsigned __int64)(uVar5 != 0);{ V16 _vt0 = vectorSplatImmediateSignedByte(4); memcpy(auVar7, &_vt0, 16); }
    loadVectorForShiftLeft(in_r0,param_2 & 0xff);
    uVar3 = 0;{ V16 _vt1 = loadVectorForShiftLeft(in_r0,(__int64)(iVar4 >> 4)); memcpy(auVar8, &_vt1, 16); }
    vectorShiftLeftIntegerByte(auVar8,auVar7);
    if (uVar6 != 0) {
      uVar1 = 0;
      do {
        dataCacheBlockClearToZero((uVar1 & 0xffffff80) + param_1);
        uVar3 = uVar3 + 1;
        uVar1 = (uVar3 & 0xffffffff) << 7;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    uVar6 = 0;
    if (uVar5 != 0) {
      param_1 = param_1 + 0x20;
      uVar3 = uVar5;
      do {
        uVar6 = uVar6 + 1;
        if ((uVar6 & 0xffffffff) < uVar5) {
          dataCacheBlockClearToZero(param_1 + 0x60);
        }
        iVar4 = (int)param_1;
        puVar2 = (unsigned int *)((int)in_r0 + iVar4 & 0xfffffff0);
        *puVar2 = in_register_00010000;
        puVar2[1] = in_ACC;
        puVar2[2] = in_register_00010008;
        puVar2[3] = in_vr0;
        puVar2 = (unsigned int *)(iVar4 - 0x20U & 0xfffffff0);
        *puVar2 = in_register_00010000;
        puVar2[1] = in_ACC;
        puVar2[2] = in_register_00010008;
        puVar2[3] = in_vr0;
        puVar2 = (unsigned int *)(iVar4 - 0x10U & 0xfffffff0);
        *puVar2 = in_register_00010000;
        puVar2[1] = in_ACC;
        puVar2[2] = in_register_00010008;
        puVar2[3] = in_vr0;
        puVar2 = (unsigned int *)(iVar4 + 0x10U & 0xfffffff0);
        *puVar2 = in_register_00010000;
        puVar2[1] = in_ACC;
        puVar2[2] = in_register_00010008;
        puVar2[3] = in_vr0;
        puVar2 = (unsigned int *)(iVar4 + 0x20U & 0xfffffff0);
        *puVar2 = in_register_00010000;
        puVar2[1] = in_ACC;
        puVar2[2] = in_register_00010008;
        puVar2[3] = in_vr0;
        puVar2 = (unsigned int *)(iVar4 + 0x30U & 0xfffffff0);
        *puVar2 = in_register_00010000;
        puVar2[1] = in_ACC;
        puVar2[2] = in_register_00010008;
        puVar2[3] = in_vr0;
        puVar2 = (unsigned int *)(iVar4 + 0x40U & 0xfffffff0);
        *puVar2 = in_register_00010000;
        puVar2[1] = in_ACC;
        puVar2[2] = in_register_00010008;
        puVar2[3] = in_vr0;
        puVar2 = (unsigned int *)(iVar4 + 0x50U & 0xfffffff0);
        *puVar2 = in_register_00010000;
        puVar2[1] = in_ACC;
        puVar2[2] = in_register_00010008;
        puVar2[3] = in_vr0;
        param_1 = param_1 + 0x80;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return;
}

