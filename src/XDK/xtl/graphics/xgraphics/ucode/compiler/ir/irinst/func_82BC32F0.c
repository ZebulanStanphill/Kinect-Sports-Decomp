typedef unsigned char bool;
extern int fn_82AB15D0();
extern unsigned int lbl_8316FF54;


bool fn_82BC32F0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = *(int *)(&lbl_8316FF54 + iVar1 * 0x34);
  *(int *)(param_1 + 0x18) = iVar2;
  if (iVar2 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e3ca8,0xffffffff820e3b18,0x5b9);
  }
  if (iVar1 == 0x35) {
    if (*(char *)(param_1 + 0x99) != *(char *)(param_1 + 0x9a)) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e3c6c,0xffffffff820e3b18,0x5bc);
    }
    *(bool *)(param_1 + 0x9a) = *(char *)(param_1 + 0x9a) == '\0';
  }
  return iVar1 == 0x35;
}

