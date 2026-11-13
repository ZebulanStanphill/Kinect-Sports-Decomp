extern int fn_82AB15D0();
extern int fn_82AB4C70();
extern int fn_82AB5008();
extern int fn_82B6B230();


unsigned int fn_82AB5180(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  
  if (param_1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69f4,0xffffffff820d68b0,0x2f7);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 8);
    if (iVar2 != 0) goto LAB_82ab5204;
  }
  fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6a20,0xffffffff820d68b0,0x2fd);
LAB_82ab5204:
  iVar2 = fn_82AB5008(iVar2,*(unsigned int *)(param_1 + 0x10),param_2);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x10);
  }
  uVar1 = *(unsigned int *)(iVar2 + 0x10);
  if (iVar2 != *(int *)(param_1 + 0x10)) {
    puVar3 = (unsigned int *)fn_82AB4C70();
    if (puVar3 == *(unsigned int **)(param_1 + 0x18)) {
      *(unsigned int *)(param_1 + 0x18) = *(unsigned int *)(param_1 + 0x10);
    }
    if (puVar3 != (unsigned int *)0x0) {
      fn_82B6B230(*puVar3);
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  }
  return uVar1;
}

