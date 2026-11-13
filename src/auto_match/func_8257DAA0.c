extern int fn_8251E370();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_82520158();
extern int fn_82522DF8();


unsigned int * fn_8257DAA0(unsigned int param_1)

{
  int *piVar1;
  unsigned int *puVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned __int64 uVar2;
  unsigned int *puVar6;
  int aiStack_20 [2];
  
  puVar3 = (unsigned int *)fn_82522DF8(0x84);
  *puVar3 = param_1;
  uVar4 = fn_82522DF8(0x134);
  puVar3[1] = uVar4;
  fn_8251E370(puVar3 + 2,8,0x40);
  iVar5 = fn_82520158(0xffffffff821c5514,aiStack_20,0);
  if (iVar5 != 0) {
    uVar4 = fn_8251F720(aiStack_20,0);
    puVar3[0xb] = uVar4;
  }
  iVar5 = fn_82520158(0xffffffff821c5520,aiStack_20,0);
  if (iVar5 != 0) {
    uVar4 = fn_8251F720(aiStack_20,0);
    puVar3[0xc] = uVar4;
  }
  iVar5 = fn_82520158(0xffffffff821c5530,aiStack_20,0);
  if (iVar5 != 0) {
    uVar4 = fn_8251F720(aiStack_20,0);
    puVar3[0xd] = uVar4;
  }
  iVar5 = fn_82520158(0xffffffff821c553c,aiStack_20,0);
  if (iVar5 != 0) {
    uVar4 = fn_8251F720(aiStack_20,0);
    puVar3[0xe] = uVar4;
  }
  iVar5 = fn_82520158(0xffffffff821c554c,aiStack_20,0);
  if (iVar5 != 0) {
    uVar4 = fn_8251F720(aiStack_20,0);
    puVar3[0xf] = uVar4;
  }
  fn_82520158(0xffffffff821c5554,aiStack_20,0);
  if (aiStack_20[0] != 0) {
    iVar5 = fn_8251F720(aiStack_20,0);
    if (iVar5 != 0) {
      uVar2 = fn_8251FBA8(iVar5);
      uVar2 = (uVar2 & 0xffffffff) >> 3;
      if (uVar2 != 0) {
        puVar6 = (unsigned int *)(iVar5 + -4);
        do {
          piVar1 = puVar6 + 1;
          puVar6 = puVar6 + 2;
          puVar3[*piVar1 + 7] = *puVar6;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      fn_8251FA58(iVar5);
    }
  }
  puVar3[0x20] = 0;
  return puVar3;
}

