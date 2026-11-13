extern int fn_828223C8();
extern int fn_82F672D8();


void fn_82826748(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int aiStack_30 [12];
  
  iVar1 = param_1 + 0x2f4;
  do {
    fn_828223C8(iVar1,aiStack_30);
    if (aiStack_30[0] == 0) {
      return;
    }
    iVar1 = aiStack_30[0];
  } while (*(char *)(aiStack_30[0] + 0x14) != *(char *)(param_2 + 0x28));
  if (*(int *)(aiStack_30[0] + 8) != 0) {
    fn_82F672D8(param_3,*(int *)(aiStack_30[0] + 8),param_4);
    *(unsigned char *)(param_3 + param_4 + -1) = 0;
  }
  return;
}

