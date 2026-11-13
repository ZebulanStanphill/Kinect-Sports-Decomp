extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_830A6170();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_82D9D658(void)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  int in_r7;
  unsigned __int64 in_r8;
  unsigned __int64 in_r9;
  double dVar3;
  double dVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int in_register_000100c0;
  unsigned int in_register_000100c4;
  unsigned int in_register_000100c8;
  unsigned int in_vr12;
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [16];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  
  puVar1 = (unsigned int *)(in_r0 + in_r7 & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar1 = (unsigned int *)((int)&fStack_40 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_000100c0;
  puVar1[1] = in_register_000100c4;
  puVar1[2] = in_register_000100c8;
  puVar1[3] = in_vr12;
  dVar4 = (double)lbl_82002AE0;
  puVar1 = (unsigned int *)(in_r7 + 0x10U & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  fStack_40 = lbl_82002AE0;
  puVar2 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  fn_830A6170(auStack_60,in_r8,in_r9);
  fStack_3c = (float)dVar4;
  dVar3 = (double)lbl_821AAD20;
  fStack_40 = lbl_821AAD20;
  fn_830A6170(auStack_60,in_r8,in_r9);
  fStack_3c = (float)dVar3;
  fStack_38 = (float)dVar4;
  fn_830A6170(auStack_60,in_r8,in_r9);
  *(int *)(in_r7 + 0xb8) = *(int *)(in_r7 + 0xb8) + 3;
  return;
}

