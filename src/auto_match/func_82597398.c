extern unsigned int *auStack_68;
extern unsigned int *auStack_80;
extern int fn_82520E68();
extern int fn_82523048();
extern int fn_825269D0();
extern int fn_8253D108();
extern int fn_82547650();
extern int fn_82558B08();
extern int fn_8255B0D8();
extern int fn_82566E58();
extern int fn_8257CB40();
extern int fn_8257CC40();
extern int fn_8257E0B8();
extern int fn_825E8220();
extern int XMemSet();
extern unsigned int lbl_832659CD;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


/* WARNING: Removing unreachable block (ram,0x82597464) */
/* WARNING: Removing unreachable block (ram,0x82597474) */
/* WARNING: Removing unreachable block (ram,0x82597480) */

void fn_82597398(int param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  struct { unsigned int first; unsigned int second; } stack_pair_88;

  unsigned char auStack_80 [8];
  int (**pcStack_78)();
  unsigned char auStack_68 [72];
  
  *(unsigned int *)(param_1 + 4) = 1;
  piVar7 = *(int **)(*(int *)(param_2 + 0x8ac) + 0xbab8);
  fn_825E8220(auStack_80,piVar7 + 6);
  do {
  } while (*piVar7 != 0);
  (*pcStack_78)(auStack_80);
  fn_82547650();
  if (*(int *)(param_2 + 0x234) != 0) {
    fn_8253D108(param_2 + 0x1f0,param_2);
  }
  fn_825269D0(8,param_2);
  fn_82558B08();
  piVar7 = *(int **)(param_2 + 0x848);
  iVar1 = piVar7[3];
  for (iVar6 = piVar7[2]; iVar6 != iVar1; iVar6 = iVar6 + 0x30) {
    fn_82566E58(*(unsigned int *)(iVar6 + 4),*(unsigned int *)(*piVar7 + 0x844));
  }
  iVar1 = piVar7[2];
  if (iVar1 != piVar7[3]) {
    for (iVar6 = iVar1; iVar6 != piVar7[3]; iVar6 = iVar6 + 0x30) {
    }
    piVar7[3] = iVar1;
  }
  fn_8255B0D8(*(unsigned int *)(param_2 + 0x844));
  fn_82558B08();
  if (((*(unsigned int *)(param_2 + 0x1a0) & 2) != 0) && (lbl_832659CD != '\0')) {
    fn_82523048(param_2 + 0xd40);
  }
  stack_pair_88.first = 0x4b;
  stack_pair_88.second = 8;
  fn_8257CB40(param_2 + 0x78,&stack_pair_88.first,0);
  puVar2 = *(unsigned int **)(param_2 + 0xa0);
  for (puVar3 = (unsigned int *)*puVar2; puVar3 != puVar2; puVar3 = (unsigned int *)*puVar3) {
    fn_82520E68(puVar3[2]);
  }
  fn_82558B08();
  uStack_90 = 0x4b;
  uStack_8c = 8;
  piVar4 = *(int **)(param_2 + 0x314);
  for (piVar7 = *(int **)(param_2 + 0x310); piVar7 < piVar4; piVar7 = piVar7 + 2) {
    piVar5 = (int *)*piVar7;
    if (*(char *)((int)piVar5 + 0xb25) == '\x03') {
      (**(int (***)())(*piVar5 + 0xc))(piVar5,&uStack_90);
    }
  }
  fn_8257E0B8(*(unsigned int *)(param_2 + 0xb8),&uStack_90);
  fn_82558B08();
  fn_8257CC40(param_2 + 0x78,param_2);
  fn_82558B08();
                    /* WARNING: Subroutine does not return */
  XMemSet(auStack_68,0,8);
}

