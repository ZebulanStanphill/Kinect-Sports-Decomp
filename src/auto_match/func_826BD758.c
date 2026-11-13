extern int fn_826BD078();


__int64 fn_826BD758(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  __int64 lVar2;
  int aiStack_10 [4];
  
  aiStack_10[0] = (int)param_1;
  lVar2 = 0;
  if (param_2 == -1) {
    while (iVar1 = fn_826BD078(aiStack_10), iVar1 != 0) {
      lVar2 = lVar2 + 1;
    }
  }
  else if (0 < param_2) {
    do {
      iVar1 = fn_826BD078(aiStack_10);
      if (iVar1 == 0) {
        return lVar2;
      }
      lVar2 = lVar2 + 1;
    } while (aiStack_10[0] - (int)param_1 < param_2);
  }
  return lVar2;
}

