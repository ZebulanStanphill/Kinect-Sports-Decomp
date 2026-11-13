typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_822B6A58();
extern int fn_822CEEC8();
extern int fn_8253A918();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_831D4254;
extern unsigned int lbl_831D4258;
extern unsigned int lbl_831D425C;
extern unsigned int lbl_831D4260;
extern unsigned int stack0x00000020;
extern unsigned int uStack_34;
extern V16 vectorAddFloatingPoint();


void fn_824D6E28(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar3;
  unsigned char in_vs32 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  unsigned int uStack_34;
  unsigned char auStack_30 [16];
  unsigned char auStack_20 [16];
  
  fn_822B6A58(auStack_30,*(unsigned int *)(param_1 + 0x164),4);
  iVar3 = fn_822CEEC8(*(unsigned int *)(param_1 + 0x164));
  fStack_38 = lbl_831D425C;
  fStack_48 = lbl_831D4260;
  if (iVar3 != 0) {
    fStack_38 = lbl_831D4260;
    fStack_48 = lbl_831D425C;
  }
  fStack_38 = -fStack_38;
  fStack_50 = lbl_831D4258 * lbl_8218E8E8;
  fStack_4c = lbl_831D4254 * lbl_8218E8E8;
  puVar1 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  fStack_40 = -fStack_50;
  fStack_3c = -fStack_4c;
  uStack_34 = 0;
  puVar2 = (unsigned int *)((int)&fStack_50 + in_r0 & 0xfffffff0);
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  vectorAddFloatingPoint(in_vs32,in_vs45);
  vectorAddFloatingPoint(in_vs32,in_vs44);
  puVar2 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  puVar1 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  fn_8253A918(&stack0x00000020,auStack_20,auStack_30);
  return;
}

