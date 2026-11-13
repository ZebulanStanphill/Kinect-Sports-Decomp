extern int fn_82FA5060();
extern int fn_8300CE00();
extern int fn_8300CE88();
extern int fn_8300CF30();
extern unsigned int lbl_831BC768;


unsigned int fn_82FB7980(int param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int uVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (*(int *)(param_1 + 0x1c) == 1) {
      iVar2 = fn_82FA5060(lbl_831BC768,0x10);
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = fn_8300CE88();
      }
      *(unsigned int *)(param_1 + 0x20) = uVar3;
    }
    else if (*(int *)(param_1 + 0x1c) == 3) {
      uVar1 = fn_82FA5060(lbl_831BC768,0x2c);
      if ((uVar1 & 0xffffffff) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = fn_8300CF30(uVar1,*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2 & 0xffff
                            );
      }
      *(int *)(param_1 + 0x20) = (int)uVar1;
      if (((uVar1 & 0xffffffff) != 0) &&
         (iVar2 = fn_8300CE00(uVar1,*(unsigned short *)(param_1 + 0x28)), iVar2 != 1)) {
        (**(int (***)())(**(int **)(param_1 + 0x20) + 4))();
        *(unsigned int *)(param_1 + 0x20) = 0;
      }
      if ((*(int *)(param_1 + 0x20) != 0) && (*(char *)(param_1 + 0x24) != '\0')) {
        iVar2 = 0;
        for (piVar4 = *(int **)(param_1 + 0x10); piVar4 != *(int **)(param_1 + 0x14);
            piVar4 = piVar4 + 1) {
          iVar2 = (unsigned int)*(unsigned short *)(*piVar4 + 0xe) + iVar2;
        }
        *(int *)(*(int *)(param_1 + 0x20) + 0x10) = iVar2;
        *(int *)(*(int *)(param_1 + 0x20) + 0xc) = iVar2;
      }
    }
  }
  return *(unsigned int *)(param_1 + 0x20);
}

