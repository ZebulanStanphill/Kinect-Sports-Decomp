extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_c8;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82279C58();
extern int fn_8227C0A8();
extern int fn_8227C118();
extern int fn_82672C20();
extern unsigned int iStack_48;
extern unsigned int iStack_c4;
extern unsigned int lbl_82195528;
extern unsigned int lbl_821955B8;
extern unsigned int lbl_82195830;
extern unsigned int lbl_821958F0;
extern unsigned int uStack_98;
extern unsigned int uStack_a8;
extern unsigned int uStack_d0;


void fn_8227C610(int param_1,unsigned __int64 param_2,int param_3,unsigned int param_4,__int64 param_5,
                  __int64 param_6)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned char *puVar4;
  __int64 lVar5;
  unsigned __int64 uStack_d0;
  unsigned char auStack_c8 [4];
  int iStack_c4;
  unsigned char auStack_c0 [8];
  double dStack_b8;
  unsigned char auStack_b0 [8];
  unsigned __int64 uStack_a8;
  unsigned char auStack_a0 [8];
  unsigned int uStack_98;
  unsigned char auStack_90 [8];
  char cStack_88;
  unsigned char auStack_80 [8];
  double dStack_78;
  unsigned char auStack_70 [8];
  char cStack_68;
  unsigned char auStack_50 [8];
  int iStack_48;
  unsigned char auStack_40 [64];
  
  puVar3 = (unsigned int *)((int)&uStack_d0 + 4);
  lVar5 = 8;
  do {
    puVar3[3] = 0;
    puVar3 = puVar3 + 4;
    *puVar3 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  fn_82273CD8(auStack_c0,3);
  uStack_d0 = param_2 & 0xffffffff;
  dStack_b8 = (double)uStack_d0;
  fn_82273CD8(auStack_a0,5);
  iVar1 = *(int *)(param_1 + 0xa6c);
  uStack_98 = param_4;
  fn_82273CD8(auStack_90,2);
  cStack_88 = '\x01' - (iVar1 == 0);
  fn_82273CD8(auStack_80,3);
  uStack_d0 = param_5 + 1U & 0xffffffff;
  dStack_78 = (double)uStack_d0;
  fn_82273CD8(auStack_70,2);
  cStack_68 = '\x01' - (param_6 == 0);
  iVar1 = fn_8227C118(param_1,param_2);
  if (param_3 == 1) {
    fn_82273CD8(auStack_b0,3);
    uStack_a8 = lbl_82195830;
  }
  else if (param_3 == 2) {
    fn_82273CD8(auStack_b0,3);
    uStack_a8 = lbl_82195528;
  }
  else {
    iVar2 = fn_8227C0A8(param_1);
    if ((iVar2 == 0) || (iVar1 == 0)) {
      fn_82273CD8(auStack_b0,3);
      uStack_a8 = lbl_821958F0;
    }
    else {
      fn_82273CD8(auStack_b0,3);
      uStack_a8 = lbl_821955B8;
    }
  }
  if ((*(int *)(param_1 + 0xa70) == 0) || (iVar1 == 0)) {
    fn_82273CD8(auStack_50,0);
  }
  else {
    fn_82273CD8(auStack_50,5);
    iStack_48 = param_1 + 0x270;
  }
  puVar3 = (unsigned int *)fn_82279C58(auStack_c8,param_1);
  fn_82672C20(*puVar3,0xffffffff821a86b0,auStack_c0,8);
  if (iStack_c4 != 0) {
    fn_822315A0();
  }
  puVar4 = auStack_40;
  lVar5 = 7;
  do {
    puVar4 = puVar4 + -0x10;
    fn_82273C88(puVar4);
    lVar5 = lVar5 + -1;
  } while (-1 < lVar5);
  return;
}

