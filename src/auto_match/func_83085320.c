extern unsigned int *auStack_140;
extern unsigned int *auStack_150;
extern unsigned int *auStack_170;
extern unsigned int *auStack_1a8;
extern int fn_83085A80();
extern int fn_83085AB0();
extern int fn_83086A30();
extern unsigned int lbl_8323B310;
extern unsigned int uRam8323b314;
extern unsigned int uRam8323b318;
extern unsigned int uRam8323b31c;
extern unsigned int uStack_180;
extern unsigned int uStack_184;
extern unsigned int uStack_188;
extern unsigned int uStack_18c;
extern unsigned int uStack_190;
extern unsigned int uStack_194;
extern unsigned int uStack_196;
extern unsigned int uStack_198;
extern unsigned int uStack_19c;
extern unsigned int uStack_19e;
extern unsigned int uStack_1a0;
extern unsigned int uStack_1ac;
extern unsigned int uStack_1b0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_83085320(unsigned int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned int param_4,
                  unsigned int param_5,unsigned int param_6,unsigned int *param_7)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uStack_1b0;
  unsigned int uStack_1ac;
  unsigned int auStack_1a8 [2];
  unsigned short uStack_1a0;
  unsigned short uStack_19e;
  unsigned short uStack_19c;
  unsigned short uStack_198;
  unsigned short uStack_196;
  unsigned short uStack_194;
  struct { unsigned int first; unsigned int second; } stack_pair_190;

  unsigned int uStack_188;
  unsigned int uStack_184;
  unsigned int uStack_180;
  unsigned char auStack_170 [16];
  unsigned char *puStack_160;
  unsigned char auStack_150 [16];
  unsigned char auStack_140 [320];
  
  uVar5 = uRam8323b31c;
  uVar4 = uRam8323b318;
  uVar3 = uRam8323b314;
  puVar1 = (unsigned int *)((unsigned int)(auStack_150 + in_r0) & 0xfffffff0);
  *puVar1 = lbl_8323B310;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  uStack_19c = 0;
  uStack_19e = 0;
  uStack_1a0 = 0;
  uStack_194 = 0xffff;
  uStack_196 = 0xffff;
  uStack_198 = 0xffff;
  puVar1 = (unsigned int *)((int)&uStack_1a0 + in_r0 & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  stack_pair_190.second = 0;
  uStack_184 = 0;
  puVar2 = (unsigned int *)((unsigned int)(auStack_170 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  uStack_1ac = 1;
  uStack_1b0 = param_2;
  stack_pair_190.first = param_1;
  uStack_188 = param_4;
  uStack_180 = param_5;
  fn_83085A80(auStack_140);
  puStack_160 = auStack_140;
  auStack_1a8[0] = param_6;
  uVar3 = fn_83086A30(&stack_pair_190.first,&uStack_1b0,param_3,&uStack_1ac,auStack_1a8);
  *param_7 = uVar3;
  fn_83085AB0(auStack_140);
  return;
}

