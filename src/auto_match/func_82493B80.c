extern int fn_8248F890();
extern int fn_82494B00();
extern int fn_82494CD8();


void fn_82493B80(unsigned __int64 param_1,int param_2)

{
  int *piVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  int *piVar4;
  int *apiStack_50 [20];
  
  piVar1 = *(int **)(*(int *)(param_2 + 0x14) + 8);
  for (piVar4 = *(int **)(*(int *)(param_2 + 0x14) + 4); piVar4 < piVar1; piVar4 = piVar4 + 2) {
    if (*(int *)(*piVar4 + 0xb50) == 0) {
      for (piVar3 = *(int **)(param_2 + 4);
          (piVar3 != *(int **)(param_2 + 8) && (*piVar4 != *(int *)(*piVar3 + 0x90)));
          piVar3 = piVar3 + 1) {
      }
      if (piVar3 == *(int **)(param_2 + 8)) {
        uVar2 = fn_8248F890(0xa0);
        if ((uVar2 & 0xffffffff) == 0) {
          apiStack_50[0] = (int *)0x0;
        }
        else {
          apiStack_50[0] = (int *)fn_82494CD8(uVar2,*piVar4);
        }
        (**(int (***)())(*apiStack_50[0] + 0xc))(param_1);
        fn_82494B00(param_2 + 4,apiStack_50);
      }
      else {
        (**(int (***)())(*(int *)*piVar3 + 0xc))(param_1);
      }
    }
  }
  return;
}

