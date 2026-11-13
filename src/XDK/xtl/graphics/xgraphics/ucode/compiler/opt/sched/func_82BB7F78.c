extern int fn_82AB15D0();
extern int fn_82BB5C08();
extern int fn_82BC0088();


void fn_82BB7F78(unsigned int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  
  if (*(int *)(param_2 + 0x1c) < 0) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","sn->issue_cycle >= 0","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\sched.cpp",0x598);
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","sn->topdown_count == 0","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\sched.cpp",0x599);
  }
  uVar6 = 0;
  iVar1 = *(int *)(*(int *)(param_2 + 0x30) + 4);
  if (0 < iVar1) {
    iVar5 = 0;
    do {
      iVar2 = *(int *)(param_2 + 0x30);
      if ((uVar6) < (unsigned int)*(unsigned int *)(iVar2 + 4)) {
        piVar3 = (int *)(*(int *)(iVar2 + 8) + iVar5);
      }
      else {
        piVar3 = (int *)fn_82BC0088(iVar2,uVar6);
      }
      iVar2 = *(int *)(*piVar3 + 4);
      *(int *)(iVar2 + 0x24) = *(int *)(iVar2 + 0x24) + -1;
      iVar4 = *(int *)(param_2 + 0x30);
      if ((uVar6) < (unsigned int)*(unsigned int *)(iVar4 + 4)) {
        piVar3 = (int *)(*(int *)(iVar4 + 8) + iVar5);
      }
      else {
        piVar3 = (int *)fn_82BC0088(iVar4,uVar6);
      }
      iVar4 = *(int *)(iVar2 + 0x20);
      if (iVar4 < *(int *)(*piVar3 + 0xc) + *(int *)(param_2 + 0x1c)) {
        iVar4 = *(int *)(param_2 + 0x30);
        if ((uVar6) < (unsigned int)*(unsigned int *)(iVar4 + 4)) {
          piVar3 = (int *)(*(int *)(iVar4 + 8) + iVar5);
        }
        else {
          piVar3 = (int *)fn_82BC0088(iVar4,uVar6);
        }
        iVar4 = *(int *)(*piVar3 + 0xc) + *(int *)(param_2 + 0x1c);
      }
      *(int *)(iVar2 + 0x20) = iVar4;
      if (*(int *)(iVar2 + 0x24) == 0) {
        fn_82BB5C08(param_1,iVar2);
      }
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 4;
    } while ((int)uVar6 < iVar1);
  }
  return;
}

