typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_8255A1C8();
extern int fn_82A1DD38();
extern unsigned int lbl_83297910;
extern unsigned int lbl_83297920;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorSubtractFloatingPoint();


void fn_825DE758(int param_1,int param_2,int param_3,int param_4,int param_5,unsigned __int64 param_6)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int *puVar4;
  float *pfVar5;
  unsigned __int64 in_r0;
  unsigned int uVar6;
  unsigned char in_vs32 [16];
  unsigned char in_vs33 [16];
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  float in_register_000104d0;
  float in_register_000104d4;
  float in_register_000104d8;
  float in_vr77;
  
  iVar3 = (int)in_r0;
  puVar2 = (unsigned int *)(iVar3 + param_3 & 0xfffffff0);
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  uVar1 = *(unsigned int *)(param_1 + 0x310);
  puVar4 = (unsigned int *)(param_1 + 0x3f0U & 0xfffffff0);
  *puVar4 = *puVar2;
  puVar4[1] = uVar7;
  puVar4[2] = uVar8;
  puVar4[3] = uVar9;
  puVar2 = (unsigned int *)(iVar3 + param_4 & 0xfffffff0);
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar4 = (unsigned int *)(param_1 + 0x420U & 0xfffffff0);
  *puVar4 = *puVar2;
  puVar4[1] = uVar7;
  puVar4[2] = uVar8;
  puVar4[3] = uVar9;
  puVar2 = (unsigned int *)(iVar3 + param_5 & 0xfffffff0);
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar4 = (unsigned int *)(param_1 + 0x410U & 0xfffffff0);
  *puVar4 = *puVar2;
  puVar4[1] = uVar7;
  puVar4[2] = uVar8;
  puVar4[3] = uVar9;
  if ((uVar1 & 0x100) == 0) {
    uVar6 = (unsigned int)LZCOUNT(*(int *)(param_1 + 0x220) + -2) >> 5;
  }
  else {
    uVar6 = 1;
  }
  if (((*(int *)(param_2 + 0xf28) == 0) && (*(int *)(param_2 + 0xf20) == 0)) &&
     (*(unsigned int *)(param_2 + 0xf2c) == uVar6)) {
    if ((((uVar1 & 0x100) == 0) && (*(int *)(param_1 + 0x220) != 2)) ||
       (*(int *)(param_1 + 0x1ac) == 0)) {
      fn_8255A1C8((double)*(float *)(param_2 + 0x70),(double)*(float *)(param_2 + 0x74),
                        (double)*(float *)(param_2 + 0x78));
      pfVar5 = (float *)((int)in_r0 + param_3 & 0xfffffff0);
      vectorSubtractFloatingPoint(in_vs32,in_vs33);
      loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x40);
      in_register_000104d0 = *pfVar5 * in_register_000100d0;
      in_register_000104d4 = pfVar5[1] * in_register_000100d4;
      in_register_000104d8 = pfVar5[2] * in_register_000100d8;
      in_vr77 = pfVar5[3] * in_vr13;
    }
    else {
      pfVar5 = (float *)(*(int *)(param_1 + 0x1ac) + 0xd0U & 0xfffffff0);
      in_register_000104d0 = *pfVar5;
      in_register_000104d4 = pfVar5[1];
      in_register_000104d8 = pfVar5[2];
      in_vr77 = pfVar5[3];
    }
  }
  else if ((lbl_83297920 & 1) == 0) {
    lbl_83297920 = lbl_83297920 | 1;
    pfVar5 = (float *)((int)&lbl_83297910 + iVar3 & 0xfffffff0);
    *pfVar5 = in_register_000104d0;
    pfVar5[1] = in_register_000104d4;
    pfVar5[2] = in_register_000104d8;
    pfVar5[3] = in_vr77;
  }
  else {
    pfVar5 = (float *)((int)&lbl_83297910 + iVar3 & 0xfffffff0);
    in_register_000104d0 = *pfVar5;
    in_register_000104d4 = pfVar5[1];
    in_register_000104d8 = pfVar5[2];
    in_vr77 = pfVar5[3];
  }
  pfVar5 = (float *)(param_1 + 0x400U & 0xfffffff0);
  *pfVar5 = in_register_000104d0;
  pfVar5[1] = in_register_000104d4;
  pfVar5[2] = in_register_000104d8;
  pfVar5[3] = in_vr77;
  fn_82A1DD38(param_2 + 0x40,param_6,0x50);
  return;
}

