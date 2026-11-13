extern char cRam83264328;
extern int fn_82FAF878();
extern int fn_82FFF908();
extern int fn_82FFF990();
extern int fn_8300C838();
extern int fn_8300C870();


unsigned __int64 fn_82FB1F78(int *param_1)

{
  unsigned __int64 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if (cRam83264328 == '\0') {
    uVar1 = fn_82FAF878();
    return uVar1;
  }
  if (param_1[0x2d] != 0) {
    return 1;
  }
  uVar1 = (**(int (***)())(*param_1 + 0x164))(param_1);
  if ((int)uVar1 != 1) {
    return uVar1;
  }
  piVar2 = (int *)fn_8300C838(param_1 + 0x2b,param_1[0x31],param_1[0x33]);
  if (piVar2 == (int *)0x0) {
    uVar1 = 0x34;
  }
  else {
    piVar5 = (int *)param_1[0x2e];
    if (piVar5 != (int *)param_1[0x2f]) {
      do {
        piVar6 = (int *)piVar2[1];
        piVar3 = (int *)*piVar2;
        if (piVar3 != piVar6) {
          do {
            if (*piVar3 == *piVar5) break;
            piVar3 = piVar3 + 1;
          } while (piVar3 != piVar6);
          if (piVar3 != piVar6) {
            uVar1 = fn_82FFF908(piVar5[1]);
          }
        }
        if ((int)uVar1 != 1) {
          for (piVar6 = (int *)param_1[0x2e]; piVar6 != piVar5; piVar6 = piVar6 + 2) {
            piVar3 = (int *)piVar2[1];
            piVar4 = (int *)*piVar2;
            if (piVar4 != piVar3) {
              do {
                if (*piVar4 == *piVar6) break;
                piVar4 = piVar4 + 1;
              } while (piVar4 != piVar3);
              if (piVar4 != piVar3) {
                fn_82FFF990(piVar5[1]);
              }
            }
          }
        }
        piVar5 = piVar5 + 2;
      } while (piVar5 != (int *)param_1[0x2f]);
      if ((int)uVar1 != 1) goto LAB_82fb2100;
    }
    param_1[0x2d] = param_1[0x2d] + 1;
    uVar1 = fn_8300C870(param_1 + 0x2b,param_1[0x31],param_1[0x33]);
    if ((int)uVar1 == 1) {
      return uVar1;
    }
    (**(int (***)())(*param_1 + 0x8c))(param_1);
  }
LAB_82fb2100:
  (**(int (***)())(*param_1 + 0x168))(param_1);
  return uVar1;
}

