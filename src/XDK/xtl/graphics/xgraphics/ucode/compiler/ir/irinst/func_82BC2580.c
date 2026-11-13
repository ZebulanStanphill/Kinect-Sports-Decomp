extern int fn_82AB15D0();


unsigned __int64 fn_82BC2580(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = param_1[4];
  iVar3 = 0;
  if (0 < iVar1) {
    piVar4 = param_1 + 7;
    do {
      if (*piVar4 == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e3b88,0xffffffff820e3b18,0x88);
      }
      if (piVar4[0xd] != *(int *)(*piVar4 + 0x20)) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e3b94,0xffffffff820e3b18,0x89);
      }
      if ((piVar4[7] != *(int *)(*piVar4 + 0x10)) && (piVar4[7] != *(int *)(*piVar4 + 0xc))) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e3bc0,0xffffffff820e3b18,0x8b);
      }
      (**(int (***)())(*param_1 + 0x14))(param_1);
      iVar1 = param_1[4];
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < iVar1);
  }
  iVar3 = 1;
  if (1 < param_1[5] + iVar1) {
    piVar4 = param_1 + 8;
    do {
      if (*piVar4 == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e3b88,0xffffffff820e3b18,0x91);
      }
      if (piVar4[0xd] != *(int *)(*piVar4 + 0x20)) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e3b94,0xffffffff820e3b18,0x92);
      }
      if ((piVar4[7] != *(int *)(*piVar4 + 0x10)) && (piVar4[7] != *(int *)(*piVar4 + 0xc))) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e3bc0,0xffffffff820e3b18,0x94);
      }
      cVar2 = (**(int (***)())(*param_1 + 0x14))(param_1);
      if (cVar2 == '\0') {
        (**(int (***)())(*param_1 + 0x18))(param_1);
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < param_1[5] + param_1[4]);
  }
  if (param_1[0xed] == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e3b74,0xffffffff820e3b18,0x99);
  }
  return 1;
}

