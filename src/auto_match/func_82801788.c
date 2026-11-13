typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_82805520();
extern int fn_82A1EFC0();
extern V16 loadVectorLeftIndexed128();
extern V16 loadVectorRightIndexed128();


void fn_82801788(unsigned short *param_1,__int64 param_2,int param_3,unsigned int param_4,unsigned __int64 param_5)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned __int64 in_r0;
  __int64 lVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned int in_register_00010000;
  unsigned int in_ACC;
  unsigned int in_register_00010008;
  unsigned int in_vr0;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  
  lVar3 = ((__int64)*(int *)(param_3 + 4) * (__int64)(int)(unsigned int)*param_1 & 0x3fffffffU) * 4;
  lVar6 = lVar3 + (unsigned __int64)*(unsigned int *)(param_1 + 2);
  dataCacheBlockTouch(lVar3 + (unsigned __int64)*(unsigned int *)(param_1 + 2));
  dataCacheBlockTouch(lVar6 + 0x80);
  param_4 = param_4 & 0xffff;
  uVar5 = 0x80;
  fn_82A1EFC0(param_2,0,param_4 * 0x30);
  uVar4 = 0;
  if (param_4 != 0) {
    lVar3 = (param_5 & 0xffff) * 4;
    param_2 = param_2 + 0x20;
    do {
      if (0x7f < (uVar5 & 0xffffffff)) {
        uVar5 = uVar5 - 0x80;
        dataCacheBlockTouch(lVar6 + 0x100);
      }
      loadVectorLeftIndexed128(in_r0,lVar6);
      loadVectorRightIndexed128(0x10,lVar6);
      loadVectorLeftIndexed128(0x10,lVar6);
      loadVectorRightIndexed128(0x20,lVar6);
      loadVectorRightIndexed128(0x2c,lVar6);
      loadVectorLeftIndexed128(0x1c,lVar6);
      iVar2 = (int)param_2;
      puVar1 = (unsigned int *)(iVar2 - 0x10U & 0xfffffff0);
      *puVar1 = in_register_00010000;
      puVar1[1] = in_ACC;
      puVar1[2] = in_register_00010008;
      puVar1[3] = in_vr0;
      puVar1 = (unsigned int *)((int)in_r0 + iVar2 & 0xfffffff0);
      *puVar1 = in_register_000100d0;
      puVar1[1] = in_register_000100d4;
      puVar1[2] = in_register_000100d8;
      puVar1[3] = in_vr13;
      fn_82805520();
      uVar4 = uVar4 + 1;
      uVar5 = lVar3 + uVar5;
      lVar6 = lVar3 + lVar6;
      puVar1 = (unsigned int *)(iVar2 - 0x20U & 0xfffffff0);
      *puVar1 = in_register_00010010;
      puVar1[1] = in_register_00010014;
      puVar1[2] = in_register_00010018;
      puVar1[3] = in_vr1;
      param_2 = param_2 + 0x30;
    } while (uVar4 < param_4);
  }
  return;
}

