extern int fn_82AB15D0();
extern int fn_82BD2C30();
extern unsigned int lbl_820E83A8;
extern unsigned int lbl_8316FF50;


void fn_82BD2FA0(int param_1,int *param_2)

{
  char cVar2;
  int iVar1;
  char acStack_40 [64];
  
  cVar2 = (**(int (***)())(*param_2 + 0x34))(param_2);
  if (cVar2 == '\0') {
    iVar1 = fn_82BD2C30(param_2,acStack_40);
    if (iVar1 == -1) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e8530,0xffffffff820e84a8,0xca);
    }
    if (*(int *)(param_1 + 4) == 0) {
      *(char *)(param_1 + 8) = acStack_40[0];
    }
    else if ((iVar1 != 0) && (*(char *)(param_1 + 8) != acStack_40[0])) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e8544,0xffffffff820e84a8,0xcf);
    }
    if ((*(unsigned int *)(&lbl_8316FF50 + param_2[6] * 0x34) >> 2 & 1) == 0) {
      if (4 < *(int *)(param_1 + 4)) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e8508,0xffffffff820e84a8,0xd6);
      }
      iVar1 = iVar1 * 5 + *(int *)(param_1 + 4);
    }
    else {
      if (4 < iVar1) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e851c,0xffffffff820e84a8,0xd3);
      }
      iVar1 = *(int *)(param_1 + 4) * 5 + iVar1;
    }
    iVar1 = *(int *)(&lbl_820E83A8 + iVar1 * 4);
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 == -1) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e8498,0xffffffff820e84a8,0xda);
    }
  }
  return;
}

