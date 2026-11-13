extern int fn_82A40BA8();
extern int fn_82A44008();
extern int fn_82A4F4E0();
extern int fn_82A52310();


void fn_82A46250(int param_1)

{
  int iVar1;
  int iVar2;
  
  fn_82A44008();
  while (iVar2 = fn_82A40BA8(param_1 + 0x26c), iVar2 != 0) {
    if (iVar2 != 0) {
      fn_82A4F4E0();
    }
  }
  while (iVar2 = fn_82A40BA8(param_1 + 0x294), iVar2 != 0) {
    if (iVar2 != 0) {
      fn_82A4F4E0();
    }
  }
  iVar2 = *(int *)(param_1 + 0x210);
  while (iVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x210);
    iVar2 = *(int *)(iVar1 + 4);
    *(int *)(iVar1 + 4) = *(int *)(param_1 + 0x1f8);
    *(int *)(param_1 + 0x1f8) = iVar1;
    *(int *)(param_1 + 0x210) = iVar2;
  }
  *(unsigned int *)(param_1 + 0x218) = 0;
  *(unsigned int *)(param_1 + 0x214) = 0;
  iVar2 = *(int *)(param_1 + 0x238);
  while (iVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x238);
    iVar2 = *(int *)(iVar1 + 4);
    *(int *)(iVar1 + 4) = *(int *)(param_1 + 0x220);
    *(int *)(param_1 + 0x220) = iVar1;
    *(int *)(param_1 + 0x238) = iVar2;
  }
  *(unsigned int *)(param_1 + 0x240) = 0;
  *(unsigned int *)(param_1 + 0x23c) = 0;
  if (*(int *)(param_1 + 0x1d0) != 0) {
    fn_82A52310();
    *(unsigned int *)(param_1 + 0x1d0) = 0;
  }
  if (*(int *)(param_1 + 0x1dc) != 0) {
    fn_82A4F4E0();
    *(unsigned int *)(param_1 + 0x1dc) = 0;
  }
  return;
}

