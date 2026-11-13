typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_20;
extern unsigned int fStack0000001c;
extern int fn_82CEBE20();
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


void fn_825A55D8(double param_1,int param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned __int64 in_r0;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  float fStack0000001c;
  unsigned char auStack_20 [32];
  
  *param_4 = *(unsigned int *)(param_2 + 0x10);
  param_4[1] = *(unsigned int *)(param_2 + 0x14);
  puVar1 = (unsigned int *)(param_2 + 0x20U & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(param_4 + 4) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  iVar3 = (int)in_r0;
  puVar1 = (unsigned int *)(iVar3 + param_2 + 0x30 & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (unsigned int *)(iVar3 + (int)(param_4 + 8) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  puVar1 = (unsigned int *)(param_2 + 0x40U & 0xfffffff0);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar1 = (unsigned int *)((unsigned int)(param_4 + 0xc) & 0xfffffff0);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  puVar1 = (unsigned int *)(param_2 + 0x50U & 0xfffffff0);
  uVar8 = puVar1[1];
  uVar9 = puVar1[2];
  uVar10 = puVar1[3];
  fStack0000001c = (float)param_1;
  loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) + 0x1c);
  puVar2 = (unsigned int *)((unsigned int)(param_4 + 0x10) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  param_4[1] = (float)param_1;
  puVar1 = (unsigned int *)((unsigned int)(auStack_20 + iVar3) & 0xfffffff0);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  fn_82CEBE20(param_4 + 8,ZEXT48(&stack0x00000000) - 0x20);
  return;
}

