extern int fn_8262FEC8();
extern int fn_82631578();
extern int fn_82639F78();
extern int fn_82BFFC08();


void fn_82C013D0(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    fn_82639F78(*(int *)(param_1 + 0x38),0,0,0,0,1);
                    /* WARNING: Subroutine does not return */
    fn_82631578(*(unsigned int *)(param_1 + 0x38),0);
  }
  uVar2 = 0x48;
  do {
    uVar3 = 0;
    do {
      iVar1 = (uVar2 + uVar3) * 4;
      if (*(int *)(iVar1 + param_1) != 0) {
        fn_8262FEC8();
        *(unsigned int *)(iVar1 + param_1) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 3);
    uVar2 = uVar2 + 3;
  } while (uVar2 < 0x51);
  if (*(int *)(param_1 + 0x144) != 0) {
    fn_8262FEC8();
    *(unsigned int *)(param_1 + 0x144) = 0;
  }
  if (*(int *)(param_1 + 0x148) != 0) {
    fn_8262FEC8();
    *(unsigned int *)(param_1 + 0x148) = 0;
  }
  fn_82BFFC08(param_1);
  return;
}

