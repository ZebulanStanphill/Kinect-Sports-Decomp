extern int fn_823AA2A8();
extern int fn_82E1D230();
extern int fn_82E1D550();
extern int fn_82E1EC90();
extern int fn_82E210B0();
extern int fn_82E218C0();


void fn_82E1EDA0(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  fn_82E218C0(*(unsigned int *)(param_1 + 0x48));
  uVar1 = fn_82E210B0(*(unsigned int *)(param_1 + 0x48));
  fn_82E1EC90(param_1,fn_823AA2A8(*(unsigned int *)(param_1 + 0x48)),uVar1);
  fn_82E1D550();
  fn_82E1D230();
  if (*(char *)(param_1 + 0xe) != '\0') {
    RtlLeaveCriticalSection(param_1 + 0x20);
  }
  return;
}

