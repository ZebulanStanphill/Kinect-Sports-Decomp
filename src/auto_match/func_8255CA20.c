typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_8c;
extern unsigned int *auStack_90;
extern int fn_8258B2F0();
extern int fn_8258B3F8();
extern int fn_8258B720();
extern int fn_825BC348();
extern int fn_826299A8();
extern unsigned int uStack_78;
extern V16 vectorAddFloatingPoint();
extern V16 vectorSubtractFloatingPoint();


void fn_8255CA20(int param_1,unsigned short *param_2,unsigned int param_3)

{
  float fVar1;
  unsigned short uVar2;
  unsigned int *puVar3;
  int in_r0;
  int iVar4;
  unsigned int *puVar5;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int in_register_000100c0;
  unsigned int in_register_000100c4;
  unsigned int in_register_000100c8;
  unsigned int in_vr12;
  unsigned char auStack_90 [4];
  unsigned char auStack_8c [12];
  unsigned short *puStack_80;
  int (**pcStack_7c)();
  unsigned int uStack_78;
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [96];
  
  puVar5 = (unsigned int *)(param_1 + 0x6d4);
  iVar4 = fn_825BC348(puVar5);
  uVar2 = *param_2;
  if (uVar2 == 0) {
    fVar1 = *(float *)(param_2 + 0x1c);
  }
  else {
    if (uVar2 == 1) {
      puStack_80 = *(unsigned short **)(param_2 + 0x18);
      pcStack_7c = *(int (***)())(param_2 + 0x1a);
      uStack_78 = *(unsigned int *)(param_2 + 0x1c);
      puVar3 = (unsigned int *)((int)&puStack_80 + in_r0 & 0xfffffff0);
      uVar6 = *puVar3;
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      vectorSubtractFloatingPoint(in_vs45,in_vs32);
      vectorAddFloatingPoint(in_vs45,in_vs32);
      puVar3 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
      *puVar3 = in_register_000100c0;
      puVar3[1] = in_register_000100c4;
      puVar3[2] = in_register_000100c8;
      puVar3[3] = in_vr12;
      puVar3 = (unsigned int *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
      *puVar3 = uVar6;
      puVar3[1] = uVar7;
      puVar3[2] = uVar8;
      puVar3[3] = uVar9;
      fn_8258B3F8(param_1 + 0x6dc,auStack_60,auStack_70,auStack_8c,auStack_90);
      fn_8258B720(*puVar5,param_1 + 0x6dc,auStack_60,auStack_70,auStack_8c,auStack_90,
                        0xffffffff826299a8,iVar4);
      goto LAB_8255cb38;
    }
    if (2 < uVar2) goto LAB_8255cb38;
    fVar1 = *(float *)(param_2 + 0x26);
    pcStack_7c = fn_826299A8;
    puStack_80 = param_2;
    uStack_78 = param_3;
  }
  fn_8258B2F0((double)fVar1,puVar5,param_2 + 0x10);
LAB_8255cb38:
  *(unsigned char *)(iVar4 + param_1 + 0x754) = 0;
  return;
}

