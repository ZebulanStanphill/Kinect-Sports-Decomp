extern int fn_82D7E470();
extern int fn_82E98148();
extern int fn_82EC7488();
extern unsigned int lbl_83248E44;
extern unsigned int lbl_83248E48;


void fn_82E81AE0(int param_1)

{
  int iVar1;
  int (**pcVar2)();
  
  if (*(int *)(param_1 + 4) == 8) {
    *(int (***)())(param_1 + 0x1b98) = fn_82D7E470;
    *(int (***)())(param_1 + 0x1b9c) = fn_82D7E470;
    if (*(int *)(param_1 + 0x76c8) == 0) {
      pcVar2 = fn_82EC7488;
    }
    else {
      pcVar2 = fn_82E98148;
    }
    *(int (***)())(param_1 + 0x1b94) = pcVar2;
    iVar1 = *(int *)(param_1 + 0x1fa8);
    *(unsigned int *)(param_1 + 0x644) = 1;
    *(unsigned int *)(param_1 + 0x5268) = 1;
    *(unsigned int *)(param_1 + 0x920) = 1;
    *(unsigned int *)(param_1 + 0x1b90) = *(unsigned int *)(param_1 + 0x1b98);
    *(unsigned int *)(param_1 + 0x760c) = 1;
    *(unsigned int *)(param_1 + 0x648) = 1;
    if (iVar1 == 0) {
      *(unsigned int *)(param_1 + 0x644) = 1;
      *(unsigned int *)(param_1 + 0x5268) = 0;
      *(unsigned int *)(param_1 + 0x920) = 0;
      *(unsigned int *)(param_1 + 0x760c) = 0;
      *(unsigned int *)(param_1 + 0x648) = 0;
    }
    else if (iVar1 == 1) {
      *(unsigned int *)(param_1 + 0x644) = 1;
      *(unsigned int *)(param_1 + 0x5268) = 0;
      *(unsigned int *)(param_1 + 0x920) = 1;
      *(unsigned int *)(param_1 + 0x760c) = 1;
      *(unsigned int *)(param_1 + 0x648) = 1;
    }
    else if (iVar1 == 2) {
      *(unsigned int *)(param_1 + 0x644) = 1;
      *(unsigned int *)(param_1 + 0x5268) = 1;
      *(unsigned int *)(param_1 + 0x920) = 1;
      *(unsigned int *)(param_1 + 0x760c) = 1;
      *(unsigned int *)(param_1 + 0x648) = 1;
    }
    else if (iVar1 == 3) {
      *(unsigned int *)(param_1 + 0x644) = 1;
      *(unsigned int *)(param_1 + 0x5268) = 1;
      *(unsigned int *)(param_1 + 0x920) = 1;
      *(unsigned int *)(param_1 + 0x760c) = 1;
      *(unsigned int *)(param_1 + 0x648) = 1;
    }
    else if ((iVar1 == 4) || (iVar1 == 5)) {
      *(unsigned int *)(param_1 + 0x644) = 1;
      *(unsigned int *)(param_1 + 0x5268) = 1;
      *(unsigned int *)(param_1 + 0x920) = 1;
      *(unsigned int *)(param_1 + 0x760c) = 1;
      *(unsigned int *)(param_1 + 0x648) = 1;
      if ((lbl_83248E44 == 0) && ((lbl_83248E48 == 0 && (*(char *)(param_1 + 0x7b30) == '\0')))) {
        *(unsigned char *)(param_1 + 0x7b30) = 1;
        *(unsigned int *)(param_1 + 0x7910) = 1;
        *(unsigned int *)(param_1 + 0x7914) = 2;
      }
    }
  }
  if (*(char *)(param_1 + 0x7b30) != -1) {
    return;
  }
  *(unsigned char *)(param_1 + 0x7b30) = 0;
  *(unsigned char *)(param_1 + 0x7b31) = 0;
  *(unsigned int *)(param_1 + 0x7b2c) = 0;
  return;
}

