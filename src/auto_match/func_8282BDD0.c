extern int fn_828252D8();
extern int free();


void fn_8282BDD0(int param_1)

{
  unsigned int uVar2;
  int lVar1;
  int iVar3;
  unsigned int *piVar4;
  
  if ((*(unsigned char *)(param_1 + 0x134) & 4) != 0) {
    uVar2 = 0;
    if (*(char *)(param_1 + 0x51) != '\0') {
      iVar3 = 0;
      do {
        fn_828252D8(*(unsigned int *)(*(unsigned int *)(param_1 + 0x114) + iVar3 + 0xd));
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 0x21;
      } while (uVar2 < *(unsigned char *)(param_1 + 0x51));
    }
  }
  if (*(unsigned int *)(param_1 + 0x120) != 0) {
    fn_828252D8(*(unsigned int *)(param_1 + 0x120));
  }
  if (*(unsigned int *)(param_1 + 300) != 0) {
    fn_828252D8(*(unsigned int *)(param_1 + 300));
  }
  free(*(unsigned int *)(param_1 + 0xcc));
  piVar4 = (unsigned int *)(param_1 + 0xb8);
  lVar1 = 3;
  do {
    if (*piVar4 != 0) {
      fn_828252D8(*piVar4);
    }
    lVar1 = lVar1 + -1;
    piVar4 = piVar4 + 1;
  } while (lVar1 != 0);
  fn_828252D8(param_1);
  return;
}

