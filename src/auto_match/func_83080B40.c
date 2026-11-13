typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern int fn_82CE50D8();
extern V16 vectorAddFloatingPoint();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern V16 vectorSubtractFloatingPoint();


void fn_83080B40(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int in_register_00010060;
  unsigned int in_register_00010064;
  unsigned int in_register_00010068;
  unsigned int in_vr6;
  unsigned int in_register_00010080;
  unsigned int in_register_00010084;
  unsigned int in_register_00010088;
  unsigned int in_vr8;
  unsigned char in_vr11 [16];
  unsigned int in_register_000100c0;
  unsigned int in_register_000100c4;
  unsigned int in_register_000100c8;
  unsigned int in_vr12;
  unsigned char auStack_30 [16];
  unsigned char auStack_20 [16];
  
  puVar1 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  vectorSubtractFloatingPoint(in_vs32,in_vs45);
  puVar2 = (unsigned int *)(in_r0 + param_2 + 0x80 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  puVar1 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000100c0;
  puVar1[1] = in_register_000100c4;
  puVar1[2] = in_register_000100c8;
  puVar1[3] = in_vr12;
  fn_82CE50D8(auStack_20,param_2,auStack_30);
  vectorRotateLeftImmediateMaskInsert128
            (*(unsigned char (*) [16])((unsigned int)(auStack_20 + in_r0) & 0xfffffff0),in_vr11,1,0);
  vectorAddFloatingPoint(in_vs41,in_vs42);
  puVar1 = (unsigned int *)(in_r0 + param_2 + 0x40 & 0xfffffff0);
  *puVar1 = in_register_00010080;
  puVar1[1] = in_register_00010084;
  puVar1[2] = in_register_00010088;
  puVar1[3] = in_vr8;
  vectorAddFloatingPoint(in_vs39,in_vs42);
  puVar1 = (unsigned int *)(in_r0 + param_2 + 0x50 & 0xfffffff0);
  *puVar1 = in_register_00010060;
  puVar1[1] = in_register_00010064;
  puVar1[2] = in_register_00010068;
  puVar1[3] = in_vr6;
  return;
}

