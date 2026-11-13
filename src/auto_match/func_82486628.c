extern int fn_82486278();
extern int fn_82A1DD38();


void fn_82486628(int param_1)

{
  int *piVar1;
  int *piVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  
  if (*(int *)(param_1 + 0x18c0) == 0) {
    piVar1 = (int *)(param_1 + 0xc58);
    lVar4 = 3;
    piVar2 = piVar1;
    do {
      if (*piVar2 == 2) {
        *piVar2 = 4;
      }
      piVar2 = piVar2 + 0x108;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    lVar4 = 3;
    do {
      if (*piVar1 == 3) {
        *piVar1 = 4;
      }
      piVar1 = piVar1 + 0x108;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar3 = (unsigned int *)(param_1 + 0x1078);
    lVar4 = 2;
    do {
      if (puVar3[-0x108] == 4) {
        fn_82A1DD38(puVar3 + -0x108,puVar3,0x420);
        *puVar3 = 4;
      }
      lVar4 = lVar4 + -1;
      puVar3 = puVar3 + 0x108;
    } while (lVar4 != 0);
  }
  else if (*(int *)(param_1 + 0x18c0) != 1) {
    fn_82486278();
  }
  return;
}

