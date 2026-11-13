extern int fn_822315A0();
extern int fn_825113E0();
extern int fn_8265C9E0();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821C2414;
extern unsigned int lbl_821C241C;


void fn_822B7778(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  
  lVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x118) + 0x14;
  uVar1 = *(unsigned int *)(param_1 + 0x14);
  puVar3 = (unsigned int *)fn_8265C9E0(0x18);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    puVar3[1] = 1;
    puVar3[2] = 1;
    *puVar3 = &lbl_821AD588;
    if (puVar3 + 3 != (unsigned int *)0x0) {
      puVar3[4] = param_2;
      puVar3[5] = uVar1;
      puVar3[3] = &lbl_821C2414;
    }
  }
  iVar2 = *(int *)(param_1 + 0x164);
  *(unsigned int **)(param_1 + 0x164) = puVar3;
  *(unsigned int **)(param_1 + 0x160) = puVar3 + 3;
  if (iVar2 != 0) {
    fn_822315A0();
  }
  fn_825113E0(lVar4,0x26,*(unsigned int *)(param_1 + 0x160));
  uVar1 = *(unsigned int *)(param_1 + 0x14);
  puVar3 = (unsigned int *)fn_8265C9E0(0x14);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    puVar3[1] = 1;
    puVar3[2] = 1;
    *puVar3 = &lbl_821AD588;
    if (puVar3 + 3 != (unsigned int *)0x0) {
      puVar3[4] = uVar1;
      puVar3[3] = &lbl_821C241C;
    }
  }
  iVar2 = *(int *)(param_1 + 0x15c);
  *(unsigned int **)(param_1 + 0x15c) = puVar3;
  *(unsigned int **)(param_1 + 0x158) = puVar3 + 3;
  if (iVar2 != 0) {
    fn_822315A0();
  }
  fn_825113E0(lVar4,0x2e,*(unsigned int *)(param_1 + 0x158));
  return;
}

