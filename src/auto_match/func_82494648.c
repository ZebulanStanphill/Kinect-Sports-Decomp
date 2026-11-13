extern int fn_8248F890();
extern int fn_824944A0();
extern int fn_82494B00();
extern int fn_824985E8();


void fn_82494648(int param_1,int *param_2)

{
  unsigned __int64 uVar1;
  int *apiStack_20 [2];
  
  if (*(int *)(*param_2 + 0x10) != 0) {
    fn_824944A0(apiStack_20,*(unsigned int *)(*(int *)(param_1 + 4) + 4),
                  *(unsigned int *)(*(int *)(param_1 + 4) + 8),param_2);
    if (apiStack_20[0] == *(int **)(*(int *)(param_1 + 4) + 8)) {
      uVar1 = fn_8248F890(0x68);
      if ((uVar1 & 0xffffffff) == 0) {
        apiStack_20[0] = (int *)0x0;
      }
      else {
        apiStack_20[0] =
             (int *)fn_824985E8(uVar1,param_2,*(unsigned int *)(*(int *)(param_1 + 4) + 0x14));
      }
      (**(int (***)())(*apiStack_20[0] + 0xc))((double)**(float **)(param_1 + 8));
      fn_82494B00((unsigned __int64)*(unsigned int *)(param_1 + 4) + 4,apiStack_20);
    }
    else {
      (**(int (***)())(*(int *)*apiStack_20[0] + 0xc))((double)**(float **)(param_1 + 8));
    }
  }
  return;
}

