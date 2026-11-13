typedef struct { unsigned __int64 lo, hi; } V16;
extern V16 loadVectorLeftIndexed128();
extern V16 loadVectorRightIndexed128();


void fn_826310E0(unsigned __int64 *param_1,int param_2,__int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  unsigned __int64 in_r0;
  __int64 lVar3;
  unsigned __int64 *puVar4;
  unsigned int in_register_00010000;
  unsigned int in_ACC;
  unsigned int in_register_00010008;
  unsigned int in_vr0;
  unsigned int in_register_000100b0;
  unsigned int in_register_000100b4;
  unsigned int in_register_000100b8;
  unsigned int in_vr11;
  unsigned int in_register_000100c0;
  unsigned int in_register_000100c4;
  unsigned int in_register_000100c8;
  unsigned int in_vr12;
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  
  puVar4 = param_1 + (param_2 + 0x78) * 2;
  dataCacheBlockTouch(param_3);
  dataCacheBlockTouch(param_3 + 0x80);
  if (3 < (param_4 & 0xffffffff)) {
    lVar3 = ((param_4 - 4 & 0xffffffff) >> 2) + 1;
    do {
      dataCacheBlockTouch(param_3 + 0x100);
      loadVectorRightIndexed128(0x10,param_3);
      loadVectorLeftIndexed128(in_r0,param_3);
      param_4 = param_4 - 4;
      loadVectorLeftIndexed128(0x10,param_3);
      loadVectorRightIndexed128(0x20,param_3);
      loadVectorLeftIndexed128(0x20,param_3);
      loadVectorRightIndexed128(0x30,param_3);
      loadVectorLeftIndexed128(0x30,param_3);
      loadVectorRightIndexed128(0x40,param_3);
      param_3 = param_3 + 0x40;
      puVar1 = (unsigned int *)((int)in_r0 + (int)puVar4 & 0xfffffff0);
      *puVar1 = in_register_00010000;
      puVar1[1] = in_ACC;
      puVar1[2] = in_register_00010008;
      puVar1[3] = in_vr0;
      puVar1 = (unsigned int *)((unsigned int)(puVar4 + 2) & 0xfffffff0);
      *puVar1 = in_register_000100d0;
      puVar1[1] = in_register_000100d4;
      puVar1[2] = in_register_000100d8;
      puVar1[3] = in_vr13;
      puVar1 = (unsigned int *)((unsigned int)(puVar4 + 4) & 0xfffffff0);
      *puVar1 = in_register_000100c0;
      puVar1[1] = in_register_000100c4;
      puVar1[2] = in_register_000100c8;
      puVar1[3] = in_vr12;
      puVar1 = (unsigned int *)((unsigned int)(puVar4 + 6) & 0xfffffff0);
      *puVar1 = in_register_000100b0;
      puVar1[1] = in_register_000100b4;
      puVar1[2] = in_register_000100b8;
      puVar1[3] = in_vr11;
      puVar4 = puVar4 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  uVar2 = param_4 & 0xffffffff;
  while (uVar2 != 0) {
    loadVectorLeftIndexed128(in_r0,param_3);
    loadVectorRightIndexed128(0x10,param_3);
    param_3 = param_3 + 0x10;
    puVar1 = (unsigned int *)((int)in_r0 + (int)puVar4 & 0xfffffff0);
    *puVar1 = in_register_00010000;
    puVar1[1] = in_ACC;
    puVar1[2] = in_register_00010008;
    puVar1[3] = in_vr0;
    puVar4 = puVar4 + 2;
    param_4 = param_4 - 1;
    uVar2 = param_4;
  }
  *param_1 = *param_1 | param_5;
  return;
}

