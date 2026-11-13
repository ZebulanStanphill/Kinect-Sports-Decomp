extern int fn_82F17548();
extern int fn_82F175E8();
extern int fn_82F17A50();


unsigned __int64 fn_82ED5948(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 in_r10;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  int aiStack_30 [12];
  
  aiStack_30[0] = 0;
  if (*(int *)(param_1 + 0x4ef4) == 0) {
    iVar1 = fn_82F17A50(aiStack_30);
    *(int *)(param_1 + 0x4ef4) = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
    if ((aiStack_30[0] != 0) && (aiStack_30[0] != 7)) {
      return 0;
    }
  }
  else {
    aiStack_30[0] = fn_82F175E8();
  }
  if ((*(int *)(param_1 + 0x4ef4) != 0) && ((aiStack_30[0] == 0 || (aiStack_30[0] == 7)))) {
    if ((*(int *)(param_1 + 4) != 8) || (uVar2 = 2, *(int *)(param_1 + 0x6d40) != 0)) {
      uVar2 = 0;
    }
    iVar1 = fn_82F17548(*(int *)(param_1 + 0x4ef4),in_r10,in_stack_00000054,uVar2,
                              in_stack_0000005c,in_stack_00000064);
    if ((iVar1 == 0) || (iVar1 == 7)) {
      return 1;
    }
  }
  return 0;
}

