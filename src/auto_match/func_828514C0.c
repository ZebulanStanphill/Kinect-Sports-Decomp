extern int fn_82839050();
extern int fn_82A938E8();
extern int fn_82A93980();


void fn_828514C0(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  
  fn_82839050();
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    iVar3 = 0;
    do {
      puVar1 = (unsigned int *)(iVar3 + *(int *)(param_1 + 0x24));
      fn_82A938E8(puVar1[2],0,0,puVar1[1],*(unsigned int *)*puVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar2 < *(int *)(param_1 + 0x2c));
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    iVar3 = 0;
    do {
      puVar1 = (unsigned int *)(*(int *)(param_1 + 0x30) + iVar3);
      fn_82A93980(puVar1[2],0,puVar1[3],0,puVar1[1],*puVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar2 < *(int *)(param_1 + 0x34));
  }
  return;
}

