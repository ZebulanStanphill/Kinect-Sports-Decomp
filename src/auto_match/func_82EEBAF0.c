extern unsigned int *auStack_20;
extern int fn_82EEBAA0();


extern unsigned int lbl_821549A8;

unsigned int fn_82EEBAF0(int param_1)

{
  unsigned int uVar1;
  unsigned int auStack_20 [2];
  
  uVar1 = fn_82EEBAA0();
  auStack_20[0] = 0;
  if (uVar1 == 0) {
    (*(int (**)())(**(int **)(param_1 + 0x38) + 0x1c))
              (*(int **)(param_1 + 0x38),&lbl_821549A8,auStack_20);
    if (auStack_20[0] != 0) {
      (*(int (**)())(**(int **)(param_1 + 0x3c) + 0x14))(*(int **)(param_1 + 0x3c),auStack_20[0],0);
      uVar1 = auStack_20[0];
    }
  }
  return uVar1;
}

