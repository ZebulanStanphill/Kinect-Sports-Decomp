extern int fn_82A1EFC0();
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82F9AC98(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int *piVar3;
  unsigned int *puVar4;
  
  uVar1 = lbl_821AAD20;
  if (*(int *)(param_1 + 0x74) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(*(int *)(param_1 + 0x74),0,*(int *)(param_1 + 0x80) << 2);
  }
  uVar2 = 0;
  *(unsigned int *)(param_1 + 0x8c) = lbl_821AAD20;
  if ((*(unsigned int *)(param_1 + 0x14) & 0xfffffffc) != 0) {
    piVar3 = (int *)(param_1 + 0x110);
    puVar4 = (unsigned int *)(param_1 + 0x1c4);
    do {
      puVar4[-1] = uVar1;
      *puVar4 = uVar1;
      puVar4[1] = uVar1;
      puVar4[2] = uVar1;
      if (*piVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82A1EFC0(*piVar3,0,puVar4[-0x4a] << 4);
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
      puVar4 = puVar4 + 4;
    } while (uVar2 < *(unsigned int *)(param_1 + 0x14) >> 2);
  }
  *(unsigned int *)(param_1 + 0x200) = uVar1;
  *(unsigned int *)(param_1 + 0x204) = uVar1;
  return 1;
}

