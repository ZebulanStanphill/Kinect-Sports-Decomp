extern int fn_82AB15D0();
extern int fn_82AB7940();


void fn_82B7C640(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  
  if (*(char *)(*(int *)(param_1 + 0x10) + 0x564) == '\0') {
    uVar1 = *(unsigned int *)(param_1 + 8);
  }
  else {
    uVar1 = *(unsigned int *)(param_1 + 4);
  }
  iVar2 = fn_82AB7940(uVar1,*(unsigned int *)(*(int *)(param_1 + 0x10) + 0x600));
  if (iVar2 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820db408,0x231);
  }
  return;
}

