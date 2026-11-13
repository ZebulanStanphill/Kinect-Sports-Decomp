extern int fn_82775EB0();


void fn_827760B8(int param_1,int *param_2)

{
  int iVar1;
  
  RtlEnterCriticalSection(param_1 + 0x9e4);
  if (param_2 != (int *)0x0) {
    iVar1 = param_2[2];
    if (param_2[3] == param_1) {
      if (iVar1 != 0) {
        fn_82775EB0(iVar1,1);
      }
      *(int *)(*param_2 + 4) = param_2[1];
      *(int *)param_2[1] = *param_2;
      *param_2 = *(int *)(param_1 + 0x30);
      *(int **)(param_1 + 0x30) = param_2;
    }
    else {
      if (iVar1 != 0) {
        fn_82775EB0(iVar1,1);
      }
      param_2[2] = 0;
    }
  }
  RtlLeaveCriticalSection(param_1 + 0x9e4);
  return;
}

