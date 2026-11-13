extern int fn_82BA02A8();
extern int fn_82C53970();
extern int fn_82C563B0();
extern int fn_82CBBD70();
extern int free();


void fn_82C55220(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    if (param_1[7] != -1) {
      if (param_1[3] == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = param_1[3] + -1;
        iVar2 = param_1[1];
        iVar1 = iVar3 * 4;
        param_1[3] = iVar3;
        iVar3 = *(int *)(iVar1 + iVar2);
        *(unsigned int *)(iVar1 + iVar2) = 0;
      }
      if (param_1[6] != 0) {
        iVar2 = param_1[6] + -1;
        param_1[6] = iVar2;
        *(unsigned int *)(iVar2 * 4 + param_1[4]) = 0;
      }
      while (iVar3 != 0) {
        fn_82C563B0((unsigned __int64)(unsigned int)param_1[9] + 8,iVar3);
        if (param_1[3] == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = param_1[3] + -1;
          iVar2 = param_1[1];
          iVar1 = iVar3 * 4;
          param_1[3] = iVar3;
          iVar3 = *(int *)(iVar1 + iVar2);
          *(unsigned int *)(iVar1 + iVar2) = 0;
        }
        if (param_1[6] != 0) {
          iVar2 = param_1[6] + -1;
          param_1[6] = iVar2;
          *(unsigned int *)(iVar2 * 4 + param_1[4]) = 0;
        }
      }
    }
    fn_82CBBD70(param_1 + 1);
    fn_82CBBD70(param_1 + 4);
    if (*param_1 != 0) {
      fn_82C53970();
      *param_1 = 0;
    }
    fn_82BA02A8((unsigned __int64)(unsigned int)param_1[9] + 8,param_1);
    free(param_1);
  }
  return;
}

