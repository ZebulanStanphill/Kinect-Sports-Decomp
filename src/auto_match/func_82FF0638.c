extern int fn_82FF3E78();
extern int fn_83018DD8();
extern unsigned int lbl_832642FC;


unsigned __int64 fn_82FF0638(int param_1)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  int *piVar5;
  
  uVar3 = 1;
  piVar1 = (int *)(**(int (***)())(**(int **)(param_1 + 0x68) + 0xfc))();
  if (piVar1 != (int *)0x0) {
    uVar2 = 0;
    piVar4 = (int *)(param_1 + 0xec);
    do {
      if (*piVar4 != 0) {
        piVar5 = (int *)*piVar1;
        if (piVar5 != (int *)piVar1[1]) {
          do {
            if ((*piVar5 == piVar4[-1]) && (piVar5[1] == uVar2)) {
              uVar3 = fn_83018DD8(lbl_832642FC,*piVar4,piVar5[2],piVar5[3],piVar5[4],piVar5[7]
                                        ,piVar5[5],piVar5[6]);
            }
            piVar5 = piVar5 + 8;
          } while (piVar5 != (int *)piVar1[1]);
        }
      }
      uVar2 = uVar2 + 1;
      piVar4 = piVar4 + 4;
    } while (uVar2 < 4);
  }
  piVar1 = (int *)fn_82FF3E78(*(unsigned int *)(param_1 + 0x68));
  if (piVar1 != (int *)0x0) {
    piVar4 = (int *)*piVar1;
    if (piVar4 != (int *)piVar1[1]) {
      do {
        if ((*piVar4 == *(int *)(param_1 + 0x128)) && (*(int *)(param_1 + 300) != 0)) {
          uVar3 = fn_83018DD8(lbl_832642FC,*(int *)(param_1 + 300),piVar4[2],piVar4[3],
                                    piVar4[4],piVar4[7],piVar4[5],piVar4[6]);
        }
        piVar4 = piVar4 + 8;
      } while (piVar4 != (int *)piVar1[1]);
    }
  }
  return uVar3;
}

