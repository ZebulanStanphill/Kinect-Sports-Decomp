extern int fn_82575DF0();
extern unsigned int lbl_821C1424;
extern unsigned int lbl_821C8EA8;


void fn_825C3D70(unsigned int *param_1)

{
  int lVar1;
  unsigned int *piVar2;
  
  piVar2 = param_1 + 4;
  lVar1 = 2;
  *param_1 = &lbl_821C8EA8;
  do {
    if (piVar2[-2] != 0) {
      fn_82575DF0(param_1[1], piVar2[-2]);
      piVar2[-2] = 0;
    }
    if (*piVar2 != 0) {
      fn_82575DF0(param_1[1], *piVar2);
      *piVar2 = 0;
    }
    lVar1 = lVar1 + -1;
    piVar2 = piVar2 + 1;
  } while (lVar1 != 0);
  *param_1 = &lbl_821C1424;
  return;
}

