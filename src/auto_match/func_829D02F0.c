extern int fn_829CB790();


unsigned __int64 fn_829D02F0(unsigned __int64 param_1,int param_2)

{
  int *piVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int *piVar4;
  int aiStack_30;
  
  if (((param_1 & 0xffffffff) == 0) || (param_2 == 0)) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    aiStack_30 = 0;
    iVar3 = ObReferenceObjectByHandle(param_1,0xffffffff8315c408,&aiStack_30);
    if (iVar3 < 0) {
      uVar2 = RtlNtStatusToDosError();
      if (0 < (int)uVar2) {
        uVar2 = uVar2 & 0xffff | 0x80070000;
      }
    }
    else {
      piVar4 = (int *)(param_2 + -8);
      if ((unsigned int)(((int)piVar4 - *(int *)(aiStack_30 + 0x1c)) / 0x78) <
          *(unsigned int *)(aiStack_30 + 0x18)) {
        RtlEnterCriticalSection(0xffffffff8315c428);
        if (*(int *)(param_2 + 100) == 1) {
          iVar3 = *piVar4;
          piVar1 = *(int **)(param_2 + -4);
          *piVar1 = iVar3;
          *(int **)(iVar3 + 4) = piVar1;
          *(unsigned int *)(param_2 + 100) = 0;
          fn_829CB790(param_2 + 0x28);
          iVar3 = *(int *)(aiStack_30 + 0x24);
          *(unsigned int **)(param_2 + -4) = (unsigned int *)(aiStack_30 + 0x24);
          *piVar4 = iVar3;
          *(int **)(iVar3 + 4) = piVar4;
          *(unsigned int *)(aiStack_30 + 0x24) = piVar4;
          *(int *)(aiStack_30 + 0x2c) = *(int *)(aiStack_30 + 0x2c) + -1;
          RtlLeaveCriticalSection(0xffffffff8315c428);
          ObDereferenceObject(aiStack_30);
          uVar2 = 0;
        }
        else {
          uVar2 = 0xffffffff80070057;
          RtlLeaveCriticalSection(0xffffffff8315c428);
          ObDereferenceObject(aiStack_30);
        }
      }
      else {
        uVar2 = 0xffffffff80070057;
        ObDereferenceObject();
      }
    }
  }
  return uVar2;
}

