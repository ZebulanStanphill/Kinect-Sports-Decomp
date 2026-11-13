extern int fn_8265CA20();
extern int fn_82E1D838();
extern int fn_82E1E820();
extern int fn_82E1FFE8();
extern unsigned int lbl_8214B798;
extern unsigned int lbl_821C7E88;


void fn_82E1D358(unsigned int *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &lbl_8214B798;
  fn_82E1FFE8();
  iVar1 = param_1[2];
  if (iVar1 != 0) {
    fn_82E1D838(iVar1);
    fn_8265CA20(iVar1);
    param_1[2] = 0;
  }
  iVar1 = param_1[3];
  if (iVar1 != 0) {
    fn_82E1E820(iVar1);
    fn_8265CA20(iVar1);
    param_1[3] = 0;
  }
  iVar1 = 0;
  if (0 < (int)param_1[5]) {
    iVar2 = 0;
    do {
      if (*(int *)(iVar2 + param_1[8]) != 0) {
        fn_8265CA20(*(int *)(iVar2 + param_1[8]));
        *(unsigned int *)(iVar2 + param_1[8]) = 0;
      }
      if (*(int *)(iVar2 + param_1[9]) != 0) {
        fn_8265CA20(*(int *)(iVar2 + param_1[9]));
        *(unsigned int *)(iVar2 + param_1[9]) = 0;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < (int)param_1[5]);
  }
  if (param_1[7] != 0) {
    fn_8265CA20();
    param_1[7] = 0;
  }
  if (param_1[8] != 0) {
    fn_8265CA20();
    param_1[8] = 0;
  }
  if (param_1[9] != 0) {
    fn_8265CA20();
    param_1[9] = 0;
  }
  *param_1 = &lbl_821C7E88;
  return;
}

