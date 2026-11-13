extern int fn_82535298();
extern int fn_82536288();


void fn_82371930(int param_1,int param_2)

{
  int iVar1;
  int aiStack_20 [4];
  
  if (param_2 == 4) {
    aiStack_20[0] = *(int *)(param_1 + 0x2dc);
    *(unsigned int *)(param_1 + 0x264) = 0;
joined_r0x823719f4:
    if (aiStack_20[0] == 0) {
      return;
    }
    aiStack_20[0] =
         fn_82535298(aiStack_20,**(unsigned int **)(param_1 + 0x9b8),0xffffffff83296bc0,
                           0xffffffff83296bd0);
    fn_82536288(aiStack_20);
    iVar1 = *(int *)(param_1 + 0x264) + 1;
  }
  else {
    if (5 < param_2) {
      if (param_2 < 8) {
        if (*(int *)(param_1 + 0x264) != 1) {
          return;
        }
        aiStack_20[0] = *(int *)(param_1 + 0x2e0);
        goto joined_r0x823719f4;
      }
      if (param_2 == 0xb) {
        if (*(int *)(param_1 + 0x21c) == 0) {
          return;
        }
        if (*(int *)(param_1 + 0x264) != 2) {
          return;
        }
        aiStack_20[0] = *(int *)(param_1 + 0x2e4);
        if (aiStack_20[0] == 0) {
          return;
        }
        aiStack_20[0] =
             fn_82535298(aiStack_20,**(unsigned int **)(param_1 + 0x9b8),0xffffffff83296bc0,
                               0xffffffff83296bd0);
        fn_82536288(aiStack_20);
      }
    }
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x264) = iVar1;
  return;
}

