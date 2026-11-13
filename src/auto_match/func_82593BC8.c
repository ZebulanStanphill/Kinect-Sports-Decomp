extern int fn_82512568();
extern int fn_82512610();
extern int fn_82593A50();
extern int fn_828EA610();
extern int fn_82A1C0C8();
extern unsigned int lbl_83265988;
extern unsigned int lbl_832659AC;
extern unsigned int lbl_832659CC;
extern unsigned int lbl_832659CD;
extern unsigned int lbl_832659D4;
extern unsigned int lbl_8326C2A8;
extern unsigned int lbl_8329618C;


unsigned __int64 fn_82593BC8(unsigned __int64 param_1,int param_2,char param_3)

{
  char cVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  int iVar5;
  
  if (lbl_8329618C == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(lbl_8329618C + 4);
  }
  if ((iVar5 == 0) || (lbl_8329618C == 0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(lbl_8329618C + 4);
  }
  if (param_2 == 0) {
    if (param_3 == '\0') {
      uVar2 = 1;
      if (lbl_832659AC != 0) {
        uVar2 = 4;
      }
      fn_82A1C0C8(uVar2,0);
      lbl_832659D4 = 1;
      lbl_8326C2A8 = (int)param_1;
      return 0;
    }
    if (lbl_832659CD == '\0') {
      fn_82512568(param_1,0xffffffff82198594,1);
      fn_82593A50();
    }
    else if (((lbl_832659AC == 1) && (iVar5 != 0)) && (**(char **)(iVar5 + 0xd48) != '\0')) {
      fn_82512568(param_1,0xffffffff8219858c,0);
    }
    if ((iVar5 != 0) && (**(char **)(iVar5 + 0xd48) != '\0')) {
      lbl_8326C2A8 = 0xffffffff;
      return 0;
    }
    lbl_8326C2A8 = 0xffffffff;
    return 1;
  }
  piVar3 = &lbl_83265988;
  if (lbl_832659AC == 0) {
    fn_82593A50(param_2);
    return 1;
  }
  uVar4 = 0;
  do {
    if (*piVar3 == 0) goto LAB_82593c6c;
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 1;
  } while ((uVar4 & 0xffffffff) < 4);
  uVar4 = 4;
LAB_82593c6c:
  if (*(char *)(param_2 + 0xd8) == '\0') {
    cVar1 = fn_828EA610(param_2);
    uVar2 = 1;
    if (cVar1 == '\0') goto LAB_82593c90;
  }
  uVar2 = 0;
LAB_82593c90:
  fn_82512610(param_2,uVar4,uVar2,0);
  lbl_832659CC = 1;
  return 1;
}

