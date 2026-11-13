extern int fn_82AB15D0();
extern int fn_82B7BEB0();
extern int fn_82BBFD48();
extern int fn_82BC0088();
extern int fn_82BC6DC0();


void fn_82BB8880(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned char cVar6;
  int *piVar5;
  int iVar7;
  unsigned int uVar8;
  int iVar9;
  unsigned int uVar10;
  
  cVar6 = fn_82BBFD48(param_1 + 0x24);
  if (cVar6 == '\0') {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","ready_list.IsEmpty()","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\sched.cpp",0x535);
  }
  cVar6 = fn_82BBFD48(param_1 + 0x3c);
  if (cVar6 == '\0') {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","hold_list.IsEmpty()","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\sched.cpp",0x536);
  }
  cVar6 = fn_82BBFD48(param_1 + 0x54);
  if (cVar6 == '\0') {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","tried_list.IsEmpty()","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\sched.cpp",0x537);
  }
  uVar8 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 4);
  if (0 < iVar1) {
    iVar7 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x18);
      if ((uVar8) < (unsigned int)*(unsigned int *)(iVar2 + 4)) {
        piVar5 = (int *)(*(int *)(iVar2 + 8) + iVar7);
      }
      else {
        piVar5 = (int *)fn_82BC0088(iVar2,uVar8);
      }
      puVar3 = (unsigned int *)*piVar5;
      *(unsigned int *)(puVar3[10] + 0x37c) = 0;
      if ((int)puVar3[9] != 0) {
        fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","sn->topdown_count == 0","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\sched.cpp",0x53e);
      }
      if ((int)puVar3[7] < 0) {
        fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","sn->issue_cycle >= 0","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\sched.cpp",0x53f);
      }
      uVar10 = 0;
      iVar2 = *(int *)(puVar3[0xc] + 4);
      if (0 < iVar2) {
        iVar9 = 0;
        do {
          iVar4 = puVar3[0xc];
          if ((uVar10) < (unsigned int)*(unsigned int *)(iVar4 + 4)) {
            piVar5 = (int *)(*(int *)(iVar4 + 8) + iVar9);
          }
          else {
            piVar5 = (int *)fn_82BC0088(iVar4,uVar10);
          }
          iVar4 = *piVar5;
          if ((unsigned)iVar4 != 0) {
            { int *p=(int *)iVar4-1; fn_82B7BEB0(*p,p); }
          }
          uVar10 = uVar10 + 1;
          iVar9 = iVar9 + 4;
        } while ((int)uVar10 < iVar2);
      }
      if (puVar3[0xc] != 0) {
        fn_82BC6DC0(puVar3[0xc],1);
      }
      if (puVar3[0xd] != 0) {
        fn_82BC6DC0(puVar3[0xd],1);
      }
      (*(int (**)())*puVar3)(puVar3,1);
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + 4;
    } while ((int)uVar8 < iVar1);
  }
  uVar8 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 4);
  if (0 < iVar1) {
    iVar7 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x14);
      if ((uVar8) < (unsigned int)*(unsigned int *)(iVar2 + 4)) {
        piVar5 = (int *)(*(int *)(iVar2 + 8) + iVar7);
      }
      else {
        piVar5 = (int *)fn_82BC0088(iVar2,uVar8);
      }
      puVar3 = (unsigned int *)*piVar5;
      uVar10 = 0;
      iVar2 = *(int *)(puVar3[0xc] + 4);
      if (0 < iVar2) {
        iVar9 = 0;
        do {
          iVar4 = puVar3[0xc];
          if ((uVar10) < (unsigned int)*(unsigned int *)(iVar4 + 4)) {
            piVar5 = (int *)(*(int *)(iVar4 + 8) + iVar9);
          }
          else {
            piVar5 = (int *)fn_82BC0088(iVar4,uVar10);
          }
          iVar4 = *piVar5;
          if ((unsigned)iVar4 != 0) {
            { int *p=(int *)iVar4-1; fn_82B7BEB0(*p,p); }
          }
          uVar10 = uVar10 + 1;
          iVar9 = iVar9 + 4;
        } while ((int)uVar10 < iVar2);
      }
      if (puVar3[0xc] != 0) {
        fn_82BC6DC0(puVar3[0xc],1);
      }
      if (puVar3[0xd] != 0) {
        fn_82BC6DC0(puVar3[0xd],1);
      }
      (*(int (**)())*puVar3)(puVar3,1);
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + 4;
    } while ((int)uVar8 < iVar1);
  }
  *(unsigned int *)(*(int *)(param_1 + 0x18) + 4) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x14) + 4) = 0;
  return;
}

