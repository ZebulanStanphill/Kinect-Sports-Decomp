extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_c8;
extern unsigned int *auStack_d0;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82279C58();
extern int fn_82672C20();
extern unsigned int iStack_28;
extern unsigned int iStack_38;
extern unsigned int iStack_48;
extern unsigned int iStack_58;
extern unsigned int iStack_68;
extern unsigned int iStack_78;
extern unsigned int iStack_88;
extern unsigned int iStack_98;
extern unsigned int iStack_a8;
extern unsigned int iStack_b4;
extern unsigned int iStack_bc;
extern unsigned int iStack_c4;
extern unsigned int iStack_cc;
extern unsigned int iStack_d8;
extern unsigned int uStack_6c;
extern unsigned int uStack_9c;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;


void fn_8227C308(unsigned __int64 param_1)

{
  int iVar1;
  unsigned int *puVar2;
  int *piVar3;
  unsigned char *puVar4;
  __int64 lVar5;
  struct { unsigned int first; unsigned int second; } stack_pair_e0;

  int iStack_d8;
  unsigned char auStack_d0 [4];
  int iStack_cc;
  unsigned char auStack_c8 [4];
  int iStack_c4;
  unsigned char auStack_c0 [4];
  int iStack_bc;
  unsigned char auStack_b8 [4];
  int iStack_b4;
  unsigned char auStack_b0 [8];
  int iStack_a8;
  unsigned char auStack_a0 [4];
  unsigned int uStack_9c;
  int iStack_98;
  unsigned char auStack_90 [8];
  int iStack_88;
  unsigned char auStack_80 [8];
  int iStack_78;
  unsigned char auStack_70 [4];
  unsigned int uStack_6c;
  int iStack_68;
  unsigned char auStack_60 [8];
  int iStack_58;
  unsigned char auStack_50 [8];
  int iStack_48;
  unsigned char auStack_40 [8];
  int iStack_38;
  unsigned char auStack_30 [8];
  int iStack_28;
  unsigned char auStack_20 [8];
  
  stack_pair_e0.first = 0;
  stack_pair_e0.second = 0;
  fn_82273CD8(&stack_pair_e0.first,5);
  iVar1 = (int)param_1;
  iStack_d8 = iVar1 + 0x230;
  puVar2 = (unsigned int *)fn_82279C58(auStack_c0,param_1);
  fn_82672C20(*puVar2,0xffffffff821a85ec,&stack_pair_e0.first,1);
  if (iStack_bc != 0) {
    fn_822315A0();
  }
  puVar2 = &uStack_9c;
  lVar5 = 3;
  do {
    puVar2[3] = 0;
    puVar2 = puVar2 + 4;
    *puVar2 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  fn_82273CD8(auStack_90,5);
  iStack_88 = iVar1 + 0x2b0;
  fn_82273CD8(auStack_80,5);
  iStack_78 = iVar1 + 0x2f0;
  fn_82273CD8(auStack_70,5);
  iStack_68 = iVar1 + 0x330;
  puVar2 = (unsigned int *)fn_82279C58(auStack_c8,param_1);
  fn_82672C20(*puVar2,0xffffffff821a8608,auStack_90,3);
  if (iStack_c4 != 0) {
    fn_822315A0();
  }
  piVar3 = &iStack_bc;
  lVar5 = 2;
  do {
    piVar3[3] = 0;
    piVar3 = piVar3 + 4;
    *piVar3 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  fn_82273CD8(auStack_b0,5);
  iStack_a8 = iVar1 + 0x370;
  fn_82273CD8(auStack_a0,5);
  iStack_98 = iVar1 + 0x3b0;
  puVar2 = (unsigned int *)fn_82279C58(auStack_b8,param_1);
  fn_82672C20(*puVar2,0xffffffff821a8628,auStack_b0,2);
  if (iStack_b4 != 0) {
    fn_822315A0();
  }
  puVar2 = &uStack_6c;
  lVar5 = 4;
  do {
    puVar2[3] = 0;
    puVar2 = puVar2 + 4;
    *puVar2 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  fn_82273CD8(auStack_60,5);
  iStack_58 = iVar1 + 0x5b0;
  fn_82273CD8(auStack_50,5);
  iStack_48 = iVar1 + 0x5f0;
  fn_82273CD8(auStack_40,5);
  iStack_38 = iVar1 + 0x7f0;
  fn_82273CD8(auStack_30,5);
  iStack_28 = iVar1 + 0x830;
  puVar2 = (unsigned int *)fn_82279C58(auStack_d0,param_1);
  fn_82672C20(*puVar2,0xffffffff821a8644,auStack_60,4);
  if (iStack_cc != 0) {
    fn_822315A0();
  }
  puVar4 = auStack_20;
  lVar5 = 3;
  do {
    puVar4 = puVar4 + -0x10;
    fn_82273C88(puVar4);
    lVar5 = lVar5 + -1;
  } while (-1 < lVar5);
  puVar4 = auStack_90;
  lVar5 = 1;
  do {
    puVar4 = puVar4 + -0x10;
    fn_82273C88(puVar4);
    lVar5 = lVar5 + -1;
  } while (-1 < lVar5);
  puVar4 = auStack_60;
  lVar5 = 2;
  do {
    puVar4 = puVar4 + -0x10;
    fn_82273C88(puVar4);
    lVar5 = lVar5 + -1;
  } while (-1 < lVar5);
  fn_82273C88(&stack_pair_e0.first);
  return;
}

