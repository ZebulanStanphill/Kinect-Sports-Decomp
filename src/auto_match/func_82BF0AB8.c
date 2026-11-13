extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BEF188();
extern int fn_82BEF3A8();
extern int fn_82BEF2D0();
extern int fn_82BEFF08();
extern int fn_82BEF458();
extern int fn_82BEF228();
extern int fn_82BEF3A8();
extern int fn_82BF08E0();


unsigned __int64 fn_82BF0AB8(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  int iVar4;

  if (*(char *)(param_1 + 0x40) == '\0') {
    uVar1 = *(unsigned int *)(param_1 + 0x10);
    *(unsigned int *)(param_1 + 4) = 0;
    if ((int)uVar1 < 0x12) {
      if (uVar1 == 0x11) {
        fn_82BEF3A8(param_1);
      }
      else if (uVar1 != 0) {
        if (uVar1 == 1) {
          fn_82BEF188(param_1);
        }
        else if ((2 < uVar1) && (uVar1 == 0x10)) {
          fn_82BEF228(param_1);
        }
      }
    }
    else if (uVar1 == 0x12) {
      fn_82BEF3A8(param_1);
    }
    else if (uVar1 == 0x13) {
      fn_82BEF2D0(param_1);
    }
    else if (uVar1 == 0x14) {
      fn_82BEFF08(param_1);
    }
    if ((*(int *)(param_1 + 0x10) == 2) || (0x11 < *(int *)(param_1 + 0x10))) {
      fn_82BF08E0(param_1,0);
      fn_82BEF458(param_1);
    }
    iVar4 = param_1 + 0x1c;
    fn_82BE5340(iVar4);
    while (*(int *)(param_1 + 0x24) != 0) {
      piVar3 = (int *)fn_82BE5378(iVar4);
      piVar3[3] = 0;
      (**(int (***)())(*piVar3 + 0xc))();
      if ((piVar3[3] == 0) && (*(int *)(param_1 + 4) != 0)) {
        piVar3[3] = *(int *)(param_1 + 4);
      }
      fn_82BE5350(iVar4);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0x198;
  }
  return uVar2;
}
