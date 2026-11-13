extern int fn_82C10B28();


void fn_82C12978(int param_1,int *param_2)

{
  int iVar1;
  int aiStack_30;
  
  aiStack_30 = *param_2;
  while (aiStack_30 != 0) {
    iVar1 = *(int *)(*(int *)(aiStack_30 + 0x14) + 4);
    fn_82C10B28(*(unsigned int *)(param_1 + 0x40),3,aiStack_30);
    fn_82C10B28(*(unsigned int *)(param_1 + 0x40),3,aiStack_30 + 0x14);
    fn_82C10B28(*(unsigned int *)(param_1 + 0x40),3,&aiStack_30);
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
    aiStack_30 = iVar1;
  }
  *param_2 = 0;
  return;
}

