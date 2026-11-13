extern int fn_824B42A0();
extern int fn_82F63108();
extern unsigned int lbl_83261824;
extern unsigned int lbl_8326183C;
extern unsigned int lbl_83261874;


void fn_82F4DE98(int param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  
  if ((*(unsigned int *)(lbl_8326183C + 0x2b28) >> 1 & 1) == 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x28);
  }
  else {
    iVar2 = 0;
    uVar3 = 0;
    piVar4 = &lbl_83261874;
    do {
      if (*piVar4 == (&lbl_83261824)[*(int *)(param_1 + 0x28)]) {
        *(int *)(param_1 + 0x2c) = iVar2;
        break;
      }
      uVar3 = uVar3 + 0x1c0;
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 0x70;
    } while ((uVar3 & 0xffffffff) < 0xa80);
  }
  uVar1 = fn_824B42A0();
  *(unsigned __int64 *)(param_1 + 0x20) = uVar1;
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    (**(int (***)())(**(int **)(param_1 + 0x18) + 4))(*(int **)(param_1 + 0x18),param_1);
  }
  return;
}

