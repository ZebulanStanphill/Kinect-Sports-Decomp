typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82CEBE20();
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


void fn_82DE54E0(double param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned __int64 in_r0;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int in_register_00010090;
  unsigned int in_register_00010094;
  unsigned int in_register_00010098;
  unsigned int in_vr9;
  
  uVar4 = ZEXT48(&stack0x00000000);
  *(float *)(param_4 + 0x90) = (float)param_1;
  puVar1 = (unsigned int *)(param_2 + 0x10U & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar2 = (unsigned int *)(param_4 + 0x80U & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  iVar3 = (int)in_r0;
  puVar1 = (unsigned int *)(iVar3 + param_2 + 0x20 & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar2 = (unsigned int *)(iVar3 + param_4 + 0x50 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar1 = (unsigned int *)(param_2 + 0x30U & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar2 = (unsigned int *)(param_4 + 0x60U & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar1 = (unsigned int *)(param_2 + 0x40U & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  loadVectorLeftIndexed128(in_r0,uVar4 - 0x30);
  puVar2 = (unsigned int *)(param_4 + 0x70U & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar1 = (unsigned int *)(iVar3 + (int)(uVar4 - 0x20) & 0xfffffff0);
  *puVar1 = in_register_00010090;
  puVar1[1] = in_register_00010094;
  puVar1[2] = in_register_00010098;
  puVar1[3] = in_vr9;
  fn_82CEBE20(param_4 + 0x50,uVar4 - 0x20,uVar4 - 0x20,uVar4 - 0x30);
  return;
}

