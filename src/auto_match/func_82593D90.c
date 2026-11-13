extern int fn_82598D50();
extern int iRam8326c2bc;
extern unsigned int iStack_20;
extern unsigned int lbl_8326C2AC;
extern unsigned int lbl_8329618C;
extern unsigned int uRam8326c2b4;


unsigned __int64 fn_82593D90(void)

{
  unsigned int uVar1;
  int iVar2;
  int iStack_20;
  int aiStack_1c [3];
  
  if ((lbl_8326C2AC != 1) || (iRam8326c2bc != 0)) {
    return 0;
  }
  if (lbl_8329618C == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(lbl_8329618C + 4);
  }
  if (iVar2 != 0) {
    if (lbl_8329618C == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(lbl_8329618C + 4);
    }
    if (**(char **)(iVar2 + 0xd48) == '\0') {
      if (lbl_8329618C == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(unsigned int *)(lbl_8329618C + 4);
      }
      fn_82598D50(uVar1,aiStack_1c,&iStack_20);
      if (aiStack_1c[0] == 0) {
        if (iStack_20 == 0) {
          return 0;
        }
      }
      else if (iStack_20 != 0) {
        uRam8326c2b4 = 0;
        return 1;
      }
      uRam8326c2b4 = 1;
      return 1;
    }
    return 0;
  }
  return 0;
}

