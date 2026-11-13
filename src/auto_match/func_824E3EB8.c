typedef unsigned char bool;
extern unsigned int *auStack_10b8;
extern unsigned int *auStack_12de;
extern unsigned int *auStack_12f0;
extern unsigned int *auStack_8b8;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_8226D2A8();
extern int fn_8226D388();
extern int fn_822831B8();
extern int fn_824E3740();
extern int fn_82520158();
extern int fn_82528BF8();
extern int fn_8265C9E0();
extern int fn_8227A748();
extern unsigned int iStack_10dc;
extern unsigned int lbl_820E975C;
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_8327672C;
extern unsigned int uStack_10e0;
extern unsigned int uStack_12e0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_824E3EB8(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  char cVar6;
  unsigned int uVar5;
  int iVar7;
  unsigned char auStack_12f0 [1];
  unsigned short uStack_12e0;
  unsigned char auStack_12de [510];
  struct { unsigned int first; int second; } stack_pair_10e0;

  unsigned char auStack_10b8 [2048];
  unsigned char auStack_8b8 [2232];

  fn_82520158(0xffffffff821c13b0,auStack_12f0,0);
  iVar3 = fn_824E3740();
  fn_8226D2A8(&stack_pair_10e0.first);
  puVar4 = (unsigned int *)fn_8265C9E0(0x178);
  if (puVar4 == (unsigned int *)0x0) {
    puVar4 = (unsigned int *)0x0;
  }
  else {
    puVar4[1] = 1;
    *puVar4 = &lbl_821A8D8C;
    puVar4[2] = 1;
    if (puVar4 + 4 != (unsigned int *)0x0) {
      fn_822831B8(puVar4 + 4,auStack_12f0);
    }
  }
  iVar2 = *(int *)(iVar3 + 0x1c);
  *(unsigned int **)(iVar3 + 0x1c) = puVar4;
  *(unsigned int **)(iVar3 + 0x18) = puVar4 + 4;
  if (iVar2 != 0) {
    fn_822315A0();
  }
  iVar2 = *(int *)(iVar3 + 0x1c);
  uVar5 = *(unsigned int *)(iVar3 + 0x18);
  stack_pair_10e0.first = 0;
  iVar7 = 0;
  if ((iVar2 != 0) && (cVar6 = fn_8223AAC0(iVar2), cVar6 != '\0')) {
    stack_pair_10e0.first = uVar5;
    iVar7 = iVar2;
  }
  bVar1 = stack_pair_10e0.second != 0;
  stack_pair_10e0.second = iVar7;
  if (bVar1) {
    fn_822315A0();
  }
  fn_82528BF8(lbl_8327672C,0xffffffff821c13bc,auStack_10b8,0x400,0,1);
  fn_82528BF8(lbl_8327672C,0xffffffff821c13c8,auStack_8b8,0x400,0,1);
  uVar5 = fn_8226D388(&stack_pair_10e0.first);
  *(unsigned int *)(iVar3 + 0x10) = uVar5;
  *(unsigned int *)(iVar3 + 0x14) = uVar5;
  if (stack_pair_10e0.second != 0) {
    fn_822315A0();
  }
  uStack_12e0 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
  fn_8227A748(auStack_12de,0,0x1fe);
}
