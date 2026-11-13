extern unsigned int *auStack_a0c;
extern unsigned int *auStack_a18;
extern unsigned int *auStack_a1c;
extern unsigned int *auStack_a20;
extern unsigned int *auStack_a28;
extern unsigned int *auStack_a2c;
extern unsigned int *auStack_a38;
extern unsigned int *auStack_a40;
extern int fn_8225C590();
extern int fn_8251F720();
extern int fn_82520158();
extern int fn_82A1EFC0();
extern int fn_82F6A548();
extern unsigned int lbl_831CD2FC;
extern unsigned int lbl_83276540;
extern unsigned int uStack_9e8;


void fn_822ACE48(void)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int in_stack_0000005c;
  unsigned char auStack_a40 [8];
  unsigned char auStack_a38 [12];
  unsigned char auStack_a2c [4];
  unsigned char auStack_a28 [8];
  unsigned char auStack_a20 [4];
  unsigned char auStack_a1c [4];
  unsigned char auStack_a18 [12];
  unsigned char auStack_a0c [36];
  unsigned int uStack_9e8;
  
  puVar1 = (unsigned int *)fn_82F6A548();
  lbl_83276540 = in_stack_0000005c;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  lbl_831CD2FC = 1;
  puVar1[4] = in_stack_0000005c;
  uStack_9e8 = 0;
  fn_82520158(0xffffffff821977d4,auStack_a40,0);
  fn_82520158(0xffffffff821977e4,auStack_a0c,0);
  fn_82520158(0xffffffff821977f8,auStack_a18,0);
  fn_82520158(0xffffffff8219780c,auStack_a1c,0);
  fn_82520158(0xffffffff82197820,auStack_a28,0);
  fn_82520158(0xffffffff82197830,auStack_a20,0);
  fn_82520158(0xffffffff82197844,auStack_a2c,0);
  fn_82520158(0xffffffff82197858,auStack_a38,0);
  uVar2 = fn_8251F720(auStack_a40,0);
  puVar1[5] = uVar2;
  uVar2 = fn_8251F720(auStack_a0c,0);
  puVar1[6] = uVar2;
  uVar2 = fn_8251F720(auStack_a18,0);
  puVar1[7] = uVar2;
  uVar2 = fn_8251F720(auStack_a1c,0);
  puVar1[8] = uVar2;
  uVar2 = fn_8251F720(auStack_a28,0);
  puVar1[9] = uVar2;
  uVar2 = fn_8251F720(auStack_a20,0);
  puVar1[10] = uVar2;
  uVar2 = fn_8251F720(auStack_a2c,0);
  puVar1[0xb] = uVar2;
  uVar2 = fn_8251F720(auStack_a38,0);
  puVar1[0xc] = uVar2;
  iVar3 = fn_8225C590();
  *(unsigned int *)(iVar3 + 0x30) = 0;
  puVar1[0xd] = 0;
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(puVar1 + 0xe,0,0x8c);
}

